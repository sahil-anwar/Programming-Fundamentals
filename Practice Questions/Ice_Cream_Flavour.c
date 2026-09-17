#include<stdio.h>
int Cups(int n){
    int FlavorType;
    int Size;
    int Bill = 0;
    int Count = 0;
    
    int Chocolate_Small = 200;
    int Chocolate_Medium = 250;
    int Chocolate_Large = 300;
    
    int Vanilla_Small = 250;
    int Vanilla_Medium = 300;
    int Vanilla_Large = 350;

    int Strawberry_Small = 200;
    int Strawberry_Medium = 250;
    int Strawberry_Large = 300;

    int Oreo_Small = 250;
    int Oreo_Medium = 300;
    int Oreo_Large = 400;

    printf("Flavor\t\t\tSmall\t\tMediumn\t\tLarge");
    printf("\n1-Chocolate:\t\t200\t\t250\t\t300");
    printf("\n2-Vanilla:\t\t250\t\t300\t\t350");
    printf("\n3-Strawberry:\t\t200\t\t250\t\t300");
    printf("\n4-Oreo:\t\t\t250\t\t300\t\t400\n");
   
    if(n>=0){
        while(n>0){
            printf("\nSelect Flavor");
            printf("\n1-Chocolate:\t\t200\t\t250\t\t300");
            printf("\n2-Vanilla:\t\t250\t\t300\t\t350");
            printf("\n3-Strawberry:\t\t200\t\t250\t\t300");
            printf("\n4-Oreo:\t\t\t250\t\t300\t\t400\n");

            scanf("%d",&FlavorType);
            if(FlavorType==1){
                printf("\nSelect_Size");
                printf("\n1.Small:\n2.Medium:\n3.Large:\n");
                scanf("%d",&Size);
                if(Size==1){
                    n -= Chocolate_Small;
                    Bill += Chocolate_Small;
                }
                if(Size==2){
                    n -= Chocolate_Medium;
                    Bill += Chocolate_Medium;
                }
                if(Size==3){
                    n -= Chocolate_Large;
                    Bill += Chocolate_Large;
                }
            }
            if(FlavorType==2){
                printf("\nSelect Size:");
                printf("\n1.Small:\n2.Medium:\n3.Large:\n");
                scanf("%d",&Size);
                if(Size==1){
                    n -= Vanilla_Small;
                    Bill += Vanilla_Small;
                }
                if(Size==2){
                    n -= Vanilla_Medium;
                    Bill += Vanilla_Large;
                }
                if(Size==3){
                    n -= Vanilla_Large;
                    Bill += Vanilla_Large;
                }
            }
            if(FlavorType==3){
                printf("\nSelect Size");
                printf("\n1.Small:\n2.Medium:\n3.Large:\n");
                scanf("%d",&Size);
                if(Size==1){
                    n -= Strawberry_Small;
                    Bill += Strawberry_Small;
                }
                if(Size==2){
                    n -= Strawberry_Medium;
                     Bill +=    Strawberry_Medium;                
                }
                if(Size==3){
                    n -= Strawberry_Large;
                    Bill += Strawberry_Large;
                }
            }
            if(FlavorType==4){
                printf("\nSelect_Size");
                printf("\n1.Small:\n2.Medium:\n3.Large:\n");
                scanf("%d",&Size);
                if(Size==1){
                    n -= Oreo_Small;
                    Bill += Oreo_Small;
                }
                if(Size==2){
                    n -= Oreo_Small;
                    Bill += Oreo_Medium;
                }
                if(Size==3){
                    n -= Oreo_Large;
                    Bill += Oreo_Large;
                }
            }
            Count++;
            if(n<0){
                printf("Low_Budget");
                break;
            }
        }
        
    }
    printf("\nBill_is: %d",Bill);
    printf("\nRemaining_Budget: %d",n);
    printf("\nTotal_Number_of_Cups: %d",Count);


}
int Cone(int n){
    int Chocolate = 200;
    int Vanilla = 250;
    int Strawberry = 200;
    int Oreo = 250;
    int Bill = 0;
    int Count = 0;
    int FlavorType;
    printf("Flavor\t\tPrice\n1.Chocolate:\t200\n2.Vanilla:\t250\n3.Strawberry:\t200\n4.Oreo:\t\t250\n");
    printf("Select_Flavor ");
    if(n>=0){
        while(n>0){
            scanf("%d",&FlavorType);
            if(FlavorType==1){
                printf("\nYou_Selected_Chocolate ");
                n-=Chocolate;
                Bill += Chocolate;
            }
            if(FlavorType==2){
                Bill = Bill + Vanilla;
            }
            if(FlavorType==3){
                Bill  = Bill + Strawberry;
            }
            if(FlavorType==4){
                Bill  = Bill + Oreo;
            }
            Count++;
            if(n<0){
                printf("Low_Budget");
                break;
            }
        }
        
    }
    printf("\nBill is %d",Bill);
    printf("\nRemaining_Budget %d",n);
    printf("\nTotal_Number_of_Cones: %d",Count);
}   
int main(){
    int Budget;
    int Type;
    int Bill = 0;
    printf("Enter_The_Total_Budget: ");
    scanf("%d",&Budget);

    printf("Select_Ice_Cream_Type:\n1.Cups\n2.Cone\n");
    scanf("%d",&Type);
    if(Type==1){
        Cups(Budget);
    }
    if(Type==2){
        Cone(Budget);
    }
    return 0;
}