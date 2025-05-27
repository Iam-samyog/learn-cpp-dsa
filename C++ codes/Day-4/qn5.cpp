#include<iostream>
using namespace std;


//Nth Fibonacci
void Fibonacci(int n){
    int a=1,b=1;

    for(int i=0;i<n;i++){
        cout << a << " ";
        int c=a+b;
        a=b;
        b=c;
    }

}
  
int main(){
    int n=10;
    Fibonacci(n);

    return 0;
}