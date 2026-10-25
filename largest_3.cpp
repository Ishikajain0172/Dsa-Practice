#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st Number: ";
    cin>>a;
    cout<<"enter 2nd Number: ";
    cin>>b;
    cout<<"enter 3rd Number: ";
    cin>>c;

    // if (a>b){
    //     if (a>c){
    //         cout<<"Largest Number of three numbers: "<<a;
    //     }else{
    //         cout<<"Largest Number of three numbers: "<<c;
    //     } 
    // }
    // else{
    //     if (b>c){
    //         cout<<"Largest Number of three numbers: "<<b;
    //     }else{
    //         cout<<"Largest Number of three numbers: "<<c;
    //     } 
    // }  
    if (a>=b && a>=c){
        cout<<"largest number is: "<<a<<endl;
    } else if (b>=c){
        cout<<"largest number is: "<<b<<endl;
    } else {
        cout<<"largest number is: "<<c<<endl;
    }
    return 0; 
}