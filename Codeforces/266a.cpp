#include<bits/stdc++.h>
#include<string>
using namespace std;
int  main()
{   string s;
	int n;
	cin>>n;
	cin>>s;
	int count=0;
    
	for(int i=0;i<n-1;i++)
	{
	   
	   if(s[i]==s[i+1])
	   count++;
	}
    printf("%d\n",count);
	return 0;
}