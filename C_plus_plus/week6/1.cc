#include<iostream>
using namespace std;
//not good !!!!!!!!!!!!!!!!

class class CCreatrue{
protected:
    int nPower;
    int nLifeValue;
};


class CDragon:public CCreatrue{
public:
    void Attack(CWolf *pWolf){
        //...
        //...
        //...
        pWolf->Hurted(nPower);
        pWolf->FightBack(this);
    }
    void Attack(CGhost *pGhost){
        //...
        //...
        //...
        pGhost->Hurted(nPower);
        pGhost->FightBack(this);
    }
    void Hurted(int nPower){
        //...
        //...
        nLifeValue-=value;
    }
    void FightBack(CWolf *pWolf){
        //...
        //...
        pWolf->Hurted(nPower/2);
    }
    void FightBack(CGhost *pGhost){
        //...
        //...
        pGhost->Hurted(nPower/2);
    }
}
