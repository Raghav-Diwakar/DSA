#include <iostream>
#include <vector>
using namespace std;
int DFS_visit(int i, int visited[], int dis)
{
    cout << i;
    visited[i] = 1;
    int adj[100];
    for (int j = 1; j < adj[j]; j++)
    {
        if (visited[j] == 0)
        {
            DFS_visit(j, visited[], dis)
            {
                dis[j] = i;
            }
        }
    }
}
int main()
{
    // vector<int> A[v];
    // int dis[v];
    int visited[v] = {0};
    for (int i; i < v; i++)
    {
        if (visited[i] == 0)
        {
            DFS_visit(i, visited[i], dis);
        }
    }
}