class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int>::iterator t;
        vector<int> p(2);
        for(int m=0;m<nums.size()-1;m++)
        for(int n=m+1;n<nums.size();n++)
            if((nums[m]+nums[n])==target)
            {
                p[0]=m;
                p[1]=n;
                return p;
            }
return p;
    }
};
