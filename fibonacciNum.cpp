//c++ program to print N fibonacci numbers

#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N :\t";
    cin>>N;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=N; i++)
    {
        int next = a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }

return 0;
}
