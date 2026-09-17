#include<stdio.h>
int main()
{

    float Percentage;
    int Fees=150000;
    float TotalCost;
    int Total;
    char Opt;
    int Opt2,Opt3;
//    
    int ScoreSubject1;
    printf("Enter Subject One Score:" );
    scanf("%d",&ScoreSubject1);

    int ScoreSubject2;
    printf("Enter Subject Two Score:" );
    scanf("%d",&ScoreSubject2);

    int ScoreSubject3;
    printf("Enter Subject Three Score: ");
    scanf("%d",&ScoreSubject3);

    int ScoreSubject4;
    printf("Enter Subject Four Score:" );
    scanf("%d",&ScoreSubject4);

    int ScoreSubject5;
    printf("Enter Subject Five Score:" );
    scanf("%d",&ScoreSubject5);

    int ScoreSubject6;
    printf("Enter Subject Six Score:" );
    scanf("%d",&ScoreSubject6);
//
    
    int Sum= ScoreSubject1 + ScoreSubject2 + ScoreSubject3 + ScoreSubject4 + ScoreSubject5 +ScoreSubject6;
    Percentage= (Sum / 600.0) * 100.0 ;
    printf("Percentage=%f",Percentage);
     switch((int) Percentage)
     {
        case 90 ... 100:
        TotalCost=(Fees/100)*90;
        break;

        case 80 ... 89:
        TotalCost=(Fees/100)*50;
        break;

        case 75 ... 79:
        TotalCost=(Fees/100)*25;
        break;

        default:
}
       // printf("Discount=%f\n",TotalCost);

        printf("\nAs the student the child of Govt Servant. (Y/N)\n");
        scanf(" %c",&Opt);
        if(Opt=='y' || Opt=='Y')
        {
            TotalCost=(Fees/100)*15;
            TotalCost=Fees-TotalCost;
            printf("%.0f\n",TotalCost);
        }
        else{
           printf("\nSelect from the given choices\n");
         printf("1.is ur percentage b/w 100-90?\n");
        printf("2.is ur percentage b/w 89-80?\n");
       printf("3.is ur percentage b/w 79-75?\n");
        
       scanf("%d",&Opt2);
              switch( Opt2)
      {
         case 1:
          TotalCost=(Fees/100)*90;
        Total=Fees-TotalCost;
         printf("Final Fee=%d",Total);
         break;

         case 2:
          TotalCost=(Fees/100)*50;
        Total=Fees-TotalCost;
         printf("Final Fee=%d",Total);
         break;

         case 3:
         TotalCost=(Fees/100)*25;
                Total=Fees-TotalCost;
         printf("Final Fee=%d",Total);
         break;
     
default:
      printf("Your percentage does not match the opt you have selected");
 }
        }
        
      // printf("Final Fee : %d",Total);
       
        /////
       if(Opt=='n' || Opt=='N')
        {
        printf("\nSelect from the given choices\n");
        printf("1.is ur percentage b/w 100-90?\n");
        printf("2.is ur percentage b/w 89-80?\n");
        printf("3.is ur percentage b/w 79-75?\n");
        scanf(" %d",&Opt2);
    
        switch( Opt2)
     {
       case 1:
          TotalCost=(Fees/100)*90;
        Total=Fees-TotalCost;
         printf("Final Fee=%d",Total);
         break;

         case 2:
          TotalCost=(Fees/100)*50;
       Total=Fees-TotalCost;
         printf("Final Fee=%d",Total);
         break;

         case 3:
         TotalCost=(Fees/100)*25;
              Total=Fees-TotalCost;
         printf("Final Fee=%d",Total);
         break;
         
        default:
        printf("Your percentage does not match the opt you have selected");
}
      // printf("Final Fee : %d",Total);
}
        
}

