/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}

int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* returnArr = (int*)malloc(numsSize*sizeof(int));
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            returnArr[i]=0;
        }else{
            returnArr[i]=1;
        }
    }

    qsort(returnArr,numsSize,sizeof(int),cmp);
    *returnSize = numsSize;
    return returnArr;
}

int main(){

    int nums[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums)/sizeof(nums[0]);
    int* returnPtr;

    int* returnArr = transformArray(nums,size,returnPtr);

    int i;
    for(i=0;i<size;i++){
        printf("%d ",returnArr[i]);
    }

}