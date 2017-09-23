/*Given an expression string exp, examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])” */

#include <iostream>
#include<string.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    int n=a.length();
	    int count=0;
	    for(int i=0;i<=n-1;i++){
	        if(a[i]=='{' || a[i]=='(' || a[i]=='['){
	            for(int j=i+1;j<=n-1;j++){
	                if(a[i]=='{' && a[j]=='}'){
	                    count=count+2;
	                    break;
	                }
	               else if(a[i]=='(' && a[j]==')'){
	                    count=count+2;
	                    break;
	               }
	               else if(a[i]=='[' && a[j]==']'){
	                   count=count+2;
	                   break;
	               }
	            }
	        }
	        
	    }
	    if(count==n)
	        cout<<"balanced"<<endl;
	   else
	        cout<<"not balanced"<<endl;
	    
	}
	return 0;
}
\
 
