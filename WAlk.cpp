/*

Walk
Problem code: WALK
http://www.codechef.com/MARCH14/problems/WALK
*/
#include<stdio.h>

int main()
{
	int t;
	long long n,v;
	scanf("%d",&t);
	while(t--)
	{
	//	printf("Running %d testcase\n",t);
		scanf("%lld",&n);
		long long ar[n+1];
		v=0;
		for(long long i=0;i<n;i++)
		{
			scanf("%lld",&ar[i]);
		}	
		v=ar[n-1];	
		for(long long i=n-2;i>=0;i--)
		{
	//		printf("loop : %lld\n",i);
		//	printf("old v : %lld wi : %lld\n",v,ar[i]);
			long long tmp=ar[i]-v;
			if(tmp>0)
				v=ar[i];
			else if(tmp==0 && i!=0)
				v++;
			else if(tmp<0)
				v++;
	//		printf("new v : %lld temp : %lld\n",v,tmp);
		}
		printf("%lld\n",v);
	}
	
	return 0;
}
