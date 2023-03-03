//https://www.codechef.com/problems/TASTEDEC?tab=statement

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,tc,tchoc;
        cin >>x>>y;
        tchoc =x*2;
        tc =y*5;
        if(tchoc>tc)
            cout<<"Chocolate"<<endl;
        else if(tchoc<tc)
            cout<<"Candy"<<endl;
        else
        {
            cout<<"Either"<<endl;
            
        }
    }
	// your code goes here
	return 0;
}
