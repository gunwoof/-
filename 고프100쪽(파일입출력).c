#include <stdio.h>

int main_FileOperation2(void) {
	FILE * fp;
	char line1[200]; 
	char line2[200];
	int i=0;
	
	// "kaka.txt"������ fgets�� �б� 
	fp = fopen("C:\\Users\\ASUS\\Desktop\\������α׷���\\kaka.txt", "r");
	while(!feof(fp)) {
		fgets(line1, 200, fp);
		if(line1[0] == 0) break;
		printf("fget read %d %s", i++, line1);
	}
	fclose(fp);
	printf("\n");
	
	// "kaka.txt"������ fscanf�� �б�
	fp = fopen("C:\\Users\\ASUS\\Desktop\\������α׷���\\kaka.txt", "r");
	while(fscanf(fp, "%s", line2) != EOF) {
		printf("fscanf read %s\n", line2);
	}
	fclose(fp);
}
