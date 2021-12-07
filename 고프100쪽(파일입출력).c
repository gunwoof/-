#include <stdio.h>

int main_FileOperation2(void) {
	FILE * fp;
	char line1[200]; 
	char line2[200];
	int i=0;
	
	// "kaka.txt"파일을 fgets로 읽기 
	fp = fopen("C:\\Users\\ASUS\\Desktop\\고급프로그래밍\\kaka.txt", "r");
	while(!feof(fp)) {
		fgets(line1, 200, fp);
		if(line1[0] == 0) break;
		printf("fget read %d %s", i++, line1);
	}
	fclose(fp);
	printf("\n");
	
	// "kaka.txt"파일을 fscanf로 읽기
	fp = fopen("C:\\Users\\ASUS\\Desktop\\고급프로그래밍\\kaka.txt", "r");
	while(fscanf(fp, "%s", line2) != EOF) {
		printf("fscanf read %s\n", line2);
	}
	fclose(fp);
}
