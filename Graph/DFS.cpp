#include<bits\stdc++.h>
using namespace std;
const int N=1e3+2;

vector<int> adj[N];
bool vis[N];
void dfs(int source){
    vis[source]=true;
    cout<<source<<endl;
    for(int child : adj[source]){
        if(vis[child])continue;
        dfs(child);
    }

}
int main(){
    int edges;
    cin>>edges;
    int source=0;
    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(source);
}
