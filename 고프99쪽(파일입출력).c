#include <stdio.h>

int main_FileOperation1(void) {
	int i;
	FILE * fp;
	
	// "haha.txt"파일을 fscanf로 출력(쓰기) 
	fp = fopen("C:\\Users\\ASUS\\Desktop\\고급프로그래밍\\haha.txt", "w");
	for(i=0; i<10; i++) {
		fprintf(fp,"%d %d\n", i, i*i);
	}
	fclose(fp);
}
