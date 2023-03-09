//https://www.codechef.com/CCSTART2/problems/EXTRICHK?tab=statement

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b) 
    {
        if(a==b && b==c && a==c)
        {
            cout<<1<<endl;
        }
        else if(a!=b && a!=c && b!=c)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<2<<endl;
        } 
    }
    else{
        cout<<-1<<endl;
        	return 0;
    }
    
  }
	// your code goes here


