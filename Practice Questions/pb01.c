#include<stdio.h>
int main()
{
    //int Array[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int Array[3][4];
    int Maximum;
    for(int i=0;i<3;i++)
    {
    	
        for(int j=0;j<4;j++)
        {
		printf("Enter The Array Number:");
        scanf("%d",&Array[i][j]);
    	}
    }
    Maximum = Array[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(Maximum<Array[i][j])
            {
            	Maximum  = Array[i][j];
            }
        }
        
    }
    printf("Maximum is %d",Maximum);
    return 0;
}