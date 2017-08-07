#include <stdio.h>

int main() {
	int t,a[4][4];
	scanf("%d",&t);
	while(t--){
	    int i,j;
	    int ans[16];
	    for(i=0;i<4;i++){
	        for(j=0;j<4;j++){
	            scanf("%d",&a[i][j]);
	        }
	    }
	    int k=0,l=0,m=4,n=4;
	    /*k=starting row, l=starting coumn, m= ending row, n=ending column*/
	    while(k<m && l<n){
	        for(i=l;i<n;i++)
	            printf("%d ",a[k][i]);
	        k++;
	        for(i=k;i<m;i++)
	            printf("%d ",a[i][n-1]);
	        n--;
	        if(k<m){
	        for(i=n-1;i>=l;i--)
	            printf("%d ", a[m-1][i]);
	        m--;
	        }
	        if(l<n){
	            for(i=m-1;i>=k;i--)
	                printf("%d ", a[i][l]);
	           l++;
	        }
	    }
	    printf("\n");
	    
	}
	return 0;
}
