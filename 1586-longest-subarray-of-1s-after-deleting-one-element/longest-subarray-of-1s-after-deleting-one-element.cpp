class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int curr = 0, prev = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                curr++;
            }
            else
            {
                ans = std::max(ans, prev+curr);
                prev = curr;
                curr = 0;
            }
        }
        ans = std::max(ans, prev+curr);
        return ans == nums.size() ? ans - 1 : ans;
    }
};