#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  int mini=abs(a[0]-a[1]);
  for(int i=1;i<n-1;i++)
  {
    mini=min(abs(a[i]-a[i+1]),mini);
  }
  int count=0;
  for(int i=0;i<n-1;i++)
  {
    if(abs(a[i]-a[i+1])==mini) count++;
  }
  cout<<mini<<" "<<count<<endl;

  return 0;
}
