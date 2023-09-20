#include<iostream>
#include"test.h"
using namespace std;
int main()
{
    int a=12,b=15;
    int &c=a;
    //你干嘛，哎哟
    string str("litao");
    cout<<sum(a,b)<<endl;
    return 0;
}