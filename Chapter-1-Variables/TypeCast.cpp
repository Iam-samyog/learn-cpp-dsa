#include<iostream>
using namespace std;

int main(){

    // Going from smaller to bigger
    // Implicit //automatic

    char grade='A';

    int value=grade;

    cout << value << endl;


    //Explicit manually
    double price=100.9999;
    int newPrice=(int)price;

    cout << newPrice <<"\n";
    return 0;
}