#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    //before swap
    cout<< a << " "<< b <<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;

    //after swap
    cout << a << " " << b;

    //swap(a, b); //swap using cpp inbuilt function

    return 0;
}

