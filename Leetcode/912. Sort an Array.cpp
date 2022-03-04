/* Given an array of integers nums, sort the array in ascending order using merge sort.

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
*/

// Array sorting by merge sort
 vector<int> sortArray(vector<int>& nums) {
        
        int n = nums.size();
        merge_sort(nums, 0, n-1);

        return nums;
    }
    
    void merge_sort(vector<int>& nums, int left, int right){
   
        if(left >= right) return;
            
        int mid = left+(right-left)/2;
        merge_sort(nums, left, mid);
        merge_sort(nums, mid+1, right);
        
        merge(nums, left, mid, right);
      
    }
    
    /*
    void merge(vector<int>& nums, int left, int mid, int right){
        
        vector<int> X(nums.begin()+1, nums.begin()+mid+1);
        vector<int> Y(nums.begin()+mid+1, nums.begin()+right+1);
        
        int l_size = X.size();
        int r_size = Y.size();
        int i=0, j=0, k;
        
        for(int k=0; i<l_size, j<r_size; k++){
            nums[k] = (X[i]<=Y[j]) ? X[i++] : Y[j++];
        }
        while(i<l_size){
            nums[k++] = X[i++];
        }
        while(j<r_size){
            nums[k++] = Y[j++];
        }
    }*/
      void merge(vector<int>& nums, int left, int mid, int right) {
        
        vector<int> v(right - left + 1);
        int i = left, j = mid + 1, k = 0;
        
        while(i <= mid and j <= right) 
            v[k++] = nums[i] > nums[j] ? nums[j++] : nums[i++];
        
        while(i <= mid) v[k++] = nums[i++];
        while(j <= right) v[k++] = nums[j++];
        
        for(int i = left, j = 0 ; i <= right ; i++) nums[i] = v[j++];
    }

// Time complexity: O(nlogn)
// Space Complexity: O(n)
