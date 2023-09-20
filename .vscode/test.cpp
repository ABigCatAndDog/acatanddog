#include<iostream>
#include"test.h"
using namespace std;
int main()
{
    int a=12,b=14;
    int &c=a;
    string str("litao");
    cout<<str<<endl;
    cout<<sum(a,b)<<endl;
    return 0;
}