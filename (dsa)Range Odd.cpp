//https://www.codechef.com/CCSTART2/problems/RNGEODD?tab=statement

#include <iostream>
using namespace std;

int main() {
    int l,r;
    cin>>l>>r;
  for(int i=l;i<=r;i++)
	{
	    if(i%2==1) cout<<i<<" "; //find odd number between l and r
	}
	// your code goes here
	return 0;
}
