/*
first solution: uses linear search. It will get "exceed time limit" but it DOES work
*/
bool containsDuplicate(int* nums, int numsSize){
    int found = 0;
    for(int i = 0; i<numsSize && !found; i++){
        for(int j = i+1; j<numsSize && !found; j++){
            if(nums[i] == nums[j]){
                found = 1;
            }
        }
    }
    return found;
}
/*
second solution: we need to sort
*/
