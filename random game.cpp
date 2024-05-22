#include<iostream>
#include<cstdlib>
using namespace std;
    int main()
    {while(1){
        int guessNumber,randomNumber;
        cout<<"enter your guess betweem 1 to 5"<<endl;
        cin>>guessNumber;

        randomNumber=1+rand()%5;
        if(randomNumber==guessNumber){
            cout<<"you have won"<<endl;
        }
        else{
            cout<<"you have lost"<<endl;

        }
    }
    }
