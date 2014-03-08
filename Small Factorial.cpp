/*

Small factorials
Problem code: FCTRL2
link:http://www.codechef.com/problems/FCTRL2
        1 2
        1 8
       -------
         8  16
      1  2
      -----------
      1  10   6
             6  (16%10)
         1      ((1+10)%10)
      2          ((1+1)%10)
      -----------
      2  1   6

*/
#include<iostream>
#include<string.h>
using namespace std;
short StoreInArray(char ar[],short n)
{
    short i=0;
    do{
            ar[i++]=(char)n%10;
            n=n/10;
        }while(n!=0);
        ar[i]='\0';
        return i;
}
int main()
{
    int t;
    short n,m,mul[200]={0},l1,l2,i,j;
    char ar[200],ar1[4];
    cin>>t;
    while(t)
    {
        cin>>n;
        l1=StoreInArray(ar,n);
       while(n>1)
        {
            n--;
            l2=StoreInArray(ar1,n);
            for(i=0;i<l2;i++)
            {
                for(j=0;j<l1;j++)
                {
                    if(mul[i+j]==NULL)
                        mul[i+j]=0;
                    mul[j+i]+=ar1[i]*ar[j];
                }
            }
            m=0;
            for(l1=0;l1<i+j-1;l1++)
            {
                ar[l1]=(mul[l1]+m)%10;
                m=(mul[l1]+m)/10;
                mul[l1]=0;
            }
            if(m)
                ar[l1++]=m;
            ar[l1]='\0';
            i=l1-1;
        }
        l1--;
        while(l1>=0)
        {
            cout<<(int)ar[l1--];
        }
        cout<<"\n";
        t--;
    }
}
