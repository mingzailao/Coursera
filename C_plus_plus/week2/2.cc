#include<iostream>
using namespace std;
class Demo{
    int id;
public:
    Demo(int i){
        id=i;
        cout<<"id= "<<id<<"constructed"<<endl;
    }
    ~Demo(){
        cout<<"id= "<<id<<"Destructed"<<endl;
    }
};
Demo d1(1);
void func(){
    static Demo d2(2);
    Demo d3(3);
    cout<<"Func"<<endl;
}
int main(){
    Demo d4(4);
    d4=6;
    cout<<"main"<<endl;
    {
        Demo d5(5);
    }
    func();
    cout<<"main ends"<<endl;
    return 0;
}
