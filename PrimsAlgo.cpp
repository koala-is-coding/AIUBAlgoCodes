//Prims algorithm
#include<iostream>
using namespace std;
#define V 5
int minkey(bool visited[],int key[]){
    int min=INT_MAX;int min_ind=0;
    for(int i=0;i<V;i++){
        if(!visited[i] && min>=key[i]){
            min = key[i];min_ind=i;
        }
    }
    return min_ind;
}
void printMST(int parent[], int graph[V][V])
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t"
             << graph[i][parent[i]] << " \n";
}
void prims(int graph[V][V],int startNode){
    //visited,parent,key
    bool visited[V]={false};
    int key[V]={INT_MAX};
    int parent[V]={0};
    //pick first vertex
    parent[startNode]=-1;key[startNode]=0;
    for(int count=0;count<V-1;count++){
        int u=minkey(visited,key);
        //include minimum weighted edge in visited
        visited[u]=true;
        //update edge
        for(int i=0;i<V;i++){
            if(graph[u][i] != 0 && visited[i]==false && graph[u][i]<key[i]){
              parent[i]=u;  key[i]=graph[u][i];
            }
        }
    }
    printMST(parent,graph);
}
int main(){
    int graph[V][V]={{0,1,2,0,0},
                     {1,0,3,0,0},
                     {2,0,0,6,5},
                     {0,3,6,0,4},
                     {0,0,5,4,0},
    };
    prims(graph,0);
}