#include <stdio.h>
struct
{
    int month,day,year;
    int number_of_days;
    int count;
}english,bangla,arabic;

void delay(long int count)
{
    for(int i=0; i<=count;)
        i++;
}

void bangla_dmy_calculate(int,int,int);

char *day_name(int num)
{
    switch(num)
    {
    case 6:
        return "Saturday";
        break;
    case 7:
        return "Sunday";
        break;
    case 1:
        return "Monday";
        break;
    case 2:
        return "Tuesday";
        break;
    case 3:
        return "Wednesday";
        break;
    case 4:
        return "Thursday";
        break;
    case 5:
        return "Friday";
        break;
    }
}

int days_of_english_month(int month, int year)
{
    if(month==4 || month==6 || month==9 || month==11)
        return 30;
    else if(month==2)
    {
        if(year%400==0 || (year%100!=0 && year%4==0))
        {
            return 29;
        }
        else
            return 28;
    }
    else
        return 31;
}

void english_day_calculate(void)
{
    while(1)
    {
    english.count=0,english.number_of_days=0;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tEnter the Date (DD/MM/YYYY)=");
    scanf("%d/%d/%d",&english.day,&english.month,&english.year);
    for(int i=1; i<=english.year; i++)
    {
        if(i%400==0 || (i%100!=0 && i%4==0))
        {
            if(i==english.year)
            {
                if(english.count>=7)
                    english.count=0;
                english.count++;
            }
            else
            {
                if(english.count>=7)
                    english.count=0;
                english.count+=2;
                if(english.count>7)
                    english.count=1;
            }
        }
        else
        {
            if(english.count>=7)
                english.count=0;
            english.count++;

        }
    }
    int j=2;
    for(int i=1; i<=english.month; i++)
    {
        english.number_of_days=days_of_english_month(i,english.year);
        if(i==english.month)
            english.number_of_days=english.day;
        for(; j<=english.number_of_days; j++)
        {
            if(english.count>=7)
                english.count=0;
            english.count++;
        }
        j=1;
    }
    printf("\n\t\t\t\t\tThe day is %s\n",day_name(english.count));
    Sleep(300);
    bangla_dmy_calculate(english.day,english.month,english.year);
    system("cls");
    }
}
