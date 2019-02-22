class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        int n=nums.size();
        int s=0;
        int e=n-1;
        int medium;
        if(n==0)
            return res;
        if(n==1)
        {
            if(target!=nums[0])
                return res;
            else
            {
                res[0]=0;
                res[1]=0;
                return res;
            }
        }
            
        while(s<=e)
        {
            medium=(s+e)/2;
            if(nums[medium]>target)
            {
                e=medium-1;
            }
            else if(nums[medium]<target)
            {
                s=medium+1;
            }
            if(nums[medium]==target)
            {
                int pre,next;
                pre=medium;
                next=medium;
                while(pre>=0&&target==nums[pre])
                {
                    pre--;
                }
                while(next<=n-1&&target==nums[next])
                {
                    next++;
                }
                res[0]=(pre+1);
                res[1]=(next-1);
                return res;
                
            }
        }
        return res;
    }
};