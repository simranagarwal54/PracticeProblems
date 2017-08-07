#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n,max;
        int sum=0;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        int ch=1;
        int count=0;
        int negmax=a[0];
        max=0;
        for(i=0;i<n;i++){
            sum+=a[i];
            if(a[i]<0){
                count++;
                if(a[i]>negmax)
                    negmax=a[i];
            }
            if(sum<0)
            sum=0;
            if(sum>max )
             max=sum;
             
        }
        if(count == n)
       printf("%d\n",negmax);
       else
       printf("%d\n",max);
    }
	return 0;
}
