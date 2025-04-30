#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int width, height, area;
	printf("masukkan panjang : ");
	scanf("%d",&width);
	
	printf("masukkan lebar : ");
	scanf("%d",&height);
	
	area = width*height;
	
	printf("jadi luasnya : %d", area);
	printf("\n");
}
