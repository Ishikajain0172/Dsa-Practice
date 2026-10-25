#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year :";
    cin>>year;

    if (year%400==0){
        cout<<"the given year "<<year<<" is leap year";
    }else if (year%100==0){
        cout<<"the given year "<<year<<" is not a leap year";
    }
    
    else if (year%4==0){
        cout<<"given year "<<year<<" is leap year"<<endl;
    }
    else{
        cout<<"given year "<<year<<" is not a leap year"<<endl;
    }
    return 0;
}