#include<bits/stdc++.h>

using namespace std;

#define INF 9999
#define V 4

void printgraph(int graph[][V]){
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

void floydWarsal(int graph[][V]){

    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if(graph[i][j]>graph[i][k]+graph[k][j]){
                    graph[i][j]=graph[i][k]+graph[k][j];
                }
            }
            
        }
        
    }

    printgraph(graph);
    
}

int main()
{
    // int n,e;
    // cin>>n;

    // int graph[V][V]={
    //     {0,3,INF,5},
    //     {2,0,INF,4},
    //     {INF,1,0,INF},
    //     {INF,INF,2,0}
    // };
    int graph[V][V]={ { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
 


    floydWarsal(graph);



  
    return 0;
}


/*
Time complexity 0(n^3)
Space Complexity 0(n^2)
*/
