#include<iostream>
using namespace std;

int factorial(int);

int main(){
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Factorial de "<<n<<": "<<factorial(n);
    return 0;
}

int factorial(int n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}