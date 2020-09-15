#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
	vector<int> arr ;
	cout<<"Enter no of character you need for a array"<<endl;
	cin>>n;
	arr.resize(n);
	int sum=0;
	for (int i=0;i<n;i++)
	{
	arr[i]=i+1;
	sum+=arr[i];	
	}
	cout<<sum<<endl;
	return 0;
}
