//sum of first n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n, sum=0;

    cout<<"Enter the value of N :\t";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        // sum= sum+i;
        sum+=i;
    }

    cout<<"The sum of first "<<n<<" natural numbers is :"<<sum<<endl;
return 0;
}
