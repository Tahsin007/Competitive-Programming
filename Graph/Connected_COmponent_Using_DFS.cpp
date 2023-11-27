#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
bool visited[N];
vector<int> adj[N];

void dfs(int source)
{
    visited[source] = true;
    // cout << source << " ";
    for (int child : adj[source])
    {
        if (visited[child])
        {
            continue;
        }
        dfs(child);
    }
}

int main()
{
    int edges,node;
    
    cin>>node;
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int count=0;

    for(int i=0;i<node;i++){
        if(visited[i]){
            continue;
        }
        dfs(i);
        count++;
    }
    cout<<count<<endl;

}
