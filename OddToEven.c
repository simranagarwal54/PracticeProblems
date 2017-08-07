#include <stdio.h>

int main() {
    int t,i,swap_index;
    scanf("%d",&t);
    while(t--){
        char str[100];
        int len;
        char oddchar,temp;
        scanf("%s",str);
        
        for( i=0;str[i]!='\0';++i);
        len=i;
        oddchar=str[len-1];
        
        swap_index=-1;
        for(i=0;i<len;i++){
            if(str[i]%2==0){
                swap_index=i;
                if(str[i]<oddchar)
                    break;
            }
        }
        if(swap_index!=-1){
            temp=str[swap_index];
            str[swap_index]=oddchar;
            str[len-1]=temp;
            
        }
        printf("%s\n",str);
        
    }
    return 0;
}
