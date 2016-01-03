#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int a[row][col],*p,*q;
    for(p=*a;p<**(&a+1);p++){
        cin>>*p;
    }
    for(q=*a;q<**(&a+1);q++){
        cout<<*q;
        q=
    }
}
