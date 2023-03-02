/*#include<bits/stdc++.h>
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


}*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    cin>>a;
    while(a!=0)
    {
    sum = (sum*10)+a%10;
    a=a/10;
    }
    cout<<sum;
}