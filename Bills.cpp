//Name: Peter Thuo
//Reg: C100/G/30622/26
//Description:Program to calculate bills
//Date:30/9/2026
#include <stdio.h>

float calculateBill(float units); //prototype

int main()
{
    float units,bill;
    printf("Enter the units consumed: ");
    scanf("%f",&units);

    bill=calculateBill(units); //calling function

    printf("\n");
    printf("Units consumed: %.2f\n",units);
    printf("Total Bill: KSh %.2f\n",bill);
    return 0;
}

float calculateBill(float units)
{
    float totalBill;

    if(units>200){
        totalBill = 1000 + 1500 + (units-200)*20;
    }
    else if(units>100){
        totalBill = 1000 + (units-100)*15;
    }
    else{
        totalBill = units*10;
    }

    return totalBill;
}