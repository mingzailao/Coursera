#include<iostream>
using namespace std;
//Generic Programming

template <class T>
void Swap(T & x,T & y){
    T tmp=x;
    x=y;
    y=tmp;
}
T MaxElement(T a[],int size){
    T tmpMax=a[0];
    for(int i=1;i<size;i++){
        if(tmpMax<a[i]){
            tmpMax=a[i];
        }
    }
    return tmpMax;
}
int main(){
    int n=1,m=2;
    Swap(n,m);
    cout<<n<<" "<<m<<endl;
    double f=1.2,g=2.3;
    Swap(f,g);
    cout<<f<<" "<<g<<endl;
    return 0;
}
