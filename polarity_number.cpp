#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;

    if (num>0){
        cout<<"the given number is positive";}
    else if (num==0){
        cout<<"the given number is zero"; }
    else{
        cout<<"the given number is negative";
    }
    return 0;
}