
/*class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int sum = 0;
        int max_sum = 0;
        for(int i = 0;i<m;i++)
        {
            sum = 0;
            for(int j = 0;j<n;j++)
            {
                sum+=accounts[i][j];
            }
            if(sum>max_sum)max_sum = sum;
        }
        return max_sum;
    }
};*/