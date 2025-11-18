#include<stdio.h>

void reverseString(char* s, int sSize) {
    char temp;
    for(int i=0;i<sSize/2;i++){
        temp = s[i];
        s[i]=s[sSize-i-1];
        s[sSize-i-1]=temp;
    }
}

int main(){

    int size=15;
    char string[15] = "Hello World";

    reverseString(string,size);

    for(int i=0;i<size;i++){
        printf("%c",string[i]);
    }

    return 0;
}