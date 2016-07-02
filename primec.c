#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,j,flag,count=0;
clrscr();
printf("Enter the number to count the prime numbers\n");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
//i=9;
flag=0;
for(j=2;j<i;j++)
{
k=i%j;
//printf("j=%d,k=%d",j,k);
if(k==0)
{
//printf("\nenter");
flag=1;
break;
}

}
//printf("\ncount=%d,f=%d",count,flag);
if(flag==0)
{
//printf("%d",i);
count++;
}
}
printf("count=%d",count);
getch();
}

