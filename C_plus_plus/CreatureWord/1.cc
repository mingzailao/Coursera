#include<iostream>
#include<string>
using namespace std;
class class CCreature{
protected:
    string name;
    int nLife;
    int nAttack;
public:
    CCreature(int nLife=0,int nAttack=0){
        this.nLife=nLife;
        this.nAttack=nAttack;
    }
}

class class CCity{

}

class BaseCity:public CCity{
protected:
    string CName;
    int nLife;
    static int count=0;
public:
    BaseCity(string name,)
    BaseCity(string name,int life){
        this.CName=name;
        this.nLife=life;
    }
    void CreatCreature(CCreature creature){
        nLife-=creature.nLife;
        
    }
}



int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int M;
        cin>>M;
        int l1,l2,l3,l4,l5;
        cin>>l1>>l2>>l3>>l4>>l5;
        int t=0;

        
    }
}
