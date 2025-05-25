#include<iostream>
using namespace std;

int min(int num1, int num2){
    if(num1 > num2){
        return num2;
    }else{
        return num1;
    }
}

int main(){
    int n1,n2;
    cout << "Enter the first number:";
    cin >> n1;

    cout << "Enter the second number:";
    cin >> n2;

    cout << "Minimum of two numbers is :" << min(n1,n2) <<endl;

    return 0;
}