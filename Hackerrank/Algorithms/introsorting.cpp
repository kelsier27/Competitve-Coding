#include <iostream>
using namespace std;
 //Compiler version g++ 4.9

 int main()
 {
 	int v,n;
 	cin>>v>>n;
 	int a[n];
 	for(int i=0;i<n;i++) cin>>a[i];

 	int i=0;
 	while(i<n)
 	{
 		if(a[i]==v)
 		{
 			cout<<i<<endl;
 			return 0;
 		}
 		i++;
 	}

 	return 0;
 }
