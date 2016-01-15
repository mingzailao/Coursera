#include<iostream>
using namespace std;
/*
class A{
private:
    int a;
public:
    virtual void Print()=0;
    void fun(){
        cout<<"fun"<<endl;
    }
}
*/
//abstract class :include pure vitrual function;


class A{
public:
    virtual void f()=0;
    void g(){
        f();
    }
};
class B:public A{
public:
    void f(){
        cout<<"B:f()"<<endl;
    }
};
int main(){
    B b;
    b.g();
    return 0;
}
