//Link : https://leetcode.com/problems/longest-consecutive-sequence/

CODE : 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2)
        return nums.size();
        sort(nums.begin(),nums.end());
        int k=1,c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1)
            {
                c++;
                k=max(k,c);
            }
            else{
                k=max(k,c+1);
                c=1;
            }
        }
        return k;
    }
};
