#include<iostream>
using namespace std;


//Check if a number is prime or not
int main(){
    int num;
    bool isPrime=1;
    cout << "Enter Number :";
    cin >> num;

   if(num <=1 ){
    cout << "Number is less than 1";

   }
   else{
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            isPrime=0;

        }
    }
   }

   if(isPrime){
        cout << num << " is a Prime Number" <<endl;
    }
    else{
        cout << num << " is a Not Prime Number" <<endl;
    }

    return 0;
}