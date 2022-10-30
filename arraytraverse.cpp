#include<stdio.h>

int main()
{



int a[50],size,i;
printf("enter the size of an array:");
scanf("%d",&size);
printf("enter the elements of the array:\n");
for(i=0;i<size;i++)
{
	scanf("%d",&a[i]);
}
printf("elements in the array are:");
for(i=0;i<size;i++)
{
	printf("%d",a[i]);
}
return 0;
}