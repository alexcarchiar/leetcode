void rotate(int* nums, int numsSize, int k){
    //do it by k steps
    int copy[numsSize];
    for(int i = 0; i<numsSize; i++){
        copy[(i+k)%numsSize] = nums[i];
    }
    for(int i = 0; i<numsSize; i++){
        nums[i] = copy[i];
    }
    
    
}
