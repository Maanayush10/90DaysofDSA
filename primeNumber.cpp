//c++ program to check if a number is prime or not
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :\t";
    cin>>num;

    bool isPrime = true;

    for (int i = 2; i < num; i++)
    {
        /* code */
        //rem=0, then not a prime number
        if(num%i==0)
        {
            isPrime =false;
            break;
        }
    }

    if(isPrime)
    {
        cout<<num<<" is a prime number"<<endl;
    }
    else
    {
        cout<<num<<" is NOT a prime number"<<endl;
    }
return 0;
}

