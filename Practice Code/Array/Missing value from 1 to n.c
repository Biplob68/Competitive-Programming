   // Method: 1

// Missing value from 1 to n number
int getMissing(int a[], int n)
{
	int i, total;
	total = (n + 1) * (n + 2) / 2;
	for (i = 0; i < n; i++)
		total -= a[i];
	return total;
}



// Method: 2

int getMissing(int arra[], int n)
{
    int i,total =1 ;

    for(i=2; i<=(n+1); i++)
    {
        total = total+i;
        total = total - arra[i-2];
    }

    return total;
}




// Method: 3 
 // Binary Search
public int missingNumber(int[] nums) { //binary search
    Arrays.sort(nums);
    int left = 0, right = nums.length, mid= (left + right)/2;
    while(left<right){
        mid = (left + right)/2;
        if(nums[mid]>mid) right = mid;
        else left = mid+1;
    }
    return left;
}


// Method: 4
// XOR 
public int missingNumber(int[] nums) { 
    int res = nums.length;
    for(int i=0; i<nums.length; i++){
        res ^= i;
        res ^= nums[i];
    }
    return res;
}
