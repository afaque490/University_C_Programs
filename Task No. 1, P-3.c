// Ahmed's basic salary input through keyboard. His convenyance allowance is 20%  of basic salary, house rent allowance is 40% of basic salary and loan installement amount is Rs. 10,000. Write a program in C to calculatr his gross and net salary.

#include <stdio.h>

int main() {
    float basic_salary, gross_salary, net_salary;
    float conveyance_allowance, house_rent_allowance, loan_installment;

    printf("Enter Ahmed's basic salary: ");
    scanf("%f", &basic_salary);
    
    // Calculate conveyance allowance (20% of basic salary)
    conveyance_allowance = 0.20 * basic_salary;
    
    // Calculate house rent allowance (40% of basic salary)
    house_rent_allowance = 0.40 * basic_salary;
    
    // Given loan installment amount is Rs. 10,000
    loan_installment = 10000;
    
    // Calculate gross salary
    gross_salary = basic_salary + conveyance_allowance + house_rent_allowance;
    
    // Calculate net salary
    net_salary = gross_salary - loan_installment;
    
    
    printf("\nAhmed's Gross Salary: Rs. %.2f\n", gross_salary);
    printf("Ahmed's Net Salary: Rs. %.2f\n", net_salary);
    
    return 0;
}
