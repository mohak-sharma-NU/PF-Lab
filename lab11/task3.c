#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

#define MAXSTR 128

struct Employee{
    int empID;
    char name[50];
    char dept[50];
    char designation[50];
    float salary;
    char dateOfJoin[50];
    int phoneNo;
    char email[50];
};

int getExperience(char dateOfJoin[]) {
    int day, month, year;
    sscanf(dateOfJoin, "%d-%d-%d", &day, &month, &year);

    int currentYear = 2025; // you can also get it from time.h
    return currentYear - year;
}

void searchByDepartment(struct Employee *employees, int n, char dept[]) {
    int found = 0;
    printf("\nEmployees in Department %s:\n", dept);
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].dept, dept) == 0) {
            printf("%s (ID: %d)\n", employees[i].name, employees[i].empID);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found in this department.\n");
    }
}

void searchByDesignation(struct Employee *employees, int n, char desig[]) {
    int found = 0;
    printf("\nEmployees with Designation %s:\n", desig);
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].designation, desig) == 0) {
            printf("%s (ID: %d)\n", employees[i].name, employees[i].empID);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found with this designation.\n");
    }
}

void searchByExperience(struct Employee *employees, int n, int minExp) {
    int found = 0;
    printf("\nEmployees with at least %d years of experience:\n", minExp);
    for (int i = 0; i < n; i++) {
        int exp = getExperience(employees[i].dateOfJoin);
        if (exp >= minExp) {
            printf("%s (ID: %d) – %d years\n", employees[i].name, employees[i].empID, exp);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found with this experience.\n");
    }
}

int main(){

    // struct Employee employees[100];
    int empcount = 0;

    int n;
    printf("How many employees do you want to add? ");
    scanf("%d", &n);
    getchar(); 


    struct Employee* employees = malloc(n * sizeof(struct Employee));
    if (employees == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        printf("\nEntering details for employee %d\n", i+1);

        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].empID);
        getchar();

        printf("Enter Name: ");
        fgets(employees[i].name, 50, stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Enter Department: ");
        fgets(employees[i].dept, 50, stdin);
        employees[i].dept[strcspn(employees[i].dept, "\n")] = '\0';

        printf("Enter Designation: ");
        fgets(employees[i].designation, 50, stdin);
        employees[i].designation[strcspn(employees[i].designation, "\n")] = '\0';

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
        getchar();

        printf("Enter Date of Joining (dd-mm-yyyy): ");
        fgets(employees[i].dateOfJoin, 50, stdin);
        employees[i].dateOfJoin[strcspn(employees[i].dateOfJoin, "\n")] = '\0';

        printf("Enter Phone Number: ");
        scanf("%d", &employees[i].phoneNo);
        getchar();

        printf("Enter Email: ");
        fgets(employees[i].email, 50, stdin);
        employees[i].email[strcspn(employees[i].email, "\n")] = '\0';
    }

    printf("\n=== Employee Records ===\n");

    for (int i = 0; i < n; i++) {  // 'n' is the number of employees
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", employees[i].empID);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].dept);
        printf("Designation: %s\n", employees[i].designation);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Date of Joining: %s\n", employees[i].dateOfJoin);
        printf("Phone: %d\n", employees[i].phoneNo);
        printf("Email: %s\n", employees[i].email);
    }

    char searchDept[50];
    printf("\nEnter department to search: ");
    scanf(" %[^\n]", searchDept);
    searchByDepartment(employees, n, searchDept);

    char searchDesig[50];
    printf("\nEnter designation to search: ");
    scanf(" %[^\n]", searchDesig);
    searchByDesignation(employees, n, searchDesig);

    int minExp;
    printf("\nEnter minimum experience (years) to search: ");
    scanf("%d", &minExp);
    searchByExperience(employees, n, minExp);

    return 0;
}