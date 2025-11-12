#include<stdio.h>

int main(){
    int a=100,b=200,c=300;

    int *ptr1 = &a,*ptr2 = &b,*ptr3=&c;

    printf("Before Playing with pointers: %d %d %d\n",*ptr1,*ptr2,*ptr3);

    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr3;
    ptr3 = temp;

    *ptr1 += *ptr2 *(0.5);
    *ptr2 *= *ptr3 *(0.6);
    *ptr3 -= *ptr1;

    temp = ptr1;
    ptr1 = ptr3;
    ptr3 = ptr2;
    ptr2 = temp;

    *ptr1 = 10+*ptr2*0.1;
    *ptr2 = 50-*ptr3*0.3;
    *ptr3 = 90* *(ptr3)*0.9; 

    printf("After Playing with pointers: %d %d %d\n",*ptr1,*ptr2,*ptr3);

    return 0;
}

/* KEY TAKE AWAYS:
1) *ptr is used for storing addreses.
2) using *ptr again dereferences that pointer to access the value.
3) *temp = ptr1 dec a temp variable that stores the pointer
4) using temp = ptr1 achieves the same thing, as temp was declared as a pointer before.

*/