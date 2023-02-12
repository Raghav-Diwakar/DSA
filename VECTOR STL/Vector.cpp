#include <iostream>
#include <vector>

using namespace std;
int main()
{
    /*
    vector<int> v;
    v.push_back(3);
    cout << "Size => " << v.size() << endl;
    cout << "Capacity => " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size => " << v.size() << endl;
    cout << "Capacity => " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size => " << v.size() << endl;
    cout << "Capacity => " << v.capacity() << endl;
    v.push_back(4);
    cout << "Size => " << v.size() << endl;
    cout << "Capacity => " << v.capacity() << endl;
    v.push_back(5);
    cout << "Size => " << v.size() << endl;
    cout << "Capacity => " << v.capacity() << endl;

    // Printing using for loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    // Printing using auto loop
    for (auto i : v)
    cout<<i<<" ";

    */

   // Declaring vector size of 5 size and each value 2 
    vector<int> v(5, 2);
    // for (auto i : v)
    //     cout << i << " ";

    // Declaring  array of vector
    vector<int>va[4];
    va[0].push_back(2);
    va[0].push_back(4);
    va[0].push_back(6);
    va[0].push_back(8);
    va[1].push_back(3);
    va[1].push_back(6);
    va[1].push_back(9);
    va[2].push_back(4);
    va[2].push_back(8);
    va[2].push_back(12);
    va[2].push_back(16);
    va[3].push_back(1);
    va[3].push_back(2);
    va[3].push_back(3);
    va[3].push_back(4);

    for (int i = 0 ; i < va->size() ; i++)
    {   
        cout<<i<<" : ";
        for (int j = 0 ; j < va[i].size();j++)
        {
            cout<<va[i][j]<<" , ";
        }
        cout<<endl;

    }
    
    // We can also print using at like 
    for (int i = 0 ; i < v.size();i++)
    {
        cout<<v.at(i)<<",";
    }


    return 0;
}