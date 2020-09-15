#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	//binary search returns true or false
	int data[]={1,2,45,44,55,23,343};
	int key=4;//element to be searched

if(binary_search(data ,data+5,key))
	cout<<"found"<<endl;
	else
	cout<<"Not found"<<endl;
	return 0;
}
	
