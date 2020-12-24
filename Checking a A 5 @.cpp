#include <stdio.h>
int main(){
	
   	char c;
	printf("Enter character:");
   	scanf("%c", &c);
   	if(c>='A' && c<='Z'){
   		printf("Entered character is a upper case letter");
	}
	else if(c>='a' && c<='z'){
		printf("Entered character is a lower case letter");
	}
	else if(c>='0' && c<='9'){
		printf("Enter character is a number");
	}
	else{
		printf("Entered character is a special symbol");
	}
	return 0;
}
