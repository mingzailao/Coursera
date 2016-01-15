#include<iostream>
using namespace std;


class CSon{
public:
   virtual ~CSon(){cout<<"Bye from son"<<endl;};
};
class CGrandson:public CSon{
public:
    ~CGrandson(){cout<<"Bye from Grandson"<<endl;};
};
int main(){
    CSon * p;
    p=new CGrandson;
    delete p;
    return 0;
}
