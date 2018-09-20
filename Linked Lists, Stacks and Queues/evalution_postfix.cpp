# include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
class postfix
{
    int stk[10],top;

public:

    void push(int n);
    int pop();
    postfix()
    {
        top=-1;
    }
};
int main()
{
    postfix s;
    int n,a,l,i;
    char c[19],x;
    cout<<"ENTER THE POSTFIX EXPRESSION TO BE EVALUATED";
    cin>>c;
    l=strlen(c);
    for(i=0;i<l;i++)
    {
        x=c[i];
        switch(x)
        {
            case '+':
                a=s.pop()+s.pop();
                s.push(a);
                break;
            case '-':
                a=s.pop()-s.pop();
                s.push(a);
                break;
           case '*':
                a=s.pop()*s.pop();
                s.push(a);
                break;
            case '/':
                a=s.pop()/s.pop();
                s.push(a);
                break;
            case '$':
                a=pow(s.pop(),s.pop());
                s.push(a);
                break;
            default:
                s.push(x-48);
                break;

        }
    }
    cout<<"THE EVALUATED ANSWER : "<<a;
}
void postfix:: push(int n)
{
    top++;
    stk[top]=n;
}
int postfix:: pop()
{
       int t;
       t=stk[top];
        top--;
        return(t);
}

