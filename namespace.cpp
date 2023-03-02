/*#include<iostream>
using namespace std;

namespace first_space
{
    void func()
    {
        cout<<"Inside first_space"<<endl;
    }
}

namespace second_space
{
    void func()
    {
        cout<<"Inside second_space"<<endl;
    }
}

int main()
{
    first_space::func();
    second_space::func();
    return 0;
}*/



/*#include<iostream>
using namespace std;

namespace first_space
{
    void func()
    {
        cout<<"Inside first_space"<<endl;
    }
}

namespace second_space
{
    void func()
    {
        cout<<"Inside second_space"<<endl;
    }
}

using namespace second_space;
int main()
{
    func();
    return 0;
}*/


/*#include<iostream>
using namespace std;
namespace ns1
{
    int value()  {return 5;}
}
namespace ns2
{
    const double x=100;
    double value() { return 2*x;}
}
int main()
{
    cout<<ns1::value()<<'\n';
    cout<<ns2::value()<<'\n';
    cout<<ns2::x<<'\n';
    return 0;
}*/

/*//Classes and Namespace
#include<iostream>
using namespace std;
 namespace ns
 {
    class geek
    {
        public:
         void display()
         {
            cout<<"ns::geek::display()"<<endl;;
         }
    };
 }
 int main()
 {
    ns::geek obj;
    obj.display();
    return 0;
 }*/
