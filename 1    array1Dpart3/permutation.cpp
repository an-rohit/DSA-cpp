class Solution {
public:
    void reverse(vector<int>& nums , int i,int j){
        while (i<j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        return;
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        // find pivot index 
        for (int i=n-2 ; i>=0 ; i--){
            if (nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if (idx==-1){  //if array is already in descending order
            reverse(nums , 0 ,n-1);
            return;
        }
        //reverse part after piviot
        reverse(nums , idx+1 ,n-1);
        //swap idx and just greater than idx
        int j=-1;
        for (int i=idx+1 ; i<n ;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
    }
};  