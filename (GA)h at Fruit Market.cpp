//https://www.codechef.com/problems/JMARKET?tab=statement

include <iostream>
using namespace std;


int main() {
	// your code goes here
	int a,b,i,n,t,c,d,e,f,g;
	cin>>t;
	while(t--)
	{
	  cin>>n>>a>>b>>c;
	  d=max(a,b);
	  e=max(d,c);
	  f=min(a,b);
	  g=min(c,f);
	  cout<<g*(n-1)+a+b+c-e-g<<endl; //in this problem we have to spend least money while buying fruits of atleast two type.
                                   // so we will buy one fruit of the middle rate and remaining of the fruits will be of smallest rate.
	}
	return 0;
}
