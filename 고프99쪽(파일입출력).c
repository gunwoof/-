#include <stdio.h>

int main_FileOperation1(void) {
	int i;
	FILE * fp;
	
	// "haha.txt"������ fscanf�� ���(����) 
	fp = fopen("C:\\Users\\ASUS\\Desktop\\������α׷���\\haha.txt", "w");
	for(i=0; i<10; i++) {
		fprintf(fp,"%d %d\n", i, i*i);
	}
	fclose(fp);
}
