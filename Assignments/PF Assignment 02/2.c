#include<stdio.h>
int main()
{
    int a[10][10], b[10][10],  Row1, Row1, Row2,Col1, Col2, i, j, k;
    int Multiply[10][10]={0};

    printf("Enter rows  for first matrix: ");
    scanf("%d",&Row1);
    printf("enter the first column matrix");
    scanf("%d",&Col1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d",&Row2);
    printf("Enter column for second matrix");
    scanf("%d",&Col2);

    if  (Col1!=Row2)
       {
        printf("Matrix cannot be multiplied");
      }

   else 
   {
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<Row1;  i++)
        for(j=0; j<Col1;j++)
        {
            scanf("%d", &a[i][j]);         //now-here-we-put-first-matrix-element-to-user
        }

    
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<Row2;  i++)
    {
        for(j=0; j<Col2;j++)                      
        {
            scanf("%d",&b[i][j]);            //now-here-we-put-second-matrix-element-to-user
        }
    }
    
    printf("Matrix A is \n ") ;
    for(i=0; i<Row1; i++)
       { for(j=0; j<Col1; j++)
        {                                   
            printf("%d \t",a[i][j]);
        }
        printf("\n");
       }
        printf("Matrix B is \n ");
    for(i=0; i<Row1;i++)
       { for(j=0; j<Col1; j++)            
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
       }
    
    for(i=0; i<Row1; i++)                     //now-for-loop-use-to-multiply-matrices
      {  for(j=0; j<Col2; j++)                //matrix-multiplication
        {
            for(k=0; k<Col1; ++k)
            {
                Multiply[i][j]=Multiply[i][j]+a[i][k]*b[k][j];
            }
        }
      }
  
    printf("\nOutput Matrix:\n");
    for(i=0; i<Row1;  i++)                //now-we-use-for-loop-to-print-matrices
       { for(j=0; j<Col2; ++j)
        {
            printf("%d \t ", Multiply[i][j]);
        }
        printf("\n");
       }
   }
    return 0;
}