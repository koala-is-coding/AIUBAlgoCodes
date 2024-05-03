//Dijkstrs Algorithm for single pair shortest path
//Prims algorithm
#include<iostream>
using namespace std;
#define V 5
int minkey(bool visited[],int key[]){
    int min=INT_MAX;int min_ind=0;
    for(int i=0;i<V;i++){
        if(!visited[i] && min>key[i]){
            min = key[i];min_ind=i;
        }
    }
    return min_ind;
}
void printSolution(int dist[])
{
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout << i << " \t\t\t\t" << dist[i] << endl;
}
void dijkstra(int graph[V][V],int startNode){
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
            if(graph[u][i] != 0 && !visited[i] && key[u]+graph[u][i]>key[i]){
              parent[i]=u;  key[i]=graph[u][i]+key[u];
            }
        }
    }
    printSolution(key);
}
int main(){
    int graph[V][V]={{0,1,2,INT_MAX,INT_MAX},
                     {1,0,3,0,0},
                     {2,0,0,6,5},
                     {0,3,6,0,4},
                     {0,0,5,4,0},
    };
    dijkstra(graph,0);
}