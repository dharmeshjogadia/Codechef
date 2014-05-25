/*
Ups and Downs

Problem code: ANUUND
link:http://www.codechef.com/COOK46/problems/ANUUND
*/
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	long long n,t,i,tmp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long ar[n+1];
		for(i=0;i<n;i++)
			cin>>ar[i];
		//sort(ar,ar+n);
		for(i=0;i<=n-2;i++)
		{
			if(i%2==0)
			{
				if(ar[i]>ar[i+1])
				{
					tmp=ar[i];
					ar[i]=ar[i+1];
					ar[i+1]=tmp;

				}	
			}
			else
			{
				if(ar[i]<ar[i+1])
				{
					tmp=ar[i];
					ar[i]=ar[i+1];
					ar[i+1]=tmp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<ar[i]<<" ";
		}
		cout<<"\n";
	}
}


