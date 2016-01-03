#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int year,month,day;
bool isrunnian(int num)
{
    if(num%4==0&&num%100!=0)
        return true;
    else if(num%400==0)
        return true;
    else
        return false;
}
bool monthinrightnum()
{
    if(month==4||month==6||month==9||month==11)
    {
        return true;
    }
    else
        return false;
}
void input(){
    scanf("%d-%d-%d",&year,&month,&day);
}
void increase()
{
    day++;
    if(day==32){
        day=1;
        month++;
        if(month==13)
        {
            year++;
            month=1;
        }
    }
    if(day==31&&monthinrightnum()){
        day=1;
        month++;
    }
    if(day==29&&month==2&&!isrunnian(year))
    {
        day=1;
        month++;
    }
    if(day==30&&month==2){
        day=1;
        month++;
    }
}



int main(){
    input();
    //cout<<year<<" "<<month<<" "<<day<<endl;
    increase();
    cout<<setfill('0')<<setw(4)<<year;
    cout<<setw(1)<<"-";
    cout<<setfill('0')<<setw(2)<<month;
    cout<<setw(1)<<"-";
    cout<<setfill('0')<<setw(2)<<day<<endl;
}
