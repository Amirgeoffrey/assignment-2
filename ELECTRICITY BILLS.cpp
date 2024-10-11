#include <stdio.h>
int main(){
    int customer_id,unit_consumed;
    int total_bill;
    int surcharge;
    char customer_name[50];
    float charge_per_unit,total_bill_surcharge=0.0;
    printf("enter customer_id:");
    scanf("%d",&customer_id);
    printf("enter customer_name:");
    scanf("%d",&customer_name);
    printf("enter units_consumed:");
    scanf("%d",&unit_consumed);
    printf("enter total_bill:");
    scanf("%d",&total_bill);
    printf("enter surcharge:");
    scanf("%d",&surcharge);
    
    if(unit_consumed<=199){
        charge_per_unit=1.20;
    }
    else if(unit_consumed>=200&&unit_consumed<400){
        charge_per_unit=1.50;
        
    }
    else if(unit_consumed>=400&& unit_consumed<600){
        charge_per_unit=1.80;
    }
    else{
      charge_per_unit=2.00;
    }
    // chargcalculate total bill before any surcharge
    total_bill=unit_consumed*charge_per_unit;
    //apply surcharge if total bills exceedsksh.400
    if(total_bill>400){
    surcharge=total_bill*0.15;
    
    }
    //ensure minimum bill is ksh.100
    total_bill=total_bill+surcharge;
    if(total_bill<100){
        total_bill=100;
    
    }
    //display the output
    printf("electricity bill\n");
    printf;("customer_id:%d\n",customer_id);
    printf("customer_name:%s\n",customer_name);
    printf("unit_consumed:%d\n",unit_consumed);
    printf("charge_per_unit:.2f\n",charge_per_unit);
    printf("total amount to pay:%2fksh\n",total_bill);
    
    return 0;
}