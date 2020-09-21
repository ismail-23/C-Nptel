#include<iostream>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50,60},*p;

p=arr+5;

int i=0;
while(i<3)
{
	cout<<p[-i]<<endl;
	p++;
	i++;
}

	return 0;
}
