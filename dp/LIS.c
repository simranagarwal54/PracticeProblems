// # Given a sequence, find the length of the longest increasing subsequence from a given sequence .
// # The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest
// # to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.
// # 
// # Note: Duplicate numbers are not counted as increasing subsequence.
// # 
// # For example:
// #  length of LIS for 
// # { 10, 22, 9, 33, 21, 50, 41, 60, 80 } is 6 and LIS is {10, 22, 33, 50, 60, 80}.

#include <stdio.h>
#include <stdlib.h>
#define max(x,y) x>y?x:y;
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int *dp=calloc(n,sizeof(int));
        int *a=calloc(n,sizeof(int));
        int i,j;
        int maxl=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            dp[i]=1;
            
            for(j=i-1;j>=0;j--){
                if(a[i]>a[j])
                    dp[i]=max(dp[i],dp[j]+1);
            }
            maxl=max(maxl,dp[i]);
        }
        printf("%d\n",maxl);
    }
	return 0;
}