#include<iostream>
#include<vector>
using namespace std;
int main()
{int count;
int sum=0;
	vector<int> arr;
	cout<<"enter the no of elements"<<endl;
	cin>>count;
	arr.resize(count);
	for(int i=0;i<count;i++)	
	{
		arr[i]=i;
		sum+=arr[i];
	}
	cout<<"The sum of the values"<<sum<<endl;
	return 0;
}
