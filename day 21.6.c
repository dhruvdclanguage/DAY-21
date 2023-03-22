#include<stdio.h>
#include<string.h>

int main (){
	
	char a[50];
	int i;
	
	    printf("Enter Value : ");
    	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		
		if(a[i]>='A'&&a[i]<='Z'){
		  a[i] += 32 ;
		}
		else{
		  a[i] -= 32 ;
		}
		
	}
	   printf("\n%s",a);
	
	return 0 ;
}
