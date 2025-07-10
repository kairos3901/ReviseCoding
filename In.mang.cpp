#include<stdio.h>
#include <stdlib.h>
void main(void)
{
int n, i,max;
int *p ;
do {
printf(“Nhap n: “);
scanf(“%d”,&n) ;
}while (n<=0);
p = (int *)malloc (n*sizeof(int));
if (p!=NULL)
{
for (i=0;i<n;i++)
{
printf(“\nnhap phan tu thu %d: “,i+1);
scanf(“%d”,(p+i));
}
max = *p ;
for (i=1;i<n;i++)
{
if(max<*(p+i))
max = *(p+i);
}
printf(“max = %d”,max) ;
}
free(p);
}