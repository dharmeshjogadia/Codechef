/*

Factorial
Problem code: FCTRL
link:http://www.codechef.com/problems/FCTRL/

N=1000
s=0;
s=s+N/5
s+=N/25
s+=N/125
till  N/5^n!= 0
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned long t,n,p;
    int s;
    cin>>t;
    while(t)
    {
        cin>>n;
        s=0;
        p=5;
        while(n/p)
        {
            s+=n/p;
            p*=5;
        }
        cout<<s<<"\n";
        t--;

    }
}
