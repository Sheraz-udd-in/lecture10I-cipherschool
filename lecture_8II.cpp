#include<iostream>
using namespace std;

int sum(int a,int b){
    int c;
    c = a+b;
    a=500;
    cout<<"the value of c :"<<c<<endl;
    return c;
}

int main(){
    // printstuff();
    int a, b;
    int c=75;
    a= 3;
    b=5;
    
    int d=sum(a,b);
   
    cout<<d;
    cout<<"the value of c :"<<c<<endl;
    return 0;
}
