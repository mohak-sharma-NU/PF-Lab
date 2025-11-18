#include<stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int i,index=0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }
    while(index < numsSize) {
        nums[index] = 0;
        index++;
    }
}

int main(){

    int size=5;
    // int arr[5] = {0,1,0,3,12};
    int arr[1] = {0};

    moveZeroes(arr,size);

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}