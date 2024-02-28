#include <iostream>
using namespace std;
class base{
public:
base() { cout<<"constructing base \n"; }
~base() { cout<<" \n destucting base \n "; }

};
class der1:public base{
public:
der1() { cout<<"constructed in deriverd c1 \n "; }
~der1() {  cout<<"destructed in derived in c1";  }
};
class der2:public der1{
public:

der2() { cout<<"constructed in deriverd c2 \n"; }
~der2() { cout<<"destructed in derived in c2 \n"; }
};
int main()
{
    der2 ob;
    return 0;
}