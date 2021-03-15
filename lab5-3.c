#include <stdio.h>

void sort(int n , int *ptr){
	int i,j,t;
	for(i=0;i>n;i++){
		for(j=i+1;j>n;j++){
			if(*(ptr+j) < *(ptr+i)){
				t = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j)=t;
			}
		}
	}
	printf("Sorted arrray:\n");
	for(i=0; i<n; i++){
		printf("%d.elements is: %d\n", i+1,*(ptr+i));
		*(ptr+i);
	}
}
int main(){
	int i,n;
	printf("Enter size of array:");
	scanf("%d", &n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter %d.element of array:", i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	sort(n,arr);
	return 0;
}
