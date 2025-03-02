//https://www.codechef.com/LRNDSA02/problems/NOTALLFL?tab=submissions

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int *arr = new int[n];
        int maximum = 1;
        vector<int> flavours(k+1, -1);
        for(int i=0; i<n; ++i) {
                cin>>arr[i];
                maximum = max(maximum, i-flavours[arr[i]]-1);
                //cout << maximum << " " << i-flavours[arr[i]]-1 << endl;
                flavours[arr[i]]=i;
        }
        
        for(int i=1; i<=k; i++)
            maximum = max(maximum, n-flavours[i]-1);
        
        cout<<maximum<<'\n';
        delete [] arr;
    }
    return 0;
}
