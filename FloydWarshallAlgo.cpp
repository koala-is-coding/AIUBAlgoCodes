//floyd-Warshall algorithm for all pair shortest path
#include<iostream>
using namespace std;
#define V 5
void floydwar(int graph[V][V]){
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(graph[i][k]!=INT_MAX && graph[k][j] !=INT_MAX &&  graph[i][j]>(graph[i][k]+graph[k][j])){
                    graph[i][j]=graph[i][k]+graph[k][j];
                }
            }
        }
    }
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[i][j] == INT_MAX)
                cout << "INF"
                     << " ";
            else
                cout << graph[i][j] << "   ";
        }
        cout << endl;
    }
}
int main(){
    int graph[V][V]={{0,6,2,4,INT_MAX},
                     {6,0,3,1,1},
                     {2,3,0,INT_MAX,1},
                     {4,1,INT_MAX,0,INT_MAX},
                     {INT_MAX,1,1,INT_MAX,0}};

floydwar(graph);
    
}

//g[0,1]=g[0,2]+g[2,1]