#include<stdio.h>
int main()
{
bill_calculate:
//your whole program here 

int choice;
scanf("%d",&choice);
if(choice == 1) goto bill_calculate;
else goto exit;

exit:
return 0;
}