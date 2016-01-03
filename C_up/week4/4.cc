#include<iostream>
using namespace std;
int main(){
    //use pointer variable to change a array.
    int a[5]={1,2,3,4,5};
    int *p=&a[3];
    cout<<*p<<endl;
    *p=100;
    cout<<a[3]<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
