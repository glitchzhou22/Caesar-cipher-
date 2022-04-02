#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	char str[10000];
	gets(str);	
	for(int i=0;i < strlen(str);++i){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			str[i] += 3;
		}
		if(str[i]>='[' && str[i]<=']' || str[i]>='{' && str[i]<='}')
		{
			str[i] -= 26;
		}
	}
	puts(str);
	return 0;
 } 
