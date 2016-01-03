#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int a[n];
    int tmp=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    while(count<m){
        tmp=a[n-1];
        for(int j=n;j>1;j--){
            a[j-1]=a[j-2];
        }
        a[0]=tmp;
        count++;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
