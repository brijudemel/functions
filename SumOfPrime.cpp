#include<iostream>
using namespace std;
void display(int);
bool prime(int);
int main()
{
	int a;
	cout<<"Enter a positive integer:\t";
	cin>>a;
	display(a);
	return 0;
}
void display (int x)
{
	bool a,b;
	for (int i=2;i<=(x/2);i++)
	{
		
		if (prime(i)&&prime(x-i))
		{
			cout<<x<<" = "<<i<<" + "<<x-i<<"\n";
		}
	}
}
bool prime(int x)
{
	if(x<=1)
	{
		return false;
	}
	for (int i=2;i<x;i++)
	{
		if((x%i)==0)
		{
			return false;
		}
	}
	return true;
}
