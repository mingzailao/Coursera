#include<iostream>
using namespace std;
class Complex{
private:
    double real;
    double imag;
public:
    Complex(double r=0.0,double i=0.0){
        real=r;
        imag=i;
    }
    
    Complex operator+ (const Complex &a){
        return Complex(real+a.real,a.imag+imag);
    }
    
    void print(){
        cout<<real<<" "<<imag<<endl;
    }

};
class String{
private:
    char *str;
public:
    String():str(NULL){}
    String(String &s){
        if(s.str){
            str=new char[strlen(s.str)+1];
            strcpy(str,s.str);
        }
        else{
            str=NULL;
        }
    }
    const char *c_str(){return str;}
    char *operator=(const char *s);
    ~String(){
        if(str) delete []str;
    }
    String  & operator=(const String &s);
};
char * String::operator=(const char *s){
    if(str) delete [] str;
    if(s){
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }
    else{
        str=NULL;
    }
    return str;
}
String & String::operator=(const String &s){
    if(str==s.str) return *this;
    if(str) delete [] str;
    str=new char[strlen(s.str)+1];
    strcpy(str,s.str);
    return *this;
}





int main(){
    String s;
    s="Good Luck,";
    //s.operator=("Good Luck.")  
    cout<<s.c_str()<<endl;
    String s1;
    s1=s;
    cout<<s1.c_str()<<endl;
    String s2(s1);
    cout<<s2.c_str()<<endl;
}
