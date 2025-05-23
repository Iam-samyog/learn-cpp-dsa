#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Nth term:"
    cin  >> n;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout << " ";
        }
        for(int j=0;j<(i+1);j++){
            cout << (j+1);
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
     
    return 0;
}