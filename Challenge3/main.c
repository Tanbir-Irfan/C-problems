#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    file=fopen("text.txt","w");
    fputs("  Name\t\t Age\t Phone Number\n",file);
    fputs("--------\t-----\t--------------\n",file);
    printf("How much student's information do you need=");
    int num;
    scanf("%i",&num);
    for(int i=1; i<=num; i++)
    {
        printf("Enter your name=");
        char name[100];
        scanf("%s",&name);
        printf("Enter your age=");
        int age;
        scanf("%i",&age);
        printf("Enter your Phone number=");
        char name1[100];
        scanf("%s",&name1);
        fprintf(file,"%i.%s\t\t %i\t %s\n",i,name,age,name1);
    }
    fclose(file);
    return 0;
}
