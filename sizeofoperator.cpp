/*#include<iostream>
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
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int x=2 , y = 3;

    x = y<<x;
    y = x<<y;

    cout<<(x>>1)<<" "<<(y>>1);
    
}*/

/*#include<iostream>
using namespace std;
int main(){

    int i= 1024;

    for(;i;i>>=1)
        cout<<"hello\n";
    
}*/

#include<iostream>
using namespace std;

int main(){

    int i = '0';

    switch(i)

    {
        case '0':cout<<"geeks";
        break;

        case '1': cout<<"info";
        break;

        default: cout<<"lol";
    }
}