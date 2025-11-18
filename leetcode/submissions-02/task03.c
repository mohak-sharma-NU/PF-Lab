#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int index = 1;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] != nums[i - 1]) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main(){

    int size = 10;
    int arr[10]  ={0,0,1,1,1,2,2,3,3,4};

    int result = removeDuplicates(arr,size);

    printf("%d, ",result);
    for(int i=0;i<size;i++){
        if(i<result){
            printf("%d ",arr[i]);
        }else{
            printf("_");
        }
    }

    return 0;
}