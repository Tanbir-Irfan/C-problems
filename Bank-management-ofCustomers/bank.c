#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "new_account.h"
#include "update_information.h"
#include "remove_account.h"
#include "show_customer_details.h"
#include "show_customer_list.h"

void close(void)
{
    system("cls");
    system("color E");
    printf("\n\n\t\t\t\tMY NAME IS TANBIR IRFAN THOUGH **FIROZ SIR** CALLS ME CHILLY FLAKES");
    Sleep(6000);
    system("cls");
}

int main(void)
{
    int num;
    try:
    system("cls");
    system("color 3");
    printf("\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2    BANKING MANAGEMENT SYSTEM   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t\t\t1.Create new account\n");
    printf("\t\t\t\t\t2.Update information of customer account\n");
    printf("\t\t\t\t\t3.Check the details of customer account\n");
    printf("\t\t\t\t\t4.View customer's list\n");
    printf("\t\t\t\t\t5.For transactions\n");
    printf("\t\t\t\t\t6.Remove existing customer account\n");
    printf("\t\t\t\t\t7.Exit");
    printf("\n\n\n\t\t\t\t\tEnter your choice:");
    scanf("%d",&num);
    char ch[3];gets(ch);
    if(num<1 || num>7)
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\tInvalid number you have given which is not from 1 to 7\n");
        Sleep(4500);
        goto try;
    }
    system("cls");
    file=fopen("test.txt","r");
    if(file==NULL)
        {
            file=file=fopen("test.txt","w");
            fclose(file);
        }
    switch(num)
    {
        case 1:
            {

                int verify=0,serial=0;

                file=fopen("test.txt","r");
                int p=0;
                while(!feof(file))
                {
                    fgets(acc_upd.str[p],500,file);
                    if(acc_upd.str[p][0]=='|')
                        verify++;
                    p++;
                }
                for(int i=3; i<p; i+=2)
                    serial++;
                char opinion1=new_account(verify,serial);
                if(opinion1=='y'||opinion1=='Y')
                    goto try;
                else
                    close();
                break;
            }
        case 2:
            {
                char opinion2=update_account();
                if(opinion2=='y'||opinion2=='Y')
                    goto try;
                else
                    close();
                break;
            }
        case 3:
            {
                char opinion3=show_customer_deatils();
                if(opinion3=='y'||opinion3=='Y')
                    goto try;
                else
                    close();
                break;
            }
        case 4:
            {
                char opinion4=show_customer_list();
                if(opinion4=='y'||opinion4=='Y')
                    goto try;
                else
                    close();
                break;
            }
        case 5:
            {
                system("cls");
                printf("\n\n\n\n\t\t\t\t\tThe process of making this item is going on\n");
                Sleep(5000);
                goto try;
                break;
            }

        case 6:
            {
                char opinion6=remove_account();
                if(opinion6=='y'||opinion6=='Y')
                    goto try;
                else
                    close();
                break;
            }
        case 7:close();break;
    }
    system("color F");
    return 0;
}
