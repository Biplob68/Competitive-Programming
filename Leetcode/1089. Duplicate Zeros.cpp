void duplicateZeros(vector<int>& arr) {
        
        int zero = 0, length = arr.size()-1;
        
        // find the number of zero that should be duplicated
        for(int left=0; left<=length-zero; left++){
            
            if(arr[left] == 0){
                
                if(left == length-zero){
                    arr[length] = 0;
                    length--;
                    break;
                }
                
                zero++;
            }
        }
        
        int last = length-zero;
        
        for(int i=last; i>=0; i--){
            if(arr[i]==0){
                arr[i+zero] = 0;
                zero--;
                arr[i+zero] = 0;
            }
            else {
                arr[i+zero] = arr[i];
            }
        }
}
