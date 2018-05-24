#include <iostream>
using namespace std;
int main() {
	int a[20],n,i,count=0;
	cout<<"enter the size of array"<<endl;
	cout<<"enter the elements"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		
			if(a[i]==i)
			{
			cout<<a[i];	
			}
		
	}

	return 0;
}
