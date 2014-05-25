/*
Divide the Cake

Problem code: ANUDTC
link:http://www.codechef.com/COOK46/problems/ANUDTC
*/

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	long long n,t,picAgl;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n>360)
			cout<<"n n n\n";
		else{
			//que1
			if(360%n==0)
				cout<<"y ";
			else
				cout<<"n ";
			//que2
			cout<<"y ";
			picAgl=n*(n+1)/2;
			if(picAgl<=360)
				cout<<"y\n";
			else
				cout<<"n\n";
			
		}
	}
	return 0;
}
