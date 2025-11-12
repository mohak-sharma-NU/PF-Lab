#include<stdio.h>

int main(){

    int arr[]={10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(arr[0]);

    int *ptr = arr;
    printf("\n*ptr: %d",*ptr);
    printf("\n*(ptr+3): %d",*(ptr+3));
    printf("\n*ptr[2]: %d",ptr[2]);
    ptr+=4;
    // *ptr = *(ptr+4);
    printf("\nAfter ptr + 4: %d",*ptr);
    printf("\n*ptr[1]: %d",ptr[1]);
    int *ptr2=(ptr+1);
    printf("\n*ptr2: %d",*ptr2);
    printf("\nptr2[-2]: %d",ptr2[-2]);

    return 0;
}

/* KEY TAKEAWAYS:
1)  pointer to arr, always points ot 1st element by default.
2) using that we can access elements in different ways.
3) First we modify the pointer directly in the print statement:ie *(ptr+3) etc
4) Second, we use the index similar to that of an array,ie ptr[2].
5) in the latter, we can't assign specific elements indices. ie 
we just assigned ptr[0] to element 50, which is arr[4].
6) pointers to an array can also be used to print the array. 
Although this can lead to garbage values to be printed if the ptr[0] 
does not point to the 1st element.
    int i;
    for(i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
*/