//https://www.codechef.com/CCSTART2/problems/DIFACTRS?tab=statement

#include <iostream>
using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	    if(n%i==0){
	        count++;
	    }
	}
	cout<<count<<" ";
	for(int i=1;i<=n;i++){
	    if(n%i==0){
	        cout<<i<<" ";
	    }
	}
	cout<<endl;
	return 0;
}
