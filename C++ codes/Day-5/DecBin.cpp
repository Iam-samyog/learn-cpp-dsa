#include<iostream>
using namespace std;
//Decimal to Binary conversion

void DectoBin(int decnum){
    int num=decnum;
    int ans=0,pow=1,rem;

    while(decnum>0){
        rem=decnum%2;
        ans+=(rem*pow);
        pow=pow*10;
        decnum=decnum/2;
        
    }
    cout << "Coversion of " << num << "is " << ans << endl;
} 

int main(){
    int n=34;

    DectoBin(n);

    return 0;
}