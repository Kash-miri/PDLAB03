#include<iostream>
using namespace std;
int main()
{
int digits;
int rem1;
int rem2;
int rem3;
int rem4;
int div1;
int div2;
int div3;
int div4;
int sum;
cout<<"Enter any four digits=";
cin>>digits;
rem1=digits%10;
div1=digits/10;
rem2=div1%10;
div2=div1/10;
rem3=div2%10;
div3=div2/10;
rem4=div3%10;
div4=div3/10;
sum=rem1+rem2+rem3+rem4;
cout<<"Output="<<sum;
}
