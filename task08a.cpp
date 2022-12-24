#include<iostream>
using namespace std;
int main()
{
float vegPrice;
float fruitPrice;
int totalVeg;
int totalFruit;
float netPrice;
float total;
cout<<"Enter vegetable price per kilogram=";
cin>>vegPrice;
cout<<"Enter fruit price per kilogram=";
cin>>fruitPrice;
cout<<"Enter total kilograms of vegetables=";
cin>>totalVeg;
cout<<"Enter total kilograms of fruit=";
cin>>totalFruit;
netPrice=(totalVeg*vegPrice)+(totalFruit*fruitPrice);
total=netPrice/1.94;
cout<<"Vegetables cost="<<totalVeg<<endl;
cout<<"Fruit cost="<<totalFruit<<endl;
cout<<"Total="<<total;
}
