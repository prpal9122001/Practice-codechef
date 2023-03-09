//https://www.codechef.com/CCSTART2/problems/ADDNATRL?tab=submissions

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long n;
	cin>>n;
	long sum=0;
	for(int i=1;i<=n;i++){
	    sum+=i;
	}
	cout<<sum;
	return 0;
}
