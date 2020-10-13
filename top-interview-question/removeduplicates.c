int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) return 0;
    
    int i = 0; //outer loop counter
    int j = 0; //medium loop counter
    
    
    for(j = 1; j<numsSize; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
    
    return cnt;
}
