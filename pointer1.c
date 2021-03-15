#include <stdio.h>

int main(){
	
	int i = 0 , k;
	char *p;
	
	p = (char*)malloc(sizeof(char));
	
	while(1){
		*(p+i) = getchar();
		if(*(p+i) == 13)
			break;
		putchar('*');
		i++ ;
		p = realloc(p,(i+1)*sizeof(char));
		
	}
	
	putchar('\n');
	for(k=0; k<i; k++){
		putchar(*(p+k));
	}
}
