#include<iostream>
using namespace std;

int fact(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result*=i;

    }
    return result;
}
//N factorial
int main(){
    int n;
    cout << "Enter the Nth term:";
    cin >> n;

    cout << "Factorial of N is " << fact(n);



    return 0;
}