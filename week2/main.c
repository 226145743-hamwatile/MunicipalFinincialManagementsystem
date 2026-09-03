#include <stdio.h> 
int main() { 

    double revenue; 
    double expenses; 
    double balance;

    int departments;
    double payroll;
    double procurement;
    double assets;

printf("MUNICIPAL BUDGET CALCULATOR\n");
printf("---------------------------\n");
printf("Enter total revenue: "); 
scanf("%lf", &revenue); 

printf("Enter total expenses: "); 
scanf("%lf", &expenses); 

balance = revenue - expenses;

printf("\nRevenue: %.2f\n", revenue);
printf("Expenses: %.2f\n" , expenses);

if (balance > 0){
    printf("Surplus: %.2f\n", balance);
}
else if (balance < 0){
    printf("Deficit: %.2f\n", -balance);
}
else {
    printf("The budget is balanced.\n"); 
}

printf("\n-------MUNICIPAL FINANCIAL Summary-----\n");

printf("Enter number of departments: ");
scanf("%d", &departments);

printf("Enter total payroll: ");
scanf("%lf", &payroll);

printf("Enter procurement value: ");
scanf("%lf", &procurement);

printf("Enter assets value: ");
scanf("%lf", &assets);

printf("\n-------------------------------\n");
printf("Departments: %d \n", departments);
printf("Revenue: %.2f\n", revenue);
printf("Expenses: %.2f\n", expenses);
printf("Balance: %.2f\n", balance);
printf("Payroll: %.2f\n", payroll);
printf("Procurement: %.2f\n", procurement);
printf("Assets: %.2f\n", assets);

return 0; 
}