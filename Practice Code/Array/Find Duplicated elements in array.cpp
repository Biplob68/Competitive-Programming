#include<stdio.h>

int main()
{
    int i,j,cnt,n;

    printf("Enter the size of araay :");
    scanf("%d",&n);
    int arra[n];

    printf("Enter the Elements of Array\n");
    for(i=0; i<n; i++)
    {
        printf("%d th Element : ",i+1);
        scanf("%d",&arra[i]);
    }

    printf("Duplicated elements of array : ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arra[i] == arra[j] )
            {
                printf("%d ",arra[j]);
                cnt++;
            }
        }
    }
    printf("\nTotal duplicate elements : %d\n",cnt);
    return 0;

} 

// Method - 2 --> Using unordered map
// Time Complexity : O(n)
// Space Complexity : O(n)
vector<int> findDuplicates(vector<int>& nums) {
    
        if(nums.empty())return {};
    
        vector<int>ans;
        unordered_map<int,int>mp;
    
        for(int i=0; i<nums.size(); i++) mp[no]++;
        for(auto it:mp)if(it.second==2){
            ans.push_back(it.first);
        }
        return ans;
}

// Method - 3 -->
// Time Complexity : O(n)
// Space Complexity : O(1)
vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0){
                ans.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
}
