#include<iostream>
using namespace std;


//8 bit = byte
int main(){
    
    cout << "Variables\n";
    int age=25;

    cout << "You age is " << age <<" .\n";

    age=19;//4 Bytes
    cout << "You age is " << age <<" .\n";
    cout << "You integer size is " << sizeof(age) <<" .\n";

    float PI=3.14f; //4 Bytes // f is important
    char star='A'; //1 byte = 4 bits
    bool boolean=0; //1byte
    double db=1000.387;

    cout << "Value of PI "<< PI <<".\n";
    cout << "Value of PI "<< sizeof(PI) <<".\n";
    cout << "Value of star "<<star<<"\n";
    cout << "Value of star "<<sizeof(star)<<"\n";

    cout << boolean <<"\n";
    cout << db <<"\n";


    db=PI;

    cout << db <<".\n";
    return 0;

}