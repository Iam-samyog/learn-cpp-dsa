#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout <<"Enter a and b:";
    cin >> a >> b;
   
   //Arithmetic operator
    cout << "Sum is :" << (a+b) <<endl;
    cout << "Difference is :" << (a-b) <<endl;
    cout << "Multiply is :" << (a*b) <<endl;
    cout << "divide is :" << (a/b) <<endl;
    cout << "Module is :" << (a%b) <<endl;

    //Important notify

    int c=4;
    double d=3.59;

    cout << "Your type is " << c <<" " << " " << d << "\n.Divide"<< (c/d) << "\n" << sizeof(c+d) << endl;



    return 0;
}