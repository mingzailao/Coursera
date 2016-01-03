#include<iostream>
#include<string>
using namespace std;
class student{
    private:
        string name;
        unsigned int age;
        string id;
        int value[4];
    public:
    student(string n,unsigned int a,string i, int * p){
        name=n;
        age=a;
        id=i;
        value[0]=p[0];
        value[1]=p[1];
        value[2]=p[2];
        value[3]=p[3];
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
int main(){
     string name,id;
     unsigned int age;
     int value[4],*p;
    p=value;
    cin>>name>>age>>id>>value[0],value[1]>>value[2]>>value[3];
    student *tom=new student(name,age,id,p);
    tom->print();
    
}
