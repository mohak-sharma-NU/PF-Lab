#include<stdio.h>

int main(){

    printf("Programming Fundamentals Report Card\n");

    printf("Enter the Total marks: ");

    float total=75;
    scanf("%f", &total);

    printf("Enter the Obtained marks: ");

    float obtained=50.0;
    scanf("%f", &obtained);

    float per=1;

    per = (obtained/total)*100;

    printf("Percentage: %f\n", per);

    if (per>=50)
    {
        if (per>=60)
        {
            if (per>=70)
            {
                if (per>=80)
                {
                    if (per>=90)
                    {
                        printf("Grade A");
                    }else
                    {
                        printf("Grade: B");
                    } 
                }
                else{
                    printf("Grade: C");
                }   
            }else
            {
                printf("Grade: D");
            }  
        }else
        {
            printf("Grade: D-");
        }   
    }else
    {
        printf("Grade: F");
    }
    return 0;
}