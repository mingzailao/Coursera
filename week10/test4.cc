#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int m,n;
    cin>>m>>n;
    if((m>=0&&m<5)&&(n>=0&&n<5)){
        for(int i=0;i<5;i++){
            int tmp=a[m][i];
            a[m][i]=a[n][i];
            a[n][i]=tmp;
        }   
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cout<<setw(4)<<a[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"error"<<endl;
    }
}
