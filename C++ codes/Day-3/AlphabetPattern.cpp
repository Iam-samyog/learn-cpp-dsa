#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Nth term:";
    cin >> n;
    
    for(int i=0;i<n;i++){
        char alpha='A';
        for(int j=0; j<n;j++){
            
            cout << alpha << " ";
            alpha++;
        }
        
        cout << endl;
    }
    cout << endl;
    return 0;
}