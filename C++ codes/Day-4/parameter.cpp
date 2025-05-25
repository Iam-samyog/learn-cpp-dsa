#include<iostream>
using namespace std;

int sum(int a,int b){//parameters
    int s=a+b;
    return s;
}

int main(){
    int a=5;
    int b=10;


    cout << sum(a,b); //argument

    return 0;
}