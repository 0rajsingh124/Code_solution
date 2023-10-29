#include<iostream>
#include<limits.h>

using namespace std;

int main()
{
    cout<<"Size of int : "<<sizeof(int)<<"bytes"<<endl;
    cout<<"Size of float : "<<sizeof(float)<<"bytes"<<endl;
    cout<<"Size of long : "<<sizeof(long)<<"bytes"<<endl;
    cout<<"Size of char : "<<sizeof(char)<<"bytes"<<endl;
    cout<<"Size of double : "<<sizeof(double)<<"bytes"<<endl;
    cout<<"Size of char minimum value : "<< CHAR_MIN <<endl;
    cout<<"Size of char maximum value : "<< CHAR_MAX <<endl;
    cout<<"Size of short int : "<<sizeof(short int)<<"bytes"<<endl;
    cout<<"Size of long int : "<<sizeof(long int)<<"bytes"<<endl;
}
