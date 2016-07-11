#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
printf("yr=",yr);
scanf("%d",&yr);
if(yr%4==0)
{
printf("IT IS A LEAP YEAR",yr);
}
else if(yr%400==0)
{
printf("It is a centurian year",yr);
}
else
printf("It is not a leap year");
getch();
}
