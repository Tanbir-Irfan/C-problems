#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char show_customer_deatils(void)
{
    try1:
    system("color E");
    printf("\n\t\t\t\t\tEnter your account number=");
    gets(acc_show.ac_num);
    acc_show.len[0]=strlen(acc_show.ac_num);
    file=fopen("test.txt","r");int p=0;
    while(!feof(file))
    {
        fgets(acc_show.str[p],500,file);
        p++;
    }
    acc_show.matching=0;acc_show.flag[0]=0;
    for(int i=0; i<30; i++)
    {
        for(int j1=0,j2=8;j1<acc_show.len[0]; j1++,j2++)
        {
            if(acc_show.str[i][j2]==acc_show.ac_num[j1])
                acc_show.flag[0]++;
        }
        if(acc_show.flag[0]==acc_show.len[0] && acc_show.len[0]>1)
        {
            acc_show.matching=i;
            break;
        }
        else if(acc_show.flag[0]==acc_show.len[0] && acc_show.len[0]==1 && acc_show.str[i][9]==' ')
        {
            acc_show.matching=i;
            break;
        }
        acc_show.flag[0]=0;
    }
    if(acc_show.flag[0]!=acc_show.len[0])
    {
        printf("\n\t\t\t\t\tThe given account number is not found\n");
        Sleep(2500);
        system("cls");
        goto try1;
    }
    system("cls");
    for(int i=0; i<30; i++)
    {
        if(acc_show.matching==i)
        {
            printf("\n\t\t\t\t\tAccount number  : %s\n\n",acc_show.ac_num);
            printf("\t\t\t\t\tCustomer name   : ");
            for(int j=39;j<78;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tAddress         : ");
            for(int j=79;j<126;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tOccupation      : ");
            for(int j=127;j<167;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tFather's Name   : ");
            for(int j=168;j<207;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tMother's Name   : ");
            for(int j=208;j<247;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tDate of Birth   : ");
            for(int j=248;j<263;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tGender          : ");
            for(int j=264;j<272;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tAge             : ");
            for(int j=273;j<278;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tCitizenship Number/NID: ");
            for(int j=279;j<304;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n\n");
            printf("\t\t\t\t\tPhone Number    : ");
            for(int j=305;j<329;j++)
                printf("%c",acc_show.str[i][j]);
            printf("\n");
        }
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

