#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int row,column,count=0;
        cin>>row>>column;
        int a[row][column],*p,*q;
        for(p=*a;p<**(&a+1);p++){
            cin>>*p;
            if(p-&a[0][0]<=column||&a[row-1][column-1]-p<=column||(p-&a[0][0])%(column)==0||(p-&a[0][column-1])%(column)==0){
                count+=*p;
            }
        }
        cout<<count<<endl;

    }
}
