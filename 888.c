// sum upto n
#include<stdio.h>
int main(){
int sum=0,i=1,n;
printf("Enter the number:\n");
scanf("%d",&n);
	while(i<=n)
	{
	sum+=i;
	i++;
	}
printf("Sum is :%d\n",sum);
return 0;
}
