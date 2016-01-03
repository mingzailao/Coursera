#include<iostream>
using namespace std;
int main(){
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},*p;
    p=*a;
    cout<<" *a="<<*a<<endl;
    cout<<" &a="<<&a<<endl;
    cout<<" &a+1="<<&a+1<<endl;
    cout<<" p="<<p<<endl;
}
