#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>ans;
    int total = (n*(n+1))/2;
    int current =0;
    for(int i = 0;i<n;i++) {
        current+= arr[i];
    }
    int M = total - current; // this gives us the difference btw ans
    
    for(int i = 0;i<n;i++){// eg 1 2 2 but 1 2 3 was expected  so 6-5 = 1 gives us the difference
        int ch = abs(arr[i])-1;
        if(arr[ch]>0){
            arr[ch] = arr[ch]*-1;
        }
        else{
            int R = abs(arr[i]);
          
            ans.first = M + R; // after finding that 3 was the missing element  M+R gives us 1+2=3 
            ans.second = R;
            break;
        }
    }
    return ans;

    
	
}
