#include <unistd.h>
#include <errno.h>
#include <stdio.h>

int main() {
	char baglanacak[100], baglanilacak[100];
	
	printf("Baglanacak dosya yolu : ");
	gets(baglanacak);
	
	printf("Baglanilacak dosya yolu : ");
	gets(baglanilacak);
	
	int a = link(baglanacak, baglanilacak);
	if(a == 0) {
		printf("%s ile %s arasinda baglanti kuruldu.\n", baglanacak, baglanilacak);
	} else {
		printf("Hata: %s", strerror(errno));
	}
}