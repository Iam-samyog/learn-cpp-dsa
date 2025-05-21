#include<iostream>
using namespace std;


int main(){
    int n;
    cout <<"Enter the Nth term:";
    cin >> n;

    int sum_Odd=0;
    for(int i=1;i<n;i++){
        if(i % 2 !=0){
            sum_Odd+=i;
        }
        

    // }
    //  for(int i=1;i<n;i+=2){
        
    //         sum_Odd+=i;
    // }
    
    // for(int i=1;i<n && i%2!=0 ;i+=2){
    //     sum_Odd+=i;
    // }


    cout << "Sum of the Nth term is "<< sum_Odd <<endl;

    return 0;
}