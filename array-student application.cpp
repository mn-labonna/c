#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter number of students:";
    cin>>n;

    int students[n];
    for(int i=0;i<n;i++)
        {
        cin>>students[i];
        sum=sum+students[i];

    }
    cout<<"total marks:"<<sum;
    float avg =(float) sum/n;
    cout<<"average:"<<sum/n;

        getch();

}
