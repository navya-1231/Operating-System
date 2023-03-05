#include<stdio.h>
int main(){
    int n,i,bt[20],wt[20],j,tat[20];
    float avwt=0,avtat=0,totawt=0,tottat=0;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("Enter burst time of the process\n");
    for(i=0;i<n;i++){
        printf("p%d",i);
        scanf("%d",&bt[i]);
    }
    printf("\nPROCESS\t\tBURST TIME\t\tWAITING TIME\t\tTURNAROUND TIME");
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++){
            wt[i]+=bt[j];
        }
    }
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",i,bt[i],wt[i],tat[i]);
    }
    totawt=avwt/n;
    tottat=avtat/n;

    printf("avg waiting time %f",totawt);
    printf("avr turn aroundtimr %f",tottat);
    
    return 0;
}