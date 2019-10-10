#include <stdio.h>
int main(void) {
    float num,sub=0;double sub1=0,sub2=0;
    printf("enter the amount of money=");
    scanf("%f",&num);
    int flag=0;
    int reset=flag;
    if(num>=1)
    {
        for(int num1=1;num1<=num;num1++)
        {
            if(num1%500==0)
                flag++;
        }
        printf("500 taka notes:%i\n",flag);
        sub=num-(flag*500);
        flag=reset;
        for(int num1=1;num1<=sub;num1++)
        {
            if(num1%100==0)
                flag++;
        }
        printf("100 taka notes:%i\n",flag);
        sub=sub-(flag*100);
        if(sub>=50 && sub<100)
        {
            printf("50 taka notes :1\n");
            sub=sub-50;
        }
        else
            printf("50 taka notes :0\n");
        flag=reset;
        for(int num1=1;num1<=sub;num1++)
        {
            if(num1%20==0)
                flag++;
        }
        printf("20 taka notes :%i\n",flag);
        sub=sub-(flag*20);
        flag=reset;
        for(int num1=1;num1<=sub;num1++)
        {
            if(num1%10==0)
                flag++;
        }
        printf("10 taka notes :%i\n",flag);
        sub=sub-(flag*10);
        flag=reset;
        for(int num1=1;num1<=sub;num1++)
        {
            if(num1%5==0)
                flag++;
        }
        printf("5 taka notes  :%i\n",flag);
        sub=sub-(flag*5);
        flag=reset;
        for(int num1=1;num1<=sub;num1++)
        {
            if(num1%2==0)
                flag++;
        }
        printf("2 taka notes  :%i\n",flag);
        sub=sub-(flag*2);
        if(sub>=1)
        {
            printf("1 taka notes  :%i\n",1);
            sub1=sub-1;
        }
        else
        {
            sub1=sub;
            printf("1 taka notes  :0\n");
        }
        if(sub1>=.01 && sub1<=.99)
            //printf("sub=%.2lf",sub1);
        {
            float flag1=0;
            float reset1=flag1;
            for(double num2=.1;num2<=sub1;num2=num2+.1)
            {
                if(num2/.5==1)
                    flag1++;
            }
            printf("50 poisa coin :%.0lf\n",flag1);
            sub1=sub1-(flag1*.5);
            flag1=reset1;
            for(double num3=.1;num3<=sub1;num3=num3+.1)
            {
                if(num3/.20==1||num3/.20==2)
                    flag1++;
            }
            printf("20 poisa coins:%.0lf\n",flag1);
            sub1=sub1-(flag1*.20);
            //sub2=.2f;
            //printf("%lf\n",sub2);
            //printf("%.2lf\n",sub2);
            //
            if(sub1>=.10)
            {
                printf("10 poisa coin :1\n");sub2=sub1-.10;
            }
            else
            {
                sub2=sub1;
                printf("10 poisa coin :0\n");
            }
            //
            //  printf("%lf\n",sub2);
            //  printf("%.2lf\n",sub2);
            // printf("Low ammount   :%.2lf\n",sub2);
            flag1=reset1;
            for(double num5=0.01;num5<=sub2;num5=num5+0.01)
            {
                if(num5/0.05==1)
                    flag1++;
            }
            printf("5 poisa coins :%.0lf\n",flag1);
            sub2=sub2-(flag1*0.05);
            //
            //sub2=.2f;
            printf("%lf\n",sub2);
            printf("%.2lf\n",sub2);
            //
            /**if(sub2>=0.05)
             {
             printf("5 poisa coin  :1\n");
             sub2=sub2-.05;
             }
             else
             printf("5 poisa coin  :0\n");*/
            
            flag1=reset1;
            for(double num4=0.01;num4<=sub2;num4=num4+0.01)
            {
                if(num4/0.02==1 || num4/0.02==2)
                    flag1++;
            }
            printf("2 poisa coins :%.0lf\n",flag1);
            sub2=sub2-(flag1*0.02);
            //printf("%.2lf\n",sub2);
            //sub2=.2f;
            //   printf("%lf\n",sub2);
            //  printf("%.2lf\n",sub2);
            //
            if(sub2<0.02&&sub2<0)
            {
                printf("1 poisa coin  :1\n");
            }
            else
                printf("1 poisa coin  :0\n");
        }
    }
    else
        printf("Invalid selection!");
    return 0;
}
