/*class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>Candies;
        int max_candy = 0;
        int max1 = 0;
        for(int j=0;j<candies.size();j++)
        {
            if(candies[j]>=max1) max1 = candies[j];
        }
        for(int i=0;i<candies.size();i++)
        {
            max_candy = candies[i]+extraCandies;
            if(max_candy>=max1)
                    Candies.push_back(true);
            else Candies.push_back(false);
            
        }
        return Candies;
    }
};*/