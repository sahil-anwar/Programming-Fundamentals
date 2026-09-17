#include<stdio.h>
int main()
{
    int Minimum;
    int A;
    int Temp;
    
    int SizeArrays[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&SizeArrays[i]);
    }
    Minimum=SizeArrays[0];
   
    for (int  i = 0; i < 7; i++)
    {
        if(Minimum>=SizeArrays[i])
        {
            Minimum=SizeArrays[i];
        }

    }
    A= Minimum;
        for(int j=0; j<7 ;j++){
            if (SizeArrays[A]>SizeArrays[j] )
            { int temp=SizeArrays[A];
              SizeArrays[j]=SizeArrays[A];
              SizeArrays[A]=Temp;

            }
            
        }
        
    
    printf("%d is the Minimum",Minimum);
    
    printf("\n%d Second Minimum Is: ",SizeArrays[A]);
    
    return 0;
}