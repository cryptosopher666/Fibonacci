#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b=0,c=1;
	cout<<"Enter number: ";
	cin>>a;
	cout<<"Fibonacci's upto "<<a<<" are:"<<endl;
	while(b<=a){
		cout<<b<<endl;
		c+=b;
		b=c-b;
	}
	
	getch();
}
