#include<iostream>
using namespace std;

//BintoDec
int BintoDec(int binNum){
    int ans=0,pow=1,rem;
    while(binNum > 0){
        rem=binNum % 10;
        binNum /= 10;
        ans += (rem*pow);
        pow *= 2;

    }
    return ans;

}
int main(){
    int num=100010;
    cout << BintoDec(num) <<endl;
    return 0;
}