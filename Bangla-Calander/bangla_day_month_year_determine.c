#include <stdio.h>

char *month_name(int num)
{
    switch(num)
    {
    case 1:
        return "Boishakh";
        break;
    case 2:
        return "Joishtho";
        break;
    case 3:
        return "Ashar";
        break;
    case 4:
        return "Srabon";
        break;
    case 5:
        return "Bhadro";
        break;
    case 6:
        return "Ashin";
        break;
    case 7:
        return "Kartrik";
        break;
    case 8:
        return "Agrohayon";
        break;
    case 9:
        return "Poush";
        break;
    case 10:
        return "Magh";
        break;
    case 11:
        return "Falgun";
        break;
    case 12:
        return "Chaitro";
        break;
    }
}

void bangla_dmy_calculate(int day,int month,int year)
{
    bangla.day=day;bangla.month=month;bangla.year=year;

    if((bangla.day>=14 && bangla.month==4) || bangla.month>4)
        bangla.year=bangla.year-593;
    else
        bangla.year=bangla.year-594;
    if(bangla.year<0)
    {
        printf("\n\t\t\t\t\tImpossible to determine bangali year because bangali year was"
               "\n\t\t\t\t\tstarted to count from 14 april 593\n");
    }
    else
    {
        printf("\n\t\t\t\t\tThe Bangla date=  ");
        if(bangla.month==1 || bangla.month==4)
        {
            if(bangla.day<14)
            {
                bangla.day=14-bangla.day;
                bangla.day=30-bangla.day;
                bangla.day++;
                if(bangla.month==1)
                    printf("%i %s ",bangla.day,month_name(9));
                else
                    printf("%i %s ",bangla.day,month_name(12));

            }
            else if(bangla.day>=14)
            {
                bangla.day=bangla.day-14;
                bangla.day++;
                if(bangla.month==1)
                    printf("%i %s ",bangla.day,month_name(10));
                else
                    printf("%i %s ",bangla.day,month_name(1));
            }
        }
        else if(bangla.month==2)
        {
            if(bangla.day<13)
            {
                bangla.day=13-bangla.day;
                bangla.day=30-bangla.day;
                bangla.day++;
                printf("%i %s ",bangla.day,month_name(10));
            }
            else if(bangla.day>=13)
            {
                bangla.day=bangla.day-13;
                bangla.day++;
                printf("%i %s ",bangla.day,month_name(11));
            }
        }
        else if(bangla.month==3 || bangla.month==5 || bangla.month==6 || bangla.month==11 || bangla.month==12)
        {
            if(bangla.day<15)
            {
                bangla.day=15-bangla.day;
                if(bangla.month==3)
                {
                    if(bangla.year%400==0 || (bangla.year%100!=0 && bangla.year%4==0))
                        bangla.day=31-bangla.day;
                    else
                        bangla.day=30-bangla.day;
                    bangla.day++;
                    printf("%i %s ",bangla.day,month_name(11));
                }
                else if(bangla.month==5 || bangla.month==6 || bangla.month==11 || bangla.month==12)
                {
                    if(bangla.month==5 || bangla.month==6)
                        bangla.day=31-bangla.day;
                    else if(bangla.month==11 || bangla.month==12)
                        bangla.day=30-bangla.day;
                    bangla.day++;
                    if(bangla.month==5)
                        printf("%i %s ",bangla.day,month_name(1));
                    else if(bangla.month==6)
                        printf("%i %s ",bangla.day,month_name(2));
                    else if(bangla.month==11)
                        printf("%i %s ",bangla.day,month_name(7));
                    else
                        printf("%i %s ",bangla.day,month_name(8));
                }
            }
            else if(bangla.day>=15)
            {
                bangla.day=bangla.day-15;
                bangla.day++;
                if(bangla.month==3)
                    printf("%i %s ",bangla.day,month_name(12));
                else if(bangla.month==5)
                    printf("%i %s ",bangla.day,month_name(2));
                else  if(bangla.month==6)
                    printf("%i %s ",bangla.day,month_name(3));
                else if(bangla.month==11)
                    printf("%i %s ",bangla.day,month_name(8));
                else
                    printf("%i %s ",bangla.day,month_name(9));
            }
        }
        else if(bangla.month==7 || bangla.month==8 || bangla.month==9 || bangla.month==10)
        {
            if(bangla.day<16)
            {
                bangla.day=16-bangla.day;
                if(bangla.month==7 || bangla.month==8 || bangla.month==9)
                    bangla.day=31-bangla.day;
                else
                    bangla.day=30-bangla.day;
                bangla.day++;
                if(bangla.month==7)
                    printf("%i %s ",bangla.day,month_name(3));
                else if(bangla.month==8)
                    printf("%i %s ",bangla.day,month_name(4));
                else if(bangla.month==9)
                    printf("%i %s ",bangla.day,month_name(5));
                else
                    printf("%i %s ",bangla.day,month_name(6));
            }
            else if(bangla.day>=16)
            {
                bangla.day=bangla.day-16;
                bangla.day++;
                if(bangla.month==7)
                    printf("%i %s ",bangla.day,month_name(4));
                else if(bangla.month==8)
                    printf("%i %s ",bangla.day,month_name(5));
                else if(bangla.month==9)
                    printf("%i %s ",bangla.day,month_name(6));
                else
                    printf("%i %s ",bangla.day,month_name(7));
            }
        }
        printf("%i Bongabdo\n",bangla.year);
    }
    Sleep(7000);
}
