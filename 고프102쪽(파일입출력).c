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

void GetRecords(Student r[]); // ���� �Է�(�б�)�ϱ� 
void ShowRecords(Student r[]); // �Է���(����) ������ �� ��� 
void loop(Student r[]); // game++�� ���ڵ� �� �� ���� �߰� but ���� ���������ġ�� ���� �ȵ� 
void Add(Student r[], int n, char *cc, double d, int g); // ���ڵ� �� ���� �߰� 
void SaveRecords(Student r[]); // ���� �����ϱ� 


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
	fp = fopen("C:\\Users\\ASUS\\Desktop\\������α׷���\\record.txt", "r");
	while(fscanf_s(fp,"%d %s %lf %d", &r[count].id, r[count].name, &r[count].ave, &r[count].game) != EOF) {
		count++; // ���� ���� ��+1���� ������ �׷��� Add���� count�״�� ��� 
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
	fp = fopen("C:\\Users\\ASUS\\Desktop\\������α׷���\\record.txt", "w");
	for(i=0; i <count; i++) {
		fprintf(fp, "%d %s %.3f, %d\n", r[i].id,r[i].name, r[i].ave, r[i].game);
	}
	fclose(fp);
}


