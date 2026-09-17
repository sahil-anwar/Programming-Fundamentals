#include<stdio.h>
#include<string.h>
int main(){
    char String[10];
    printf("Name: ");
    scanf("%s",String);
    char input;
    char input2;
    printf("Pick Option::\nA.Count Vowels\nB.Count All\nC.Frequent:\nD.String:\n");
    scanf("\n%c",&input);
    while(input!='E'){
        scanf("%c",&input2);
        if(input2=='A'){
            //count_vowel(String);
            //printf("%d",count_vowel(String));
            int count = 0;
            printf("\nCounting the Number of Vowels \n");
            for (int i = 0; i < 10; i++)
            {
                if(String[i]=='A' || String[i]=='a' || String[i]=='E' || String[i]=='e' || String[i]=='i' || String[i]=='I' || String[i]=='o' || String[i]=='O' || String[i]=='u' || String[i]=='U'){
                    count++;
                }
            }
            printf("Total Vowel in Array : %d\n\n",count);
            //return count;
        }
        if(input2=='B'){
            //count_all(String);
            int all = strlen(String);
            printf("\nTotal Characters in Array : %d\n\n",all);
        }
        if(input2=='C'){
            int max = 0;
            char word;
            int countc = 0;
            char a;
            //count_frequent(String);
            //i will change and bring next character forward.
            for (int i = 0; i < strlen(String) ; i++)
            {
                a = String[i];
                for (int j = 0; j < strlen(String) ; j++)
                {
                    if(a==String[j]){
                        countc++;
                    }
                }
                if(countc>max){
                    max = countc;
                    word = a;
                }
            }
            printf("Most Frequent Word : %c and it occured : %d times\n",word,max);
        }
        if(input2=='D'){
            char a[10];
            printf("Second String : ");
            scanf("%s",a);
            printf("Concatenation of Strings  : %s \n",strcat(String,a));
        }

        printf("\n\nContinue with following Options:\nA.Count Vowels\nB.Count All\nC.Most Frequent\nD.Join String\n");
        printf("\nType Input Please ");
        scanf("%d",&input);
    }

    return 0;
}