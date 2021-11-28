#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack(push,1) 
typedef struct t_rec {int id; char name[16]; double ave; int game; struct t_rec *next;
} Student;
#pragma pack(pop)

Student *head = NULL;

void ShowList(); // 연결리스트 모두 출력 
void Append(int i, char *s, double a, int g); // 연결리스트 맨 끝에 새로울 리스트 추가하기 
Student *FindList(char *s); // name을 알 때 name이 들어있는 리스트를 찾는 함수 
int *FindId(char *s); // name을 알 때 name의 id를 찾는 함수
void Insert(char *exist/*삽입 하고 싶은 곳의 전 리스트 name*/, int i, char *s, double a, int g); // 연결리스트 중간에 새로운 리스트 삽입
void FindLast(); // 마지막 리스트에서 name을 출력 
void FreeAll(); // 모든 연결리스트를 free한다 


int main(void) {
	Student *m;
	Append(1, "TimDuncon", 0.986, 98);
	Append(4, "ToyParker", 0.567, 43);
	Append(3, "ManuGinobili", 0.876, 43); 
	Append(8, "DemarDrozen", 0.365, 89); 
	Append(5, "BrynFores", 0.333, 38);
	Append(7, "MarcoBelinelli", 0.756, 67);
	ShowList();
	
	m = FindList("ToyParker");
	printf("%4d %16s %4.3f %4d\n", m->id, m->name, m->ave, m->game);
	
	Insert("DemarDrozen", 11, "JakobPoeltl", 0.333, 55);
	Insert("BrynFores", 22, "DejonteMurray", 0.777, 66);
	ShowList();
	FreeAll();
	
	
}

Student *FindList(char *s) {
	Student *p;
	p = head;
	while(p != NULL) {
		if(! strcmp(p->name,s))
			return p;
		p = p->next;
	}
	return NULL;
}

int *FindId(char *s) {
	Student *p;
	p = head;
	while(p != NULL) {
		if(! strcmp(p->name,s))
			return (p->id);
		p = p->next;
	} 
	return NULL;
}

void Insert(char *exist/*삽입 하고 싶은 곳의 전 리스트 name*/, int i, char *s, double a, int g) {
	Student *p, *q; 
	p = FindList(exist);
	if(p != NULL) {
		q = p->next;
		p->next = (Student *) malloc(sizeof(Student));
		p = p->next;
		p->id = i; strcpy(p->name,s); p->ave = a; p->game = g;
		p->next = q;
	}
	else Append(i,s,a,g);
}

void FindLast() {
	Student *p;
	p = head;
	if(p==NULL)
		return;
	while(p != NULL) 
		p = p->next;
	printf("%s", p->name);
}

void FreeAll() {
	Student *p, *q;
	p = head;
	while(p != NULL) {
		q = p->next;
		free(p);
		p = q;
	} 
	head = NULL;
}
