#include <iostream>
using namespace std;

int main() {
	int n,m,a[20],b[20],i,j,cnt=0;
	cout<<"enter the n and m size"<<endl;
	cin>>n>>m;
	cout<<"enter the elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>b[j];
	}
             for(i=0;i<n;i++)
             {
             	for(j=0;j<m;j++)
             {
	if(a[i]==b[j])
	{
	cnt++;
	}
             }
             }
             if(cnt==0)
             {
             	cout<<"no"<<endl;
             }
             else
             {
             	cout<<"yes"<<endl;
             }
             return 0;
}
