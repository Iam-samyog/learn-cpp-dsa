#include<iostream>
using namespace std;


//calculate sum of numbers from 1 to N

double sumofN(int n){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    
    cout <<"Enter the Nth term:"
    cin << n;

    cout << sumofN(n) <<endl;

    return 0;
}