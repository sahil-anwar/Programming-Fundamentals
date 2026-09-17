#include<stdio.h>
int team(int players, int available)
{
    int  teaam;
    int  remain;
        while (players>=9 || players<=15)
        {
             teaam = available / players;
                   remain = available % players;
                   printf("\nthere will be  %d teams with  %d players left over",teaam,remain);  
                   break;
        }
        }
int main()
{
    int players;
    printf("Enter the number of players u want per team:");
    scanf("%d",&players);
    while (players>0)
    {
        if(players<=8 || players>15)
            {
                printf("please enter valid input b/w 9-15:");
                scanf("%d",&players);
            }
        else
            break;
    }
    
    int available;
    printf("Enter the number of available players: ");
    scanf("%d",&available);
    team(players,available);
}