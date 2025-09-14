#include<stdio.h>
int main()
{
printf("Bhavana\n");
int np, nr, temp, temp1;
printf("enter number of resources: ");
scanf("%d", &nr);
printf("enter number of processs: ");
scanf("%d", &np);
int rag[nr+np][nr+np];
int i, j;
for(i=0;i<np+nr;i++)
{
for(j=0; j<np+nr;j++)
{
rag[i][j]=0;
}
}
for(i=0;i<np;i++)
{
printf("enter the number of resources process %d, holding", i);
scanf("%d", &temp);
for(j=0; j<temp;j++)
{
printf("enter the ressorce number process %d holding: ", j);
scanf("%d", &temp1);
rag[np+temp1][i]=1;
}
printf("enter the number of resources process %d, requesting", i);
scanf("%d", &temp);
for(j=0; j<temp;j++)
{
printf("enter the ressorce number process %d requesting: ", i);
scanf("%d", &temp1);
rag[i][np+temp1]=1;
}
}
for(i=0;i<np+nr;i++)
{
for(j=0; j<np+nr;j++)
{
}
printf("%d ", rag[i][j]);
printf("\n ");
}
return 0;
}
