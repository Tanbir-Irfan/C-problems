#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char show_customer_list(void)
{
    try1:
    system("color E");
    printf("At first You Have to do some settings in cmd command prompt.At first you take away the mouse\n"
           "cursor on the window bar and click right button of mouse and then click to properties and then click\n"
           "layout.Finally set 400 instead of 120 in width of the Screen Buffer Size\n\n");
    printf("\nDid you do settings to follow the instruction above if yes then press 'y' or no then press 'n'\n");
    char cha;
    scanf(" %c",&cha);
    if(cha=='y' || cha=='Y')
        system("cls");
    else if(cha=='n' || cha=='N')
    {
        system("cls");
        goto try1;
    }
    else
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\tInvalid Character You have given which is not n or y\n");
        Sleep(3000);
        system("cls");
        goto try1;
    }
    char ch[3];gets(ch);
    file=fopen("test.txt","r");int p=0;
    while(!feof(file))
    {
        fgets(list_show.str[p],500,file);
        printf("%s",list_show.str[p]);
        p++;
    }
    fclose(file);
    try:
    printf("\n\n\n\n\t\t\t\t\tDo you want to go to menu then press 'y' or press 'n' to exit:");
    char opinion;scanf(" %c",&opinion);char ch3[3];gets(ch3);
    if(opinion=='y' || opinion=='Y' || opinion=='n' || opinion=='N')
    {
        system("cls");
        return opinion;
    }
    else
    {
        system("color E");
        printf("\n\n\t\t\t\t\tInvalid Character You have given which is not n or y\n");
        Sleep(3000);
        system("cls");
        goto try;
    }
}
