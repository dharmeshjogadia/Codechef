/*

Transform the Expression
Problem code: ONP
link:http://www.codechef.com/problems/ONP/
*/

#include<iostream>

using namespace std;


int main()
{
    string exp;
    char stck[400];
    int n,t,top;

    cin>>t;
    for(int i=1;i<=t;i++)
    {

        cin>>exp;

        top=0;
        stck[top]='(';
        n=0;

        while(n<exp.length())
        {
                switch(exp[n])
                {

                    case '(':
                    case '[':
                    case '{':

                                stck[++top]=exp[n];
                                break;
                    case ')':
                    case ']':
                    case '}':
                            while(stck[top]!='(' && stck[top]!='[' && stck[top]!='{')
                                    cout<<stck[top--];
                            top--;
                            break;
                    case '^':
                            while(stck[top]=='^')
                                cout<<stck[top--];
                            stck[++top]=exp[n];
                            break;
                    case '*':
                    case '/':
                            while(stck[top]=='/' || stck[top]=='*')
                                cout<<stck[top--];
                            stck[++top]=exp[n];
                            break;
                    case '+':
                    case '-':
                            while(stck[top]=='-' || stck[top]=='+')
                                cout<<stck[top--];
                            stck[++top]=exp[n];
                            break;
                    default:
                        cout<<exp[n];
                        break;
                }
                n++;
        }

        while(stck[top]!='(')
        {
            cout<<stck[top--];
        }
        cout<<"\n";
    }

}

