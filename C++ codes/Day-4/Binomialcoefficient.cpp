#include<iostream>
using namespace std;

int factofX(int x){
    int factX=1;
    for(int i=1;i<=x;i++){
        factX*=i;
    }
    return factX;
}


double BinomialCoefficient(int n,int r){
    return factofX(n)/
    (factofX(n-r)*factofX(r));
}

int main(){
    int n;
    int r;

    cout << "Enter the value of n:";
    cin >> n;

    cout << "Enter the value of r:";
    cin >> r;

    cout << "Binomial Coefficent is: " << BinomialCoefficient(n,r) << endl;

    return 0;
}