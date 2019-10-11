#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char update_account(void)
{
    try1:
    system("color B");
    printf("\n\t\t\t\t\tEnter your account number=");
    gets(acc_upd.ac_num);
    acc_upd.len[0]=strlen(acc_upd.ac_num);
    file=fopen("test.txt","r");int p=0;
    while(!feof(file))
    {
        fgets(acc_upd.str[p],500,file);
        p++;
    }
    acc_upd.matching=0;acc_upd.flag[0]=0;
    for(int i=0; i<30; i++)
    {
        for(int j1=0,j2=8;j1<acc_upd.len[0]; j1++,j2++)
        {
            if(acc_upd.str[i][j2]==acc_upd.ac_num[j1])
                acc_upd.flag[0]++;
        }
        if(acc_upd.flag[0]==acc_upd.len[0] && acc_upd.len[0]>1)
        {
            acc_upd.matching=i;
            break;
        }
        else if(acc_upd.flag[0]==acc_upd.len[0] && acc_upd.len[0]==1 && acc_upd.str[i][9]==' ')
        {
            acc_upd.matching=i;
            break;
        }
        acc_upd.flag[0]=0;
    }
    if(acc_upd.flag[0]!=acc_upd.len[0])
    {
        printf("\n\t\t\t\t\tThe given account number is not found\n");
        Sleep(2500);
        system("cls");
        goto try1;
    }
    system("cls");
    try2:
    system("color A");
    printf("\n\t\t\t\t\t->> 1 for Updating Name\n");
    printf("\t\t\t\t\t->> 2 for Updating Address\n");
    printf("\t\t\t\t\t->> 3 for Updating Occupation\n");
    printf("\t\t\t\t\t->> 4 for Updating Father's Name\n");
    printf("\t\t\t\t\t->> 5 for Updating Mother's Name\n");
    printf("\t\t\t\t\t->> 6 for Updating Date of Birth\n");
    printf("\t\t\t\t\t->> 7 for Updating Gender\n");
    printf("\t\t\t\t\t->> 8 for Updating Age\n");
    printf("\t\t\t\t\t->> 9 for Updating Phone Number\n");
    printf("\n\t\t\t\t\t##Press any number from 1 to 9 =");
    int num;scanf("%i",&num);char ch[3];gets(ch);
    system("cls");
    system("color B");
    switch(num)
    {
    case 1:
        {
            printf("\n\t\t\t\t\tEnter your update Name=");
            gets(acc_upd.name);
            acc_upd.len[1]=strlen(acc_upd.name);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=38; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=39;
                    for(int j=0; j<acc_upd.len[1]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.name[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<78; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][78]='|';
                    fputc(acc_upd.str[i][78],file);
                    for(int k=79; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 2:
        {
            printf("\n\t\t\t\t\tEnter your update Address=");
            gets(acc_upd.address);
            acc_upd.len[2]=strlen(acc_upd.address);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=78; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=79;
                    for(int j=0; j<acc_upd.len[2]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.address[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<126; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][126]='|';
                    fputc(acc_upd.str[i][126],file);
                    for(int k=127; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 3:
        {
            printf("\n\t\t\t\t\tEnter your update Occupation=");
            gets(acc_upd.occupation);
            acc_upd.len[3]=strlen(acc_upd.occupation);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=126; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=127;
                    for(int j=0; j<acc_upd.len[3]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.occupation[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<167; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][167]='|';
                    fputc(acc_upd.str[i][167],file);
                    for(int k=168; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 4:
        {
            printf("\n\t\t\t\t\tEnter your update Father's Name=");
            gets(acc_upd.father_name);
            acc_upd.len[4]=strlen(acc_upd.father_name);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=167; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=168;
                    for(int j=0; j<acc_upd.len[4]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.father_name[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<207; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][207]='|';
                    fputc(acc_upd.str[i][207],file);
                    for(int k=208; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 5:
        {
            printf("\n\t\t\t\t\tEnter your update Mother's Name=");
            gets(acc_upd.mother_name);
            acc_upd.len[5]=strlen(acc_upd.mother_name);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=207; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=208;
                    for(int j=0; j<acc_upd.len[5]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.mother_name[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<247; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][247]='|';
                    fputc(acc_upd.str[i][247],file);
                    for(int k=248; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 6:
        {
            printf("\n\t\t\t\t\tEnter your update Date of Birth=");
            gets(acc_upd.dob);
            acc_upd.len[6]=strlen(acc_upd.dob);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=247; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=248;
                    for(int j=0; j<acc_upd.len[6]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.dob[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<263; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][263]='|';
                    fputc(acc_upd.str[i][263],file);
                    for(int k=264; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 7:
        {
            printf("\n\t\t\t\t\tEnter your update Gender=");
            gets(acc_upd.gender);
            acc_upd.len[7]=strlen(acc_upd.gender);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=263; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=264;
                    for(int j=0; j<acc_upd.len[7]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.gender[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<272; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][272]='|';
                    fputc(acc_upd.str[i][272],file);
                    for(int k=273; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 8:
        {
            printf("\n\t\t\t\t\tEnter your update Age=");
            gets(acc_upd.age);
            acc_upd.len[8]=strlen(acc_upd.age);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=272; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=273;
                    for(int j=0; j<acc_upd.len[8]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.age[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<278; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][278]='|';
                    fputc(acc_upd.str[i][278],file);
                    for(int k=279; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][k],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    case 9:
        {
            printf("\n\t\t\t\t\tEnter your update Phone Number=");
            gets(acc_upd.phone);
            acc_upd.len[9]=strlen(acc_upd.phone);
            file=fopen("test.txt","w");
            for(int i=0; i<30; i++)
            {
                if(acc_upd.matching==i)
                {
                    int k;
                    for(k=0; k<=304; k++)
                        fputc(acc_upd.str[i][k],file);
                    k=305;
                    for(int j=0; j<acc_upd.len[9]; j++)
                    {
                        acc_upd.str[i][k]=acc_upd.phone[j];
                        fputc(acc_upd.str[i][k],file);
                        k++;
                    }
                    for(int j=k; j<329; j++)
                    {
                        acc_upd.str[i][j]=' ';
                        fputc(acc_upd.str[i][j],file);
                    }
                    acc_upd.str[i][329]='|';
                    fputc(acc_upd.str[i][329],file);
                    //for(int k=330; k<strlen(acc_upd.str[i]); k++)
                        fputc(acc_upd.str[i][330],file);
                    i++;
                }
                fputs(acc_upd.str[i],file);
            }
            break;
        }
    default:
        {
            system("cls");
            printf("\n\n\n\n\t\t\t\t\tInvalid number you have given which is not from 1 to 9\n");
            Sleep(4500);
            system("cls");
            goto try2;
        }
    }
    system("cls");
    system("color E");
    printf("\n\n\t\t\t\t\tUpdated Successful\n");
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
