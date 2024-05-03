//Breadth First Search
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define V 9
int result[V-1];
int idx=0;
void BFS(vector<vector<int>>& adj,int startNode){
bool visited[V]={false};
queue<int> q;
//pick first vertex 
visited[startNode]=true;q.push(startNode);

while(!q.empty()){
    int node = q.front();
    result[idx++]=node;
    q.pop();
    for(int it : adj[node]){
        if(!visited[it]){
            q.push(it);visited[it]=true;
        }
    }
}

}
int main(){
vector<vector<int>> adj(9);
adj[1].push_back(2);adj[1].push_back(6);
adj[2].push_back(3);adj[2].push_back(4);
adj[6].push_back(7);adj[6].push_back(8);
adj[4].push_back(5);

BFS(adj,1);
cout<<"BFS traversal::"<<" ";
for(int i=0;i<idx;i++){
    cout<<result[i]<<" ";
}

}