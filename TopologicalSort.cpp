//Topological sort
#include<iostream>
#include<vector>
#include<queue>
#define V 4
using namespace std;
int print[V];
int idx=0;
void TopoSort(vector<vector<int>>& adj){
    int indegree[V]={0};
    //search for indegree values
    for(int i=0;i<V;i++){
        for(int node : adj[i]){
          indegree[node]++;
        }
    }
    //add 0 indegree vertices on queue
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){q.push(i);}

    }
    //dequeue,store in print arr,reduce indegrees of adjacent vertices,if any adjacent indegree=0 add it to q,
    while(!q.empty()){
        int node = q.front();
        print[idx++]=node;
        q.pop();
        for(int it : adj[node]){
            indegree[it]--;
            if(indegree[it]==0){q.push(it);}
        }

    }
}
int main(){
vector<vector<int>> adj(V);
adj[0].push_back(1);
adj[1].push_back(2);
adj[3].push_back(1);adj[3].push_back(2);//adj[0]=[1],adj[1]=[2],adj[3]=[1,2]
TopoSort(adj);
cout<<"Topological sort::"<<" ";
for(int i=0;i<V;i++){cout<<print[i]<<" ";}
}