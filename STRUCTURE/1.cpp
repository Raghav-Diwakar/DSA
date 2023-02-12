#include <bits/stdc++.h>
using namespace std ;
// Ques :- Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the student is eligible for admission in Delhi University. A student is eligible for DU if he has scored 95 % or more in Best 4.
struct Students
{
    string name ;
    int roll_no ;
    int marks_1 ;int marks_2 ;int marks_3 ;int marks_4 ;int marks_5;int marks_6 ;
};
float avg_best4(int a,int b,int c,int d,int e,int f){
    // code to be written 
}
main (){
    Students a ;
    cout<<"Enter the name of student\n";
    cin>>a.name;
    cout<<"Enter the Roll no of students\n";
    cin>>a.roll_no;
    cout<<"Enter the Marks of 6 subject of 12th class\n";
    cout<<"Enter 1st Subject marsk\n";
    cin>>a.marks_1;
    cout<<"Enter 2nd Subject marsk\n";
    cin>>a.marks_2;
    cout<<"Enter 3rd Subject marsk\n";
    cin>>a.marks_3;
    cout<<"Enter 4th Subject marsk\n";
    cin>>a.marks_4;
    cout<<"Enter 5th Subject marsk\n";
    cin>>a.marks_5;
    cout<<"Enter 6th Subject marsk\n";
    cin>>a.marks_1;

    int avg = avg_best4(a.marks_1,a.marks_2,a.marks_3,a.marks_4,a.marks_5,a.marks_6);
    if (avg >= 95){
        cout<<"You are eligible for Delhi University\n";
    }
    else {
        cout<<"Sorry ! You are not eligible for Delhi University";
    }
    
}