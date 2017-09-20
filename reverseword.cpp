//Given a String of length N reverse the words in it. Words are separated by dots.

#include <iostream>
using namespace std;

int main() {
	int t,i,j;
	cin>>t;
	while(t--){
	  string s;
	  string sub;
	  cin>>s;
	  int n;
	  n=s.length();
	  for(i=n-1;i>=0;i--){
	      if(s[i]=='.'){
	         j=s.find(".",i+1);
	           if(j==-1) //last word
	         sub=s.substr(i+1);
	         else
	            sub=sub + "." + s.substr(i+1,j-i-1);
	        }
	  }//all except first word
	  j=s.find('.');
	  if(j!=-1)
	    sub=sub + "." + s.substr(0,j);
	   else
	   sub=s;
	   cout<<sub<<endl;
	}
	return 0;
}
