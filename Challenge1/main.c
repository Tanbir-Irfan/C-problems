#include<stdio.h>
#include<string.h>
int main(void)
{
    int num;
    printf("The number of strings=");
    scanf("%i",&num);
    for(int count=1;count<=num;count++)
    {
        char ar[1000];
        printf("Name%i=",count);
        scanf("%s",ar);
        int font_number=strlen(ar);
        if(font_number<=5)
        {
            puts(ar);
        }
        else
        {
            printf("%c",ar[0]);
            int flag=0;
            for(int count1=1;count1<=font_number;count1++)
            {
                flag++;
            }
            printf("%i",flag-2);
            printf("%c\n",ar[font_number-1]);
        }
    }
    return 0;
}
