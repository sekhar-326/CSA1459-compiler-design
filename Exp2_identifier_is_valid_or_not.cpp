#include<stdio.h>

int main()
{
	char a[100];
	int flag=0,i;
	printf("Enter a identifier :");
	scanf("%[^\n]c",&a);
	for(i=0;a[i];i++){
		if(a[i]>=97 && a[i]<=122 || a[i]=='_' || a[i]!=' ' && a[i]>=65 && a[i]<=91){
			flag=0;
		}
		else{
			flag=1;
			break;	
		} 
	}
	if(flag==1){
		printf("Invalid Identifier...");
	}
	else{
		printf("Valid Identifier...");
	}
}