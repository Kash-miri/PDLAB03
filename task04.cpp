#include<iostream>
using namespace std;
int main()
{
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
int total;
string name;
float percent;
cout<<"Enter student's name=";
cin>>name;
cout<<"Enter 1st subject marks=";
cin>>sub1;
cout<<"Enter 2nd subject marks=";
cin>>sub2;
cout<<"Enter 3rd subject marks=";
cin>>sub3;
cout<<"Enter 4th subject marks=";
cin>>sub4;
cout<<"Enter 5th subject marks=";
cin>>sub5;
total=sub1+sub2+sub3+sub4+sub5;
percent=total*100/500;
cout<<"Student's percentage="<<percent;
}