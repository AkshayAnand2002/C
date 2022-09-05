/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
Example 1:
Input: nums = [1,2,3,1]
Output: true
Example 2:
Input: nums = [1,2,3,4]
Output: false
Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/
int cmp(const void *a,const void *b){
    return(*(int*)a - *(int*)b);
}
bool containsDuplicate(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
    return false;
}
