#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
	char str[10000];
	int n; 
	cout<<"请输入情报："<<endl; 
	gets(str); 
	cout<<"请输入密文向右移动的长度（1-26）：" << endl;
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










