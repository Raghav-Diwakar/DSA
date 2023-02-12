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
    for (auto i : v)
        cout << i << " ";

    


    return 0;
}