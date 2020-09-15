#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int data[]={10,3,4,6,1,4,9};
	sort(data,data+5);//first time elements
	for(int i=0;i<5;i++)
	{
		cout<<data[i]<<endl;
	}
	return 0;
}
