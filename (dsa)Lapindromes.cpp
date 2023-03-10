//https://www.codechef.com/LRNDSA01/problems/LAPIN?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string a,b;
	    int n=s.length();
	    for(int i=0;i<n/2;i++)
	    {
	        a=a+s[i];
	        b=b+s[n-i-1];
	    }
	     sort(a.begin(),a.end());
	     sort(b.begin(),b.end());
	    if(a==b)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
