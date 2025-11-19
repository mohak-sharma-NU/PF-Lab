#include<stdio.h>

int main(){

    char names[][7] = {
        "Alice",
        "Bob",
        "Charlie",
        "Diana",
        "Eve"
    };

    int marks[5] = {85,92,78,96,88};

    int i,max=0,index;
    for(i=0;i<5;i++){
        if(max<marks[i]){
            max=marks[i];
            index=i;
        }
    }

    printf("The highest scorer is %s with %d marks.",names[index],max);

    return 0;
}