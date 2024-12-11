#include <stdio.h>

int main() {
    float base_salary, HRA, DA, TA, gross_salary, total_percent;

    printf("Enter the base salary: ");
    scanf("%f", &base_salary); 
    HRA = 10; 
    TA = 8;   
    DA = 5;   
    total_percent = HRA + DA + TA; 
    gross_salary = base_salary + (base_salary * total_percent / 100); 
    printf("Gross Salary: %.2f\n", gross_salary); 
}