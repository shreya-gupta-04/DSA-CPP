//Graph REPRESENTATION
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Using Matrix
    int n,m;
    cin>> n>>m;
    int adj[n+1][n+1];
    for(int i=0;i<m;i++)
    {
       int u,v;
       cin>>u>>v;
       adj[u][v]= 1;
       adj[v][u]=1;
    }
    /*List:
    for undirected:  adjl[u].push_back(v); adjl[v].push_back(u);
    for ndirected: adjl[u].push_back(v);
    */
    vector<int> adjl[n+1];
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>> a>>b;
        adjl[a].push_back(b);
        adjl[b].push_back(a);
    }
    return 0;
}

