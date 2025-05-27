#include<iostream>
using namespace std;

void Prime(int n){
    if(n<=1){
        cout << "The number is less than 1." << endl;
    }
    else{
        cout << "---Prime Numbers Upto Nth term ----" <<endl;
        for(int i=2;i<=n;i++){
            bool isPrime=true;
            for(int j=2;j*j<=i;j++){
                if(i % j == 0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                cout << i << " ";
            }
           
        }
        cout << endl;
    }
}

int main(){
    int n=10;

    Prime(n);
    return 0;
}