#include <bits\stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> adj[N];
queue<int> q;
bool visited[N];

void bfs(int source){
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int curr_vert = q.front();
        q.pop();
        cout<<curr_vert<<" ";
        for(int child:adj[curr_vert]){
            if(!visited[child]){
                q.push(child);
                visited[child]=1;
            }
        }
    }
}

int main(){
    int edge;
    cin>>edge;
    for(int i=0;i<edge;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int source =0;
    bfs(source);
}
