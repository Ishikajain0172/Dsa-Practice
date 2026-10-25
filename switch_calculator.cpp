#include<iostream>
using namespace std;
int main(){
    int operation;
    cout<<"enter operation to perform 1(+) 2(-) 3(*) 4(/): ";
    cin>>operation;
    int a,b ;
    cout<<"enter operator 1: ";
    cin>>a;
    cout<<"enter operator 2: ";
    cin>>b;

    switch(operation){
        case 1: cout<<"a+b ="<<a+b<<endl;
        break;
        case 2: cout<<"a-b ="<<a-b<<endl;
        break;
        case 3: cout<<"a*b ="<<a*b<<endl;
        break;
        case 4: cout<<"a/b ="<<a/b<<endl;
        break;
        default:  cout<<"invalid operation"<<endl;

    }
    return 0;
}