//https://www.codechef.com/LRNDSA02/problems/STUPMACH?tab=statement

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long k=0;
    int m=INT_MAX;


    for(int i=0;i<n;i++)
    {
        m=min(m,a[i]);
        k=k+m;   
    }

    cout<<k<<endl;
  }
  return 0;
 }

