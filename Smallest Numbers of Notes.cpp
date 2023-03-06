//https://www.codechef.com/problems/FLOW005?tab=statement
//a=242%100 => 42 b=42%50 =>42 c=42%10 =>2 d=2%5 => 2 e=2%2 =>0

(242/100)=2 (42/50)=0 (42/10)=4 (2/2)=1

2+4+1=7

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
	    int a=n%100;
	    int b=a%50;
	    int c=b%10;
	    int d=c%5;
	    int e=d%2;
	    
	    cout<<(n/100)+(a/50)+(b/10)+(c/5)+(d/2)+e<<endl;
	}
	return 0;
}

