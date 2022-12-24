#include<iostream>
using namespace std;
int main()
{
string movie;
int adultTicket;
int childTicket;
int numOfAdult;
int numOfChild;
int percent;
int totalAmount;
int donation;
int amountAfterDonation;
cout<<"Enter movie name=";
cin>>movie;
cout<<"Enter adult ticket price=";
cin>>adultTicket;
cout<<"Enter child ticket price=";
cin>>childTicket;
cout<<"Enter number of adult ticket sold=";
cin>>numOfAdult;
cout<<"Enter number of child ticket sold=";
cin>>numOfChild;
cout<<"Enter percentage to donate=";
cin>>percent;
totalAmount=(adultTicket*numOfAdult)+(childTicket*numOfChild);
cout<<"Total amount generated="<<totalAmount<<endl;
donation=totalAmount*percent/100;
amountAfterDonation=totalAmount-donation;
cout<<"Amount after donation="<<amountAfterDonation;
}