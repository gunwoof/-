#include <stdio.h> 

int main_FileOperation3(void) {
	FILE *fp1, *fp2;
	char line[200];
	int i =0;
	
	// kaka파일을 복사하여 haha파일로 붙여라 
	fp1 = fopen("C:\\Users\\ASUS\\Desktop\\고급프로그래밍\\kaka.txt", "r");
	fp2 = fopen("C:\\Users\\ASUS\\Desktop\\고급프로그래밍\\haha.txt", "w");
	while(!feof(fp1)) {
		fgets(line, 200, fp1);
		fputs(line,fp2);
	}
	fclose(fp1);
	fclose(fp2);	
} 
