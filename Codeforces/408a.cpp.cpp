#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n+1];
	for(int i=1;i<n;i++) cin>>a[i];

	int cost,temp,dist=0;

	for(int i=m+1;i<n+1;i++)
	{
		if(a[i]<=k && a[i]!=0)
		{
			dist=10*(i-m);
			break;
		}
	}

	for(int i=1;i<m;i--)
	{
		if(a[i]<=k && a[i]!=0)
		{
			dist=min(10*(m-1),dist);
			break;
		}
	}

	cout<<dist<<endl;
	return 0;
}