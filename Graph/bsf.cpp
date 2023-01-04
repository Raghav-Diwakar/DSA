#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int v,e,a,b;
    cout<<"How many vertices=";
    cin>>v;
    cout<<"How many edges=";
    cin>>e;
    vector<int>arr[v][v];
    vector<int>adjlist[v];
    for(int i=0;i<=v;i++)
    {
        cout<<"Enter end points of edges ";
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    for(int i=0;i<v;i++)
    {
        cout<<i<<":";
        for(int j=0;j<adjlist[i].size();j++)
        {
            cout<<adjlist[i][j]<<",";
        }
        cout<<" ";
        cout<<"degree of vector "<<i<<"="<<adjlist[i].size();
        cout<<endl;
    }
    /*int p,q;
    for(int i=0;i<=v;i++)
    {
        cout<<"Enter edges=";
        cin>>p>>q;
        arr[p][q].push_back(1);
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            printf("%d ",arr[i][j]);
        }
        cout<<endl;
    }*/
    vector<int>visited(v,0);
    queue<int>s;
    visited[0]=1;
    s.push(0);
    while(s.size()!=0)
    {
        int x=s.front();
        cout<<x<<",";
        s.pop();
        for(int i=0;i<adjlist[x].size();i++)
        {
           int f=adjlist[x][i];
           if(visited[f]==0)
           {
              visited[f]=1;
              s.push(f);
           }
        }
    }
}