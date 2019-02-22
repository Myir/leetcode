class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = nums[0]+nums[1]+nums[2];
        int start,end;
        int temp;
        for(int i=0;i<n-2;i++)
        {
            start=i+1;
            end=n-1;
            while(start<end)
            {
                temp = nums[i]+nums[start]+nums[end];
                res=abs(res-target)<=abs(temp-target)?res:temp;
                if(temp==target)
                    return temp;
                else if(temp>target)
                {
                    end--;
                }
                else
                {
                    start++;
                }
                
                    
                
            }
        }
        return res;
    }
};