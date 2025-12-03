#include<stdio.h>
#include<string.h>
#include<ctype.h>

int IsPalindrome(char* str,int start,int end){

    char st = tolower(str[start]);
    char en = tolower(str[end]);


    if(start>=end){
        return 1;
    }

    int result;
    if(st==en){
        result =  IsPalindrome(str,start+1,end-1);
        if(result == 1){
            return result;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int main(){

    char str[]="Racecar";
    int len = strlen(str);

    printf("%d",IsPalindrome(str,0,len-1));

    return 0;
}