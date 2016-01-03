#include<iostream>
using namespace std;
int main(){
    int num=0;
    cin>>num;
    int a[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>a[i][j];
        }
    }
    int count=0;
    for(int i=1;i<num-1;i++){
        for(int j=1;j<num-1;j++){
            if(a[i][j]<=(a[i+1][j]-50)||a[i][j]<=(a[i][j+1]-50)||a[i][j]<=(a[i-1][j]-50)||a[i][j]<=(a[i][j-1]-50)){
                count++;
            }
        }   
    }
    cout<<count;

}
