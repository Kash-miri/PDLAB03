#include<iostream>
using namespace std;
int main()
{
int sizeOfBag;
int costOfBag;
int areaInSquare;
int costOfFertilizer;
int fertilizingArea;
cout<<"Enter bag size in pound=";
cin>>sizeOfBag;
cout<<"Enter cost of the bag=";
cin>>costOfBag;
cout<<"Enter area covered by each bag in square feet=";
cin>>areaInSquare;
costOfFertilizer=sizeOfBag*areaInSquare;
fertilizingArea=costOfBag/sizeOfBag;
cout<<"Cost of the fertilizer per pound="<<costOfFertilizer<<endl;
cout<<"Cost of fertilizing area per square feet="<<fertilizingArea;
}