/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
*/
//THE BELOW STATEMENT WAS ALREADY WRITTEN IN COMPILER WRITING SCREEN.
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int *res=malloc(sizeof(nums[0])*numsSize);//for making array res.
    int start=0;
    int end=numsSize-1;
    for(int i=numsSize-1;start<=end;i--){
        int a=nums[start]*nums[start];
        int b=nums[end]*nums[end];
        if(a>b){
            res[i]=a;
            start++;
        }
        else{
            res[i]=b;
            end--;
        }
    }
    *returnSize = numsSize;
    return res;
}
//THE ABOVE CONCEPT IS EXPLAINED IN ->
//https://www.youtube.com/watch?v=93tLZBYb2Po&list=PLnfCacCyFMlaDIwrB5b5akGtrmHvqu4yv&index=3&t=2s
