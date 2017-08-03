#include<stdio.h>

void maxMin(int arr[],int n)
{
    for(int i=0;i<n;i++)         //defining window size 
    {
        int max=0;
        for(int j=0;j<n-i;j++)  //number of pairs
        {
            int min=arr[j];
            for(int k=j;k<i+j+1;k++)     //making pairs according to window size
            {
                if(min>arr[k])
                    min=arr[k];
            }
            if(max<min)
                max=min;
        }
        printf("%d ",max);
    }
    printf("\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        
        int arr[n];
        
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
            
        maxMin(arr,n);
    }
	return 0;
}
