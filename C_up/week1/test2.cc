#include<iostream>
using namespace std;
int A[4]={3,1,2,4};
int B[4]={2,4,3,1};
int C[4]={0,3,0,4};
int D[4]={1,3,4,2};

bool isRight_onlyone(int person[],int right[]){
    int count=0;
    for(int i=0;i<4;i++){
        if(person[i]!=0){
            if(person[i]==right[i]){
                count++;
            }
        }
    }
    if(count!=1){
        return false;
    }
    else{
        return true;
    }
}
bool isAllright_onlyone(int right[]){
    if(isRight_onlyone(A,right)&&isRight_onlyone(B,right)&&isRight_onlyone(C,right)&&isRight_onlyone(D,right)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a[4];
    for(int i=1;i<=4;i++){
        a[0]=i;
        for(int j=1;j<=4;j++){
            if(j!=i){
                a[1]=j;
                for(int k=1;k<=4;k++){
                    if(k!=i&&k!=j){
                        a[2]=k;
                        for(int l=1;k<=4;k++){
                            if(l!=i&&l!=j&&l!=k){
                                a[3]=l;
                                for(int index=0;index<4;index++){
                                    cout<<a[index]<<" ";
                                }
                                cout<<endl;
                                if(isAllright_onlyone(a)){
                                    cout<<a[0]<<endl;
                                    cout<<a[1]<<endl;
                                    cout<<a[2]<<endl;
                                    cout<<a[3]<<endl;
                                }
                                

                            }
                        }
                    }
                }
            }
        }
    }
}

