/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* returnArr = (int*)malloc(numsSize*sizeof(int));
    int i,index=0;
    for(i=0;i<n;i++){
        returnArr[index++]=nums[i];
        returnArr[index++]=nums[i+n];
    }
    *returnSize = numsSize;
    return returnArr;
}

int main(){

    int nums[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums)/sizeof(nums[0]);
    int n=size/2;
    int* returnPtr;

    int* returnArr = shuffle(nums,size,n,returnPtr);
    int i;
    for(i=0;i<size;i++){
        printf("%d ",returnArr[i]);
    }
    return 0;
}