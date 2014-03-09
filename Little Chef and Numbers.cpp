/*

Little Chef and Numbers
Problem code: PROSUM
*/
#include<stdio.h>
int main()
{
	int t;
	long long n,cnt,tmp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);	
		cnt=0;
		while(n--)
		{
			scanf("%lld",&tmp);
			if(tmp !=1 && tmp!=0)
				cnt++;
		}
		printf("%lld\n",cnt*(cnt-1)/2);
	}
	return 0;
}
