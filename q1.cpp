#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		n*=2;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);

		for(int i=n-1;i>=0;i--)
		{
			if(a[i]<a[n-1])
			{
				cout<<a[i]<<endl;
				break;
			}
		}

		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}