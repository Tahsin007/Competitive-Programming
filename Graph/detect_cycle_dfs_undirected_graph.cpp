class Graph {

public:

    bool detectCycle(int source,vector<int> adj[],int visited[]){
        visited[source] =1 ;
        queue<pair<int,int>>q;
        q.push({source,-1});
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(int child:adj[node]){
                if(!visited[child]){
                    visited[child]=1;
                    q.push({child,node});
                }else if(child!=parent){
                    return true;
                    
                }
            }
        }
        return false;
    }
    bool detectCycle(int V, vector<int> adj[]) {
        // Write your code here.
        int source = 1;
        int vis[V] ={0};
        return detectCycle(source,adj,vis);
    }
};
