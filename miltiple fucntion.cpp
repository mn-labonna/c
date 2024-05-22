#include<iostream>
using namespace std;

void addition (int a,int b){
int result=a+b;
cout<<"addition= "<<result<<endl;}

void substraction (int a,int b){
int result=a-b;
cout<<"substraction= "<<result<<endl;}


void multiplication (int a,int b){
int result=a*b;
cout<<"multiplication= "<<result<<endl;}

void division (int a,int b){
float result=(float)a/b;
cout<<"division= "<<result<<endl;}

int main()
{
    addition(10,20);
    substraction(10,20);
    multiplication(10,20);
    division(10,20);

}

