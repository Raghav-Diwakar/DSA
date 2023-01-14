#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void DFS_visit(vector<int> Adj[], vector<int> &status, int i)
{
    status[i] = 1;
    cout << i;
    for (int j = 0; j < Adj[i].size(); j++)
    {
        if (status[Adj[i][j]] == 0)
        {
            DFS_visit(Adj, status, Adj[i][j]);
        }
    }
}
void DFS(vector<int> Adj[], int N)
{
    vector<int> status(N, 0);
    for (int i = 0; i < N; i++)
    {
        if (status[i] == 0)
            DFS_visit(Adj, status, i);
    }
    status[0] = 1;
}
int main()
{
    int N, E, i, a, b;
    cout << "Enter the no. of vertices ";
    cin >> N;
    vector<int> Adj[N];
    cout << "enter the no of edges ";
    cin >> E;
    for (i = 1; i <= E; i++)
    {
        cout << "enter the endpoints of edge " << i << ": ";
        cin >> a >> b;
        Adj[a].push_back(b);
        Adj[b].push_back(a);
    }
    for (i = 0; i < N; i++)
    {
        int j = 0;
        cout << i << ": ";
        for (j = 1; j <= Adj[i].size(); j++)
        {
            cout << Adj[i][j] << ",";
        }
        cout << endl;
        cout << "order of dfs is ";
        DFS(Adj, N);
        return 0;
    }
}