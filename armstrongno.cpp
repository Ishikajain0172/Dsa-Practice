#include<iostream>
using namespace std;
int main(){
    int n,remainder,sum=0;
    cout<<"enter a three digit number: ";
    cin>>n;

    int original = n;

    while(n>0){
        remainder = n%10;
        sum = sum + remainder*remainder*remainder;
        n=n/10;
    }

    if (sum==original){
        cout<<original<<" is an armstrong number.\n";
    }else{
        cout<<original<<" is not an armstrong number.\n";
    }


}