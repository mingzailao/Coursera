#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
class student{
    private:
        string name;
        unsigned int age;
        string id;
        unsigned int value[4];
    public:
    void setPara(string n,unsigned int a,string i, unsigned int *v){

        name=n;
        age=a;
        id=i;
        value[0]=v[0];
        value[1]=v[1];
        value[2]=v[2];
        value[3]=v[3];
    }
    void show(){
        cout<<name<<","<<age<<","<<id<<","<<endl;
    }
    void print(){
        int avg,sum=0;
        for(int i=0;i<4;i++){
            sum+=value[i];
        }
        avg=sum/4;
        cout<<name<<","<<age<<","<<id<<","<<avg<<endl;
    }
};
    char name[10],id[10];
    unsigned int a;
    unsigned int Value[4];
    scanf("%[^,],%d,%[^,],%d,%d,%d,%d",name,&a,id,&Value[0],&Value[1],&Value[2],&Value[3]);
    string sname(name);
    string sid(id);
    
    student *p=new student;
    p->setPara(sname,a,sid,Value);
    p->print();

}
