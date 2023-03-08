//https://www.codechef.com/CCSTART2/problems/SECLAR

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        if(b>c)
           cout<<b<<endl;
        else
           cout<<c<<endl;
    }
    else if(b>c && b>a)
    {
        if(c>a)
            cout<<c<<endl;
        else
            cout<<a<<endl;
    }
    else if(a>b)
            cout<<a<<endl;
        else
            cout<<b<<endl;
    return 0;
}

