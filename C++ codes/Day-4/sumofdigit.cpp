#include<iostream>
using namespace std;
//sum 
int sumofDigits(int n){
    int count=0;
    for(int i=0;i<n;i++){
        count++;

    }
    int sum=0;
    int result,temp=n;
    for(int i=0;i<count;i++){
        
        result=temp%10;
        sum+=result;
        temp=temp/10;
        
    }
    return sum;
}
int main(){
    int num=1234;

    cout << sumofDigits(num)<<endl;


    return 0;
}