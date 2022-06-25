class Solution {
public:
    int search(vector<int>& arr,int n,int key){
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        return search(nums,n,target);
    }
};