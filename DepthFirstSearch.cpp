//Depth First Search
#include<iostream>
#include<vector>
using namespace std;
#define V 9
int result[V-1];
int idx=0;
void DFS(vector<vector<int>>& adj,int startNode,bool Visited[]){
    //pick startnode,add it to result arr,mark as visited,search for its adjacent matrices and call recursive function of those vertices
    Visited[startNode]=true;result[idx++]=startNode;
    for(int node : adj[startNode]){
      if(!Visited[node]){
        DFS(adj,node,Visited);
      }
    }
}
int main(){
    vector<vector<int>> adj(9);
adj[1].push_back(2);adj[1].push_back(6);
adj[2].push_back(3);adj[2].push_back(4);
adj[6].push_back(7);adj[6].push_back(8);
adj[4].push_back(5);
bool visited[V]={false};
DFS(adj,1,visited);

cout<<"DFS traversal::"<<" ";
for(int i=0;i<idx;i++){
    cout<<result[i]<<" ";
}

}