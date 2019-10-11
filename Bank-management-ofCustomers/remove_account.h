#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char remove_account(void)
{
    try1:
    system("color B");
    printf("\n\t\t\t\t\tEnter your account number=");
    gets(acc_rem.ac_num);
    acc_rem.len[0]=strlen(acc_rem.ac_num);
    file=fopen("test.txt","r");int p=0;
    while(!feof(file))
    {
        fgets(acc_rem.str[p],500,file);
        p++;
    }
    acc_rem.matching=0;acc_rem.flag[0]=0;
    for(int i=0; i<30; i++)
    {
        for(int j1=0,j2=8;j1<acc_rem.len[0]; j1++,j2++)
        {
            if(acc_rem.str[i][j2]==acc_rem.ac_num[j1])
                acc_rem.flag[0]++;
        }
        if(acc_rem.flag[0]==acc_rem.len[0] && acc_rem.len[0]>1)
        {
            acc_rem.matching=i;
            break;
        }
        else if(acc_rem.flag[0]==acc_rem.len[0] && acc_rem.len[0]==1 && acc_rem.str[i][9]==' ')
        {
            acc_rem.matching=i;
            break;
        }
        acc_rem.flag[0]=0;
    }
    if(acc_rem.flag[0]!=acc_rem.len[0])
    {
        printf("\n\t\t\t\t\tThe given account number is not found\n");
        Sleep(2500);
        system("cls");
        goto try1;
    }
    acc_rem.flag[1]=1;
    file=fopen("test.txt","w");
    for(int i=0; i<30; i++)
    {
        if(acc_rem.matching==i)
        {
            i+=2;
        }
        if(acc_rem.str[i][7]=='|' && acc_rem.str[i][8]!=' ' && acc_rem.str[i][8]!='=')
        {
            fprintf(file,"|%i     |",acc_rem.flag[1]);
            for(int j=8;j<strlen(acc_rem.str[i]);j++)
                fputc(acc_rem.str[i][j],file);
            acc_rem.flag[1]++;
        }
        else fputs(acc_rem.str[i],file);
    }
    system("cls");
    system("color 7");
    printf("\n\n\t\t\t\t\tRemoved Successful\n");
    Sleep(2500);
    system("cls");
    fclose(file);
    try:
    printf("\n\n\t\t\t\t\tDo you want to go to menu then press 'y' or press 'n' to exit:");
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
