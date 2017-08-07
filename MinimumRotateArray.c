#include <stdio.h>
int findmid(int a[],int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(high<low)
            return a[0];
        if(high==low)
            return a[low];
        if((mid<high) && (a[mid+1]<a[mid]))
            return a[mid+1];
        if((mid>low) && (a[mid-1]>a[mid]))
            return a[mid];
        if(a[high]>a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}
int main() {
    int test,i,j,k,n;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        int res=findmid(a,0,n-1);
        printf("%d",res);
        printf("\n");
    }
    return 0;
}
