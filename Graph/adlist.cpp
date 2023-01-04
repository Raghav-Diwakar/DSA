#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, v, e;

    cout << "enter the no of vertices";
    cin >> v;
    cout << "enter the no of edges";
    cin >> e;
    vector<int> A[v];
    for (int i = 1; i <= e; i++)
    {
        cout << "enter the edges" << i;
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }

    for (int i = 0; i < v; i++)
    {
        cout << i << ":";
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << A[i][j]<<",";
        }
        cout<<endl;
    }
}