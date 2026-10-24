#include <iostream> 
using namespace std;
int main(){
    int income,tax;
    cout<<"enter your income in lakhs:";
    cin>>income;
    if (income<5){
        tax=0;
        cout<<tax;
    }else if (income>5 && income<10) {
        tax= 0.1*income;
        cout<<tax; 
    }else if (income>10){
        tax = 0.3* income;
        cout<<tax;
    }
    return 0;
}