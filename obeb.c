#include <stdio.h>
#include <conio.h>
 
int obeb(int, int);

 
int main() {
	int sayi1,sayi2;
		printf ("1.Sayiyi giriniz ");
	    scanf("%d", &sayi1);
	    printf ("2.Sayiyi giriniz ");
	    scanf("%d", &sayi2);

   
    int sonuc = obeb(sayi1, sayi2);
    printf("obeb(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}

