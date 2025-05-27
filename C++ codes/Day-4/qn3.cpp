#include<iostream>
using namespace std;

void Check_Prime(int n){
    bool isPrime=true;
    if(n == 0 || n == 1){
        cout << "The number is less than 1 \n" ;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n % i == 0){
               isPrime=false; 
            }
        }
    }

    if(isPrime){
        cout << "Prime Number \n";
    }
    else{
        cout << "Not a Prime Number.\n";
    }
}

int main(){
    int n=4;

    Check_Prime(n);
    return 0;
}