#include<bits/stdc++.h>
using namespace std;

int main()
{

    float fahrenheit;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>fahrenheit;

    float celsius = ((fahrenheit - 32)/9)*5;
    cout<<"Temperature in Celsius is: "<<celsius;
    return 0;
}

