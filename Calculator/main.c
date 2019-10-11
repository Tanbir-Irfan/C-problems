#include<stdio.h>
int main()
{
    float sum=0;
    char ch1;char ch;
    float num1,num2;
    int  num3,num4;
    do{
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
printf("                           ===============================\n");if(ch=='q' || ch=='Q')
printf("                           |  Thank You!!                |\n");else if(ch=='c' || ch=='C')
printf("                           |                             |\n");else if(ch1=='+')
printf("                           | %.3f                        |\n",sum);else if(ch1=='-')
printf("                           | %.3f                        |\n",sum);else if(ch1=='*')
printf("                           | %.3f                        |\n",sum);else if(ch1=='/')
printf("                                               | %.3f                      |\n",sum);else if(ch1=='%')
printf("                           | %.0f                           |\n",sum);else
printf("                           | %.0f                           |\n",sum);
printf("                           ===============================\n");
printf("                           |   C  |  ( )  |   % %   |   /  |\n");
printf("                           |------|-------|-------|------|\n");
printf("                           |   7  |   8   |   9   |   *  |\n");
printf("                           |------|-------|-------|------|\n");
printf("                           |   4  |   5   |   6   |   -  |\n");
printf("                           |------|-------|-------|------|\n");
printf("                           |   1  |   2   |   3   |   +  |\n");
printf("                           |------|-------|-------|------|\n");
printf("                           |  +/- |   0   |   .   |   =  |\n");
printf("                           ===============================\n");
printf("\n");
printf("                                      E: Execute:\n");
printf("                                      C: Clear:\n");
printf("                                      Q: Quit:\n\n");
if(ch=='q' || ch=='Q'){break;}
if(ch1=='+' || ch=='c' || ch=='C')
{if(ch=='c' || ch=='C')printf("");else printf("                                      %.2f + %.2f =\n",num1,num2);}
else if(ch1=='-' || ch=='c' || ch=='C')
{if(ch=='c' || ch=='C')printf("");else printf("                                      %.2f - %.2f =\n",num1,num2);}
else if(ch1=='*' || ch=='c' || ch=='C')
{if(ch=='c' || ch=='C')printf("");else printf("                                      %.2f * %.2f =\n",num1,num2);}
else if(ch1=='/' || ch=='c' || ch=='C')
{if(ch=='c' || ch=='C')printf("");else printf("                                      %.2f / %.2f =\n",num1,num2);}
else if(ch1=='%' || ch=='c' || ch=='C')
{if(ch=='c' || ch=='C')printf("");else printf("                                      %i  %% %i   =\n",num3,num4);}
        
printf("                                      Selection=");
scanf(" %c",&ch);
if(ch=='E' || ch=='e')
{
printf("                                      Enter an oparator=(+,-,*,/,%%)=");
scanf(" %c",&ch1);
if(ch1=='%')          {
printf("                                      Enter the first number=");
scanf("%i",&num3);
printf("                                      Enter the second  number=");
scanf("%i",&num4);sum=0;sum=num3%num4;
            }
            
else if(ch1=='+' || ch1=='-' || ch1=='*' || ch1=='/')      {
printf("                                      Enter the first number=");
scanf("%f",&num1);
printf("                                      Enter the second  number=");
scanf("%f",&num2);
                
switch(ch1)
                {
                    case '+':{sum=0;sum=num1+num2;}break;
                    case '-':{sum=0;sum=num1-num2;}break;
                    case '*':{sum=0;sum=num1*num2;}break;
                    case '/':{sum=0;sum=num1/num2;}break;
                }
            }
            
        }
else if(ch=='c' || ch=='C')
continue;
else if(ch=='q' || ch=='Q')
continue;
printf("\n");
}while(ch1=='+' || ch1=='-' ||  ch1=='*' || ch1=='/' ||  ch1=='%' || ch=='c' || ch=='C' || ch=='q' || ch=='Q');
return 0;
}
