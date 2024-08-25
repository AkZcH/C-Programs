#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define MAX_DESIGNATION_LENGTH 100

struct Employee {
    int emp_id;
    char name[MAX_NAME_LENGTH];
    char designation[MAX_DESIGNATION_LENGTH];
    float basic_salary;
    float hra_percent;
    float da_percent;
    float gross_salary;
};

void calculate_gross_salary(struct Employee *emp) {
    emp->gross_salary = emp->basic_salary + (emp->basic_salary * emp->hra_percent / 100) + (emp->basic_salary * emp->da_percent / 100);
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Emp-id: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);  
        printf("Designation: ");
        scanf(" %[^\n]", employees[i].designation);  
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);
        printf("HRA%%: ");
        scanf("%f", &employees[i].hra_percent);
        printf("DA%%: ");
        scanf("%f", &employees[i].da_percent);

        // Calculate gross salary
        calculate_gross_salary(&employees[i]);
    }

    printf("\nEmployee Information with Gross Salary:\n");
    printf("-------------------------------------------------\n");
    printf("Emp-id\tName\t\tDesignation\t\tGross Salary\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", employees[i].emp_id, employees[i].name, employees[i].designation, employees[i].gross_salary);
    }

    return 0;
}
