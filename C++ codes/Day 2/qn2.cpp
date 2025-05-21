//Sum of number from 1 to n

#include<iostream>
using namespace std;

int main(){
    int sum=0,n;
    cout << "Enter the Nth term:";
    cin >> n;

    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }

    cout << "Sum of Nth Term is " << sum;
    return 0;
}