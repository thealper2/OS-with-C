#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	char ad[100];
	printf("Dosya Adi:\t");
	gets(ad);

	printf("-----------Dosyanin Erisilebilirligi-----------");
	int durum = access(ad, F_OK);
	if(durum == -1) {
		printf("Dosya bulunamadi.");
	} else {
		printf("Dosya bulundu.");
		
		durum = access(ad, R_OK);
		if(durum == -1) {
			printf("Dosyanin okuma erisimi yok.");
		} else {
			printf("Dosya okunabilir.");
		}
		
		durum = access(ad, W_OK);
		if(durum == -1) {
			printf("Dosyaya yazma erisimi yok.");
		} else {
			printf("Dosya yazilabilir.");
		}
		
		durum = access(ad, X_OK);
		if(durum == -1) {
			printf("Dosyaya calistirma erisimi yok.");
		} else {
			printf("Dosya calistirilabilir.");
		}
	}
}