#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int num;
    printf("Enter a number=");
    scanf("%i",&num);
    int he[num];
    for(int i=0; i<num; i++)
    {
        printf("%i.",i+1);
        scanf("%i",&he[i]);
    }
    printf("\n\n");
    int j=0,k=2;
    for(int i=0; i<num; i++)
    {
        //printf("%i.",i+1);
        if(i==0)
        {
            printf("%i.%i\n",i+1,he[0]);
        }
        else
        {
            if(he[j]!=he[i])
            {
                printf("%i.%i\n",k,he[i]);
                k++;
            }
            j++;
        }
    }
    return 0;
}
