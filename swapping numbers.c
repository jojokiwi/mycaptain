#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a=5,b=15;
	cout<<"Before Swapping."<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter Swapping."<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}
