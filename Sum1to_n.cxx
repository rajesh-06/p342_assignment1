#include<iostream>
using namespace std;
int main()
{
int a, sum, b;
cout<<"Summation of 1 to n"<<endl;
cout<<"enter the value of n: ";
cin>>a;
sum=0;
for( b=0;b<=a;b++){
	sum =sum+b;
}
cout<<sum<<endl;
}
