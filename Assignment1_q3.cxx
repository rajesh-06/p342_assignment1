#include<iostream>
using namespace std;
int main()
{ 
cout<<"Sum over 1+1/2+1/3+... till the sum that does not change by more than 0.001"<< endl<<endl;
//Declaring variables(type float)
float n =1,sum1=0, sum2=1;
//while loop for getting the sum
while((sum2-sum1)>0.001) {
	sum1= sum1+(1/n);// sum of first nth terms
	sum2=sum1+(1/(n+1));// sum of first (n+1)th terms
	n=n+1;// increment of n
	}
//printing the final required sum
cout<<"The sum is "<<sum2<<endl;

return 0;}