#include<stdio.h>

int main () {
	
	char ch;
	
	
	printf("Enter value :");
	scanf("%c",&ch);
	
	if (ch>='A' && ch<='Z'){
		
		ch+=32;
	}
	
	printf("%c",ch);
	return 0;
}
