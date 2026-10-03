#include <iostream>
using namespace std;

int main(){
    int person;
    cout<<"age of person is ";
    cin>>person;
    if(person>=18){
        cout<<"person can vote"<<endl;
    } if(person>30){
        cout<<"he/she is eligible to become a pm"<<endl;
    } 
    else{
       cout<<"person cannot vote"<<endl;
    return 0; 
    }}