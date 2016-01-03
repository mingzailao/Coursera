#include<iostream>
using namespace std;
int main(){
    int num;
    while(cin>>num){
        if(num==0){
            break;
        }
        int a[num];
        for(int i=0;i<num;i++){
            cin>>a[i];
        }
        for(int i=0;i<num;i++){
            for(int j=i;j<num;j++){
                if(a[i]>a[j]){
                    //swap a[i] and a[j]
                    int tmp=a[j];
                    a[j]=a[i];
                    a[i]=tmp;
                }
            }
        }
        if(num%2==0){
            cout<<(a[num/2]+a[num/2-1])/2;
        }
        else{
            cout<<a[(num-1)/2];
        }
        cout<<endl;
    
    }
}
