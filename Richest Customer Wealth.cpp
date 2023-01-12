//https://leetcode.com/problems/richest-customer-wealth/description/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,temp=0,m=accounts.size();
        for(int i=0;i<m;i++){
            temp=accumulate(accounts[i].begin(),accounts[i].end(),0);
            if(temp>sum)
                sum=temp;
        }
        return sum;
    }
};
