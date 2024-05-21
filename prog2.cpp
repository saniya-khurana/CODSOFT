#include<iostream>
using namespace std;

int main(){

    float n1,n2;
    char op;
    cout<<"Enter 2 Numbers : "<<endl;
    cin>>n1>>n2;
    cout<<"Enter Operand"<<endl;
    cin>>op;

    switch (op)
    {
        case '+':
            cout<<n1+n2<<endl;
        break;
        case '-':
            cout<<n1-n2<<endl;
        break;
        case '*':
            cout<<n1*n2<<endl;
        break;
        case '/':
            cout<<n1/n2<<endl;
        break;
        default :
            cout<<"Invalid Input"<<endl;
        break;
    }
    return 0;



}