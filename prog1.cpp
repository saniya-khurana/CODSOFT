#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand (time(0));
    int random=rand()%100+20;
    int guess=0;
    int moves=0;
    cout<<"*************Welcome to the Program that generates a Random Number*************"<<endl;
    do{

        moves++;
        cout<<"enter your guess : "<<endl;
        cin>>guess;
        if(guess==random){
            cout<<"Congrats! your guess is correct after "<<moves<<" moves"<<endl;
        }

        else if(guess>random){
            cout<<"your guess is wrong , you entered a higher no"<<endl;
        }
        else{
            cout<<"your guess is wrong , you entered a lower no"<<endl;
        }

    }
        while(guess!=random);


}

