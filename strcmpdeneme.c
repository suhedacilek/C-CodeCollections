#include <stdio.h>
#include <string.h>

char *strcpy(char *str1, char *str2){
	
	while(*str2++){
		*str1++ = *str2++;
		
	}
	return str1;
}

int main(){
	char src[40];
	char dest[100];
	
	strcpy(src,"This is tutarial point");
	strcpy(dest,src);
	printf("Final string is : %s\n", dest);
	return 0;
}
