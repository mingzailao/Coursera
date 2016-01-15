#include<iostream>
using namespace std;
class cArray{
private:
    int *ptr;
    int size;
public:
    cArray(int s=0){
        if(s==0){
            ptr=NULL;
        }
        else{
            ptr=new int [s];
        }
    }
    cArray(cArray & a){
        if(!a.ptr){
            ptr=NULL;
            size=0;
            return;
        }
        else{
            ptr=new int[a.size];
            memcpy(ptr,a.ptr,sizeof(int)*a.size);
            size=a.size;
        }
    }
    ~cArray(){
        if(ptr) delete [] ptr;
    }
    void push_back(int v){
        if(ptr){
            int *tmpptr=new int[size+1];
            memcpy(tmpptr,ptr,sizeof(int)*size);
            delete [] ptr;
            ptr=tmpptr;
        }
        else{
            ptr=new int[1];
        }
        ptr[size++]=v;
    }
    cArray & operator=(const cArray &a){
        if(ptr==a.ptr){
            return *this;
        }
        if(a.ptr==NULL){
            if(ptr) delete [] ptr;
            ptr=NULL;
            size=0;
            return *this;
        }
        if(size<a.size){
            if(ptr){
                delete [] ptr;
            }
            ptr=new int[a.size];
        }
        memcpy(ptr,a.ptr,sizeof(int)*a.size);
        size=a.size;
        return *this;
    }
    int length(){
        return size;
    }
    int & operator[](int i){
        return ptr[i];
    }
};




int main(){
    cArray a;
    for(int i=0;i<5;i++){
        a.push_back(i);
    }
    cArray a2,a3;
    a2=a;
    for(int i=0;i<a.length();++i)
    {
        cout<<a2[i]<<" ";
    }
    a2=a3;
    for(int i=0;i<a2.length();i++){
        cout<<a2[i]<<" ";
    }
    cout<<endl;
    a[3]=100;
    cArray a4(a);
    for(int i=0;i<a4.length();++i){
        cout<<a4[i]<<" ";
    }
    return 0;
}
