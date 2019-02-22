class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid;
        int flag=0;
        if(n==0)
            return 0;
        if(n==1)
        {
            if(nums[0]<target)
                return 1;
            else if(nums[0]>=target)
                return 0;
        }
        while(s<=e)
        {
            mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                e=mid-1;
                flag=1;
            }
            else
            {
                s=mid+1;
                flag=2;
            }
        }
        if(flag==1)
            return mid;
        else
            return mid+1;
    }
};