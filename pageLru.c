#include<stdio.h>
int main(){
    int i,j,k,count[10],rs[20],m[20],n,next,flag[20],min,f,pf=0;
    printf("Enter the length of reference string:");
    scanf("%d",&n);
    printf("Enter the reference string");
    for(i=0;i<n;i++){
        scanf("%d",&rs[i]);
        flag[i]=0;
    }
    printf("Enter the no.frames ");
    scanf("%d",&f);
    for(i=0;i<f;i++){
        count[i]=0;
        m[i]=-1;
    }
    printf("page replacement process is \n");
     for(i=0;i<n;i++)
     {
        for(j=0;j<f;j++)
        {
            if(m[j]==rs[i])
            {
                flag[i]=1;
                count[j]=next;
                next++;
            }
        }
        if(flag[i]==0)
        {
            if(i<f)
            {
                m[i]=rs[i];
                count[i]=next;
                next++;
            }
            else
            {
                min=0;
                for(j=1;j<f;j++)
                if(count[min]>count[j]) 
                min =j;
                m[min]=rs[i];
                count[min]=next;
                next++;
            }
            pf++;
        }
        for(j=0;j<f;j++)
        printf("%d\t",m[j]);

        if(flag[i]==0)
        printf(" ");
        printf("\n");
     }
     printf("page fault are %d",pf);
}
