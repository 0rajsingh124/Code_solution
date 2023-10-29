#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    cin>>a;
    c = a;
    while(a>0)
    {
        b=a%10;
        sum=(sum*10)+b;
        a=a/10;
    }
    if(c==sum)
    cout<<"palindrome";
    else
    cout<<"not palindrome";


}
