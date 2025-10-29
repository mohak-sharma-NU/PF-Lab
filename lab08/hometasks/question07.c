#include<stdio.h>

void printPyramid(int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
}

void printPyramidAlphabet(int n){
    int i,j,k;
    char a='A';
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("%c",a+k);
        }
        printf("\n");
    }
}

void printPyramidNumber(int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("%d",k+1);
        }
        printf("\n");
    }
}

/********************
 *  #####  ######   *
 *  #   #  #    #   *
 *  #   #  ####     *
 *  #   #  #   ##   *
 *  #####  #    ##  *
 *********************/

void displaySidebySide(int n){

    int i,j,k;
    char a='A';
    for(i=0;i<n;i++){

        //Sequence of for-loops:
        /*
        Print Leading spaces.
        Print character.
        Print Trailing spaces.
        */

        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("*");
        }
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf(" | ");
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("%d",k+1);
        }
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf(" | ");
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("%c",a+k);
        }
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){

    int n;
    printf("Enter the number of Iterations: ");
    scanf("%d",&n);

    displaySidebySide(n);

    return 0;
}