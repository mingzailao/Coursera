#include<iostream>

using namespace std;
//int static members function,we can not visit non-static members variables.
class CRectangle{
private:
    int w,h;
    static int nTotalArea;
    static int nTotalNumber;
public:
    CRectangle(int w_,int h_);
    CRectangle(CRectangle &r);
    ~CRectangle();
    static void PrintTotal();
}
CRectangle::CRectangle(CRectangle &r){
    w=r.w;
    h=r.h;
    nTotalArea+=w*h;
    nTotalNumber++;
}
CRectangle::CRectangle(int w_,int h_){
    w=w_;
    h=h_;
    nTotalArea+=w*h;
    nTotalNumber++;
}
CRectangle::~CRectangle(){
    nTotalNumber--;
    nTotalArea-=w*h;
}
void CRectangle::PrintTotal(){
    cout<<nTotalNumber<<","<<nTotalArea<<endl;
}

int CRectangle::nTotalArea=0;
int CRectangle::nTotalNumber=0;
int main(){
    CRectangle r1(3,3),r2(2,2);
    CRectangle::PrintTotal();
    r1.PrintTotal();
    return 0;
}
