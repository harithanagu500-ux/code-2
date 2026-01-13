#include<stdio.h>
int main(){
int n,q,rem,facct=1,i,result=0;
printf("please enter a number:");
scanf("%d",&n);
q=n;
while(q!=0)
{
rem=q%10;
for(i=1;i<=rem;i++)
{
fact=fact*i;
}
result=result+fact;
fact=i;
q=q/10;
\}
if(result==n)
printf("%d is a strong number",n);
else
printf("%d is not a strong number",n);
return 0;
}