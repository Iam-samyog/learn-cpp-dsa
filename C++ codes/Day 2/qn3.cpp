#include<iostream>
using namespace std;


int main(){
    int n;
    cout <<"Enter the Nth term:";
    cin >> n;

    int sum_Odd=0,sum_Even=0;
    for(int i=1;i<n;i++){
        if(i % 2 !=0){
            sum_Odd+=i;
        }
    }
        

    // }
    //  for(int i=1;i<n;i+=2){
        
    //         sum_Odd+=i;
    // }
    
    for(int i=1;i<n && i%2==0;i++){
        if(i%2==0){
            sum_Even+=i;
        }
        
    }


    cout << "Sum of the Nth term (Odd) is "<< sum_Odd <<endl;
    cout << "Sum of the Nth term (Even) is "<< sum_Even<< endl;

    return 0;
}