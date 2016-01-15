#include<iostream>
using namespace std;
class Base{
public:
    void fun1(){
        fun2();
    }
    virtual void fun2(){
        cout<<"Base::fun2()"<<endl;
    }
};
class Derived:public Base{
public:
    virtual void fun2(){
        cout<<"Derived:fun2()"<<endl;
    }
};
int main(){
    Derived d;
    Base * PBase=&d;
    PBase->fun1();
    return 0;
}
