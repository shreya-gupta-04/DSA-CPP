#include<iostream>
#include<queue>
#include<vector>
#include<array>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adjl[n+1];
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>> a>>b;
        adjl[a].push_back(b);
        adjl[b].push_back(a);
    }
    int vis[n]={0};
    vis[0]={1};
    queue<int> q;
    vector<int> bfs;
   while(!q.empty())
   {
    int node=q.front();
    q.pop();
    bfs.push_back(node);
    for(auto it:adjl[node])
    {
        if(!vis[it])
        {
            vis[it]=1;
            q.push(it);
        }
    }
   }
    return bfs;
}
