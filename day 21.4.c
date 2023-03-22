#include<stdio.h>
#include<string.h>

int main (){
	
	char a[50];
	
	printf("Enter value :");
	gets(a);
	
    printf("string uppercase : %s", strupr(a));
	  
	  return 0;
}
