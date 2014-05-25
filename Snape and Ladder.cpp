/*

Snape and Ladder
Problem code: SNAPE
link:http://www.codechef.com/problems/SNAPE
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t,b,ls;
	cin>>t;
	while(t--)
	{
		cin>>b>>ls;
		float max=sqrt(b*b+ls*ls);
		float min=sqrt(ls*ls-b*b);
		cout<<min<<" "<<max<<endl;
		
		
	}	
	return 0;
}
