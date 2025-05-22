#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Nth term:";
    cin >> n;
    int num=0;
    for(int i=0;i<n;i++){
        for(int j=0; j<(i+1);j++){
            num++;
            cout << num << " ";
            
        }
        cout << endl;
        
    }
    cout << endl;
    return 0;
}