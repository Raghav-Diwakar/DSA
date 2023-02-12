#include<bits/stdc++.h>
using namespace std ;
// Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.

struct data {
int roll_no ;
string name ;
int age ;
int marks ;
};
int main (){
     struct data students[5];
    for (int i = 1 ; i <= 5 ; i++){
        cout<<"Enter Data of "<<i<<" Students\n";
        cout<<"enter roll no\n";
        cin>>students[i].roll_no;
        cout<<"enter name\n";
        cin>>students[i].name;
        cout<<"enter age\n";
        cin>>students[i].age;
        cout<<"enter marks\n";
        cin>>students[i].marks;
    }
    for (int i = 1 ; i <= 5 ; i++){
        cout<<"Data of ",i ,"Students";
        cout<<students[i].roll_no<<"\n";
        cout<<students[i].name<<"\n";
        cout<<students[i].age<<"\n";
        cout<<students[i].marks<<"\n";
    }
}
