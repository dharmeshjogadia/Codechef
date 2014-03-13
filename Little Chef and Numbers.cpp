/*

Little Chef and Numbers
Problem code: PROSUM
*/
#include<stdio.h>
int main()
{
	int t;
	long long n,cnt,cnt2,tmp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);	
		cnt=0;
		cnt2=0;
		while(n--)
		{
			scanf("%lld",&tmp);
		
				if(tmp>=2)
					cnt++;
				if(tmp==2)
					cnt2++;
		}
		printf("%lld\n",((cnt*(cnt-1)/2))-(cnt2*(cnt2-1)/2));
	}
	return 0;
}
