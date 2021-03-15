#include <stdio.h>

void function(int x){
	
	if(x>0){
		function(x--);
		printf("%d \t", x);
		function(x--);
	}
}

int main(){
	int a=4;
	function(a);
	getchar();
	return 0;
}
