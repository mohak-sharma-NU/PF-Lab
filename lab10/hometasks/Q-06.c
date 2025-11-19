#include<stdio.h>

int main(){
    char names[][20] = {
        "Alice",
        "Bob",
        "Charlie",
        "Diana",
        "Eve"
    };

    int marks[5] = {85,92,78,96,88};
    int i,max=0,index,sum=0;
    printf("Name\t\tMarks\n---------------------\n");
    for(i=0;i<5;i++){
        if(max<marks[i]){
            max=marks[i];
            index=i;
        }
        printf("%s\t\t%d\n",names[i],marks[i]);
        sum+=marks[i];
    }
    printf("\nThe highest scorer is %s with %d marks.",names[index],max);

    printf("\nClass Average: %.2f",(float) sum/5);
    return 0;
}