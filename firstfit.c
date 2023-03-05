#include<stdio.h>
#define max 25
void main(){
int bsize[10],psize[10],bno,pno,flag[10],allocation[10],i,j;
for(i=0;i<10;i++){
    flag[i]=0;
    allocation[i]=-1;
}
printf("\nEnter the number of blocks:");
scanf("%d",&bno);
printf("\nEnter the size of the blocks:-\n");
for(i=0;i<bno;i++){
    scanf("%d",&bsize[i]);
}
printf("Enter the no.of process");
scanf("%d",&pno);
printf("\nEnter the size of the process:-\n");
for(i=0;i<pno;i++){
    scanf("%d",&psize[i]);
}

for(i=0;i<pno;i++){
for(j=0;j<=bno;j++){
if(bsize[j]>=psize[i]){
    allocation[i]=j;
    bsize[j]=psize[i];
    
    break;
}
}
}
printf("\nProcessno:\tProcess size :\tBlock_no:");
for(i=0;i<pno;i++){
printf("\n%d\t\t%d\t\t",i+1,psize[i]);
if(allocation[i]!=-1)
printf("%d",allocation[i]+1);
else
printf("not allocated");

}
}