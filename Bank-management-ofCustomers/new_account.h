#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int list=1;
FILE *file;
struct
{
    char ac_num[50];
    char name[50];
    char address[70];
    char occupation[50];
    char father_name[50];
    char mother_name[50];
    char dob[20];
    char gender[12];
    char age[10];
    char nid[30];
    char phone[30];
    int len[15];
    int matching;
    int flag[10];
    char str[30][500];
}acc_new,acc_upd,acc_rem,acc_show,list_show;

void delay(int j)
{
    for(int i=0;i<j;i++){}
}

void text()
{
    file=fopen("test.txt","w");
    fputs("|======|==============================|=======================================|===============================================|========================================|=======================================|=======================================|===============|========|=====|=========================|========================|\n",file);
    fputs("|Serial|        Account Number        |             Customer Name             |                    Address                    |               Occupation               |             Father's Name             |             Mother's Name             | Date of Birth | Gender | Age |       National ID       |      Phone Number      |\n",file);
    fputs("|======|==============================|=======================================|===============================================|========================================|=======================================|=======================================|===============|========|=====|=========================|========================|\n",file);
    fclose(file);
}

char new_account(int verify,int serial)
{
    printf("Enter A account number=");
    gets(acc_new.ac_num);
    printf("Enter your Name=");
    gets(acc_new.name);
    printf("Enter your Address=");
    gets(acc_new.address);
    printf("Enter your Occupation=");
    gets(acc_new.occupation);
    printf("Enter your Father's Name=");
    gets(acc_new.father_name);
    printf("Enter your mother's Name=");
    gets(acc_new.mother_name);
    printf("Enter your Date of Birth=");
    gets(acc_new.dob);
    printf("Gender Male or Female or Others=");
    gets(acc_new.gender);
    printf("Enter your Age=");
    gets(acc_new.age);
    printf("Enter your Citizenship Number=");
    gets(acc_new.nid);
    printf("Enter your Phone Number=");
    gets(acc_new.phone);
    acc_new.len[1]=strlen(acc_new.ac_num);///
    for(int i=acc_new.len[1]; i<30; i++)
    {
        acc_new.ac_num[i]=' ';
    }
    acc_new.ac_num[30]='|';
    acc_new.ac_num[31]=0;///
    acc_new.len[2]=strlen(acc_new.name);///
    for(int i=acc_new.len[2]; i<39; i++)
    {
        acc_new.name[i]=' ';
    }
    acc_new.name[39]='|';
    acc_new.name[40]=0;
    acc_new.len[3]=strlen(acc_new.address);///
    for(int i=acc_new.len[3]; i<47; i++)
    {
        acc_new.address[i]=' ';
    }
    acc_new.address[47]='|';
    acc_new.address[48]=0;///
    acc_new.len[4]=strlen(acc_new.occupation);///
    for(int i=acc_new.len[4]; i<40; i++)
    {
        acc_new.occupation[i]=' ';
    }
    acc_new.occupation[40]='|';
    acc_new.occupation[41]=0;///
    acc_new.len[5]=strlen(acc_new.father_name);///
    for(int i=acc_new.len[5]; i<39; i++)
    {
        acc_new.father_name[i]=' ';
    }
    acc_new.father_name[39]='|';
    acc_new.father_name[40]=0;///
    acc_new.len[6]=strlen(acc_new.mother_name);///
    for(int i=acc_new.len[6]; i<39; i++)
    {
        acc_new.mother_name[i]=' ';
    }
    acc_new.mother_name[39]='|';
    acc_new.mother_name[40]=0;///
    acc_new.len[7]=strlen(acc_new.dob);///
    for(int i=acc_new.len[7]; i<15; i++)
    {
        acc_new.dob[i]=' ';
    }
    acc_new.dob[15]='|';
    acc_new.dob[16]=0;///
    acc_new.len[8]=strlen(acc_new.gender);///
    for(int i=acc_new.len[8]; i<8; i++)
    {
        acc_new.gender[i]=' ';
    }
    acc_new.gender[8]='|';
    acc_new.gender[9]=0;///
    acc_new.len[9]=strlen(acc_new.age);///
    for(int i=acc_new.len[9]; i<5; i++)
    {
        acc_new.age[i]=' ';
    }
    acc_new.age[5]='|';
    acc_new.age[6]=0;///
    acc_new.len[10]=strlen(acc_new.nid);///
    for(int i=acc_new.len[10]; i<25; i++)
    {
        acc_new.nid[i]=' ';
    }
    acc_new.nid[25]='|';
    acc_new.nid[26]=0;///
    acc_new.len[11]=strlen(acc_new.phone);///
    for(int i=acc_new.len[11]; i<24; i++)
    {
        acc_new.phone[i]=' ';
    }
    acc_new.phone[24]='|';
    acc_new.phone[25]=0;///
    if(verify<3)
    {
        text();
        serial++;
    }
    file=fopen("test.txt","a");
    fprintf(file,"|%i     |%s%s%s%s%s%s%s%s%s%s%s\n",serial,acc_new.ac_num,acc_new.name,acc_new.address,acc_new.occupation,acc_new.father_name,acc_new.mother_name,acc_new.dob,acc_new.gender,acc_new.age,acc_new.nid,acc_new.phone);
    fputs("|======|==============================|=======================================|===============================================|========================================|=======================================|=======================================|===============|========|=====|=========================|========================|\n",file);
    ///serial++;
    system("cls");
    system("color E");
    printf("\n\n\t\t\t\t\tNew Account was Successfully Created\n");
    Sleep(3000);
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
