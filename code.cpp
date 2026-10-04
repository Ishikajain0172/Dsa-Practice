#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    if(num%2==0){
        cout<<"the number is even : "<<num<<endl;
    }else{
        cout<<"the number is odd : "<<num<<endl;
    }

    return 0;
}