#include <iostream>
// Header file include for set
#include <set>
using namespace std ;
int main(){

    // Declare set variable name (s) and data type (int)
    // Properties of Set is it doesn't include repeated element
    set<int>s;
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    
    
    // Printing using (auto)
    for (auto i : s)
    {
        cout<<i<<" ";
    }

    cout<<endl<<endl;

    // Using of iterator (it)
    // Declare iterator
    set<int>::iterator it ;
    for (it= s.begin();it!= s.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl<<endl;

    // if iterating from a particular element 
    it = s.find(2);
    for (it;it!= s.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl<<endl;

    // For Deleting a element 
    s.erase(1);
    // For finding element in Set 
    // Return 1 if found else 0
    cout<<s.count(1);

    cout<<endl<<endl;

    // For Declaring set in Descinding order of element
    set<int,greater<int>>Ds;
    Ds.insert(1);
    Ds.insert(2);
    Ds.insert(3);
    Ds.insert(4);
    for (auto j:Ds)
    {
        cout<<j<<" ";
    }
    
    return 0 ;
}
