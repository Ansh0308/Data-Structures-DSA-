#include<iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define V 4
#define INF INT_MAX
    void pgraph(int dist[][V]){
    cout<<"Vertex \t Distance from Source\n";
    for(int i=0;i<V;i++){
        cout<<i<<" \t";
        for(int j=0;j<V;j++){
            if(dist[i][j]==INF)
                cout<<"INF ";
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}
void floydwarshall(int dist[][V]){
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][k]!=INF && dist[k][j]!=INF && dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    pgraph(dist);
}



int main(){
    int graph[V][V]={{0,5,INF,4},{INF,0,5,INF},{3,INF,0,INF},{INF,INF,2,0}};
    floydwarshall(graph);

    return 0;
}