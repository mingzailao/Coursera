#include<iostream>
using namespace std;


class CCreature{
protected:
    int m_nLifeValue,
    int m_nPower;
public:
    virtual void Attack(CCreature *pCreature){
        
    }
    virtual void Hurted(int nPower){

    }
    virtual void FightBack(CCreature * pCreature){

    }
}


