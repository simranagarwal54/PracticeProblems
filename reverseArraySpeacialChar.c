#include <stdio.h>
#include <string.h>

int main() {

    int t,len,j,i;
    scanf("%d",&t);
    while(t>0){
        char s[100];
        scanf("%s",s);
        len=strlen(s);
        j=len-1;
        i=0;
        while(i<j &&(i<len && j>=0)){
	        
        while(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')))
            i=i+1;
        while(!((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z')))
            j=j-1;
            
        if(i<j){
             char temp = s[j];
	            s[j] = s[i];
	            s[i] = temp;
	           i++;
	           j--;
        }
            
        }
        t=t-1;
        printf("%s\n",s);
    }
   
	return 0;
}
