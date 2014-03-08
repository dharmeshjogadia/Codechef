/*
	ATM
Problem code: HS08TEST
link:http://www.codechef.com/problems/HS08TEST
*/
#include<iostream>

using namespace std;

int main()
{
    int wAmt;
    float bAmt;

    cin>>wAmt;
    cin>>bAmt;
    if(wAmt%5==0)
    {
            float tAmt=wAmt+0.5;
            if(tAmt<=bAmt)
                cout<<bAmt-tAmt;
            else
            {

                cout<<bAmt;
            }

    }
    else
    {

                cout<<bAmt;
    }
}
