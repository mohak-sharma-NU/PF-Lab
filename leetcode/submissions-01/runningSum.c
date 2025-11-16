/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* returnarr = (int*)malloc(numsSize*sizeof(int));
    int i,sum=0;
    *returnSize=numsSize;
    for(i=0;i<numsSize;i++){
        sum+=nums[i];
        returnarr[i]=sum;
    }
    return returnarr;
}
int main(){

    // int arr[7]={1,2,3,4,5,6,7};
    int arr[7]={1,1,1,1,1,1,1};

    int size = sizeof(arr)/sizeof(arr[0]);
    int* returnPtr;

    int* ptr = runningSum(arr,size,returnPtr);
    int i;
    
    for(i=0;i<size;i++){
        printf("%d ",ptr[i]);
    }

    return 0;
}