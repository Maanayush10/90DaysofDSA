#include<iostream>
using namespace std;

int main(){
    int a= 2;
    int b=3;

    //bitwise operators 
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"a and b ="<<(a&b)<<endl;
    cout<<"a or b ="<<(a|b)<<endl;
    cout<<"not b ="<<(~b)<<endl;
    cout<<"a xor b ="<<(a^b)<<endl;


    //shifting operations
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;


    //remember when it is leftshift 'multiple the number by 2' the number of times the other digit is mentioned
    /*
    eg:
        21<<2
        21*2=42,    42*2=84   -->84 is the answer

        19<<1 
        19*2=38               -->38 is the answer
    */

    //for right shift divide the number by 2 number of times the second digit is mentioned
    /*
    eg:
        17>>1
        17/2=8                -->8 is the answer

        17>>2 
        17/2=8,   8/2=4        -->38 is the answer
    */


   //NOTE: above is only for small numbers
return 0;
}
