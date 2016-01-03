#include<iostream>
#include<math.h>
using namespace std;
union Node{
    double rate;
    int index;
};
Node input()
{
    int index;
    int begin;
    int end;
    cin>>index>>begin>>end;
    double rate;
    rate=end*1.0/begin;
    Node re;
    re.rate=rate;
    re.index=index;
    return re;
}

int main(){
    int num;
    cin>>num;
    Node result[num];
    Node tmp;
    for(int i=0;i<num;i++)
    {
        result[i]=input();
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i;j<num;j++){
            if(result[i].rate>result[j].rate)
            {
                tmp=result[i];
                result[i]=result[j];
                result[j]=tmp;
                
            }
        }
    }
    int p;
    double max=0;
    for(int i=0;i<num-1;i++){
        int d=result[i+1].rate-result[i].rate;
        if(d>max){
            max=d;
            p=i;
        }
    }
    int b=p+1;
    int a=num-b;
    cout<<a<<endl;
    for(int i=p+1;i<num;i++){
        cout<<result[i].index<<endl;
    }
    cout<<b<<endl;
    for(int i=0;i<=p;i++){
        cout<<result[i].index<<endl;
    }
}
