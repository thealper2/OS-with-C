#include <stdio.h>
#include <errno.h>

int main() {
	char ad[100];
	printf("Yeni dizin adi: ");
	gets(ad);
	
	int a = mkdir(ad, 0751);
	if(a == 0) {
		puts("Dizin basariyla olusturuldu.");
	} else {
		puts("Hata : %s", strerror(errno));
	}
}