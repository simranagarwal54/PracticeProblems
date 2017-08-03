#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,i,j,k,count=0;
        scanf("%d %d",&n,&x);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        for(i=0;i<n;i++){
            k=x-a[i];
            for(j=i+1;j<n;j++){
                if(a[j]==k)
                    count++;
                
            }
        }
        if(count==0)
            printf("No");
        else
            printf("Yes");
        printf("\n");
    }
    return 0;
}
