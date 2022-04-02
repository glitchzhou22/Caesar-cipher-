#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char str[10000];
	int n; 
	gets(str); 
	cin>>n;
	for(int i=0;i<strlen(str);++i){
		if(str[i]>='a'&&str[i]<='z'-n||str[i]>='A'&&str[i]<='Z'-n)
		{
			str[i] += n;
		}
		else if(str[i]>'z'-n&&str[i]<='z'||str[i]>'Z'-n&&str[i]<='Z')
		{
			str[i] +=n-26;
		}
	}
	puts(str);
	return 0;
}










