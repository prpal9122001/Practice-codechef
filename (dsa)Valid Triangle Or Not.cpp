//https://www.codechef.com/CCSTART2/problems/TRIVALCH?tab=statement

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=c && b+c>=a && c+a>=b){  //check if these side will form triangle
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	// your code goes here
	return 0;
}
