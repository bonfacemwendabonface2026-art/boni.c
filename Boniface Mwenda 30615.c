#include<stdio.h>

//function calculate tax
float calculateTax(float grossSalary){
    float tax;
    
    if(grossSalary<30000){
        tax=grossSalary*0.05;
    }
    
    else if(grossSalary >30000 &&grossSalary<=59999){
        tax=grossSalary*0.1;
    }
    else{ // 60000 and above
        tax=grossSalary*0.15;
    }
    return tax;
}   

int main (){
    float grossSalary,taxAmount,netSalary;
    
    //function user to enter grossSalary
    printf("Enter employees grossSalary(Ksh):");
    scanf("%f",&grossSalary);
    
    // call calculateTax()function
    taxAmount=calculateTax(grossSalary);
    
    // calculate net salary 
    netSalary=grossSalary-taxAmount;
    
    //display results 
    printf("\n-$$$-EMPLOYEE SALARY DETAILS-$$$-\n");
    printf("Gross salary:Ksh%.2f\n",grossSalary);
    printf("Tax amount:Ksh%.2f\n",taxAmount);
    printf("Net salary:Ksh%.2f\n",netSalary);
    
    return 0;
}