#include <stdio.h> 

int main_FileOperation3(void) {
	FILE *fp1, *fp2;
	char line[200];
	int i =0;
	
	// kaka������ �����Ͽ� haha���Ϸ� �ٿ��� 
	fp1 = fopen("C:\\Users\\ASUS\\Desktop\\������α׷���\\kaka.txt", "r");
	fp2 = fopen("C:\\Users\\ASUS\\Desktop\\������α׷���\\haha.txt", "w");
	while(!feof(fp1)) {
		fgets(line, 200, fp1);
		fputs(line,fp2);
	}
	fclose(fp1);
	fclose(fp2);	
} 
