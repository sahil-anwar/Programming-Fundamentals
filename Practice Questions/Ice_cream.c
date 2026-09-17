#include<stdio.h>
int Cups(int n){
    
}
int Cone(int n){
    int Chocolate = 200;
    int Vanilla = 250;
    int Strawberry = 200;
    int Oreo = 250;
    int Bill = 0;
    int count = 0;
    int flavor_type;
    printf("Flavor\t\tPrice\n1.Chocolate\t200\n2.Vanilla\t250\n3.Strawberry\t200\n4.Oreo\t\t250\n");
    printf("CHoose Flavor ");
    if(n>0){
        while(n>0){
            printf("\nFlavor\t\tPrice\n1.Chocolate\t200\n2.Vanilla\t250\n3.Strawberry\t200\n4.Oreo\t\t250\n");
            printf("Choose Flavor ");
            scanf("%d",&flavor_type);
            if(flavor_type==1){
                printf("You Selected Chocolate \n");
                n -= Chocolate; //n = n - chocolate
            }
            if(flavor_type==2){
                printf("You Selected Vanilla \n");
                n -= Vanilla; //n = n - Vanilla
            } 
            if(flavor_type==3){
                printf("You Selected StrawBerry \n");
                n -= Strawberry; //n = n - StrawBerry
            }
            if(flavor_type==4){
               printf("You Selected Oreo \n");
                n -= Oreo; //n = n - Oreo
            }
            if(n<0){
                printf("Low Budget");
                break;
            }
            count++;
        }
    }
    if(n>=0){
        printf("Remaining Budget %d",n);
        printf("\nTotal Number of Cone %d",count);
    }
    else{
        printf("You are Low on Budget ... Pay the Remaining Amount %d",n);
        printf("\nTotal Number of Cone %d",count);
    }
    //printf("\nTotal Bill %d",n);
    //printf("\nTotal Number of Cone %d",count);
}   
int main(){
    int budget;
    int type;
    int bill = 0;
    printf("Enter the Total Budget ");
    scanf("%d",&budget);

    printf("Choose Ice Cream Type\n1.Cups\n2.Cone\n");
    scanf("%d",&type);
    if(type==1){
        Cups(budget);
    }
    if(type==2){
        Cone(budget);
    }
    return 0;
}