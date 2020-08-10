#include<iostream>
using namespace std;
int main()
{
cout<<"The factorial of a whole number"<<endl<<endl;
cout<<"Enter the number(n) to get its factorial: ";
int a, b, n=1;
cin>>b;
if (b>=0){
	for(a=1; a<=b; a++){
		n=n*a;
	}	
cout<<"n! = "<<n<<endl;	
}
else cout<<"It is not a whole number!"<<endl;
}