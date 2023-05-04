#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b=0,c=1,d=0;
	cout<<"How many fibonacci do you wanna see?: ";
	cin>>a;
	while(++d<=a){
		cout<<c<<endl;
		c+=b;
		b=c-b;
	}
	
	getch();
}
