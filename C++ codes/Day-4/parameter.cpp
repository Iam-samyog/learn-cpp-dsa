#include<iostream>
using namespace std;

double sum(double a,int b){//parameters
    double s=a+b;
    return s;
}

int main(){
    int a=5;
    int b=10;


    cout << sum(a,b); //argument

    return 0;
}