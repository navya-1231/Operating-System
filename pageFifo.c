#include<stdio.h>
int main(){
    int i,j,k,f,pf=0,count=0,rs[20],m[20],n;
    printf("Enter the length of reference string:");
    scanf("%d",&n);
    printf("Enter the reference string");
    for(i=0;i<n;i++)
        scanf("%d",&rs[i]);
    
    printf("Enter the no.frames ");
    scanf("%d",&f);

    for(i=0;i<f;i++){
        m[i]=-1;
        //printf(" ");
    }
    printf("The page replacement process is\n");
    for(i=0;i<n;i++){
        for(k=0;k<f;k++){
            if(m[k]==rs[i])
            break;
        }
        if(k==f){
            m[count++]=rs[i];
            pf++;
        }
        for(j=0;j<f;j++)
            printf("  %d",m[j]);
       /* if(k==f)
        printf(" ");*/
        printf("\n");
        if(count==f)
        count=0;
    }
    printf("\npage fault %d",pf);
}