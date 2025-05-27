#include<iostream>
using namespace std;
//sum 
int sumofDigits(int n){
    int count=0;
    int temp1=n;
    while(temp1 != 0){
        count++;
        temp1/=10;

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
    int num;
    cout << "Enter any number:";
    cin >> num;

    cout << sumofDigits(num)<<endl;


    return 0;
}