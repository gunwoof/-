#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max 10

#pragma pack(push,1) 
typedef struct t_rec {
	int id;
	char name[16];
	double ave;
	int game;
} Student;
#pragma pack(pop)

int count=0;

void GetRecords(Student r[]); // 파일 입력(읽기)하기 
void ShowRecords(Student r[]); // 입력한(읽은) 파일의 값 출력 
void loop(Student r[]); // game++과 레코드 값 한 줄을 추가 but 아직 보조기억장치에 저장 안됨 
void Add(Student r[], int n, char *cc, double d, int g); // 레코드 한 줄을 추가 
void SaveRecords(Student r[]); // 파일 저장하기 


int main(void) {
	Student m[Max];
	GetRecords(m); 
	ShowRecords(m);
	loop(m);
	ShowRecords(m);
	SaveRecords(m);
} 

void GetRecords(Student r[]) {
	int i;
	FILE * fp;
	fp = fopen("C:\\Users\\ASUS\\Desktop\\고급프로그래밍\\record.txt", "r");
	while(fscanf_s(fp,"%d %s %lf %d", &r[count].id, r[count].name, &r[count].ave, &r[count].game) != EOF) {
		count++; // 최종 값의 줄+1까지 증가됨 그래서 Add에서 count그대로 사용 
	}
	fclose(fp);
	return;
}

void ShowRecords(Student r[]) {
	int i;
	for(i=0; i<count; i++) {
		printf("%d %s %.3f %d\n", r[i].id, r[i].name, r[i].ave, r[i].game);
	}
}

void loop(Student r[]) {
	int i;
	int cmd;
	int n, g;
	char cc[10];
	double d;
	
	while(1) {
		printf("> ");
		scanf_s("%d", &cmd);
		switch(cmd) {
			case 0 : scanf_s("%d", &n); r[n].game++; break;
			case 1 : scanf_s("%d %s %lf %d", &n, cc, &d, &g); Add(&r[count], n, cc, d, g); break;
			case -1 : return;
		}	
	}
}

void Add(Student *r, int n, char *cc, double d, int g) {
	r->id = n; r->ave = d; strcpy(r->name, cc); r->game = g;
	count++;
}

void SaveRecords(Student r[]) {
	int i;
	FILE * fp;
	fp = fopen("C:\\Users\\ASUS\\Desktop\\고급프로그래밍\\record.txt", "w");
	for(i=0; i <count; i++) {
		fprintf(fp, "%d %s %.3f, %d\n", r[i].id,r[i].name, r[i].ave, r[i].game);
	}
	fclose(fp);
}


