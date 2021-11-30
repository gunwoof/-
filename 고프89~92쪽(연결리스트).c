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
void Push(int i, char *s, double a, int g); // 연결리스트 맨 처음에 새로운 리스트 추가하기 
void FreeAll();

int main_linkedlist4(void) {
	// 연결리스트 만들어 출력 
	Append(1, "TimDuncon", 0.986, 98);
	Append(4, "ToyParker", 0.567, 43);
	Append(3, "ManuGinobili", 0.876, 43); 
	ShowList();
	
	// 기존의 연결리스트 앞에 새로운 리스트 추가하여 출력 
	Push(10, "TreyLyles", 0.555, 54);
	ShowList();
	
	
} 

void ShowList() {
	Student *p;
	p = head;
	while(p != NULL) {
		printf("%4d %16s %4.3f %4d\n",p->id, p->name, p->ave, p->game);
		p = p->next;
	}
} 

void Append(int i, char *s, double a, int g) {
	Student *p;
	if(head == NULL) /*리스트가 없을 때*/ {
		head = (Student *) malloc(sizeof(Student));
		head->id = i; strcpy(head->name,s); head->ave = a; head->game = g;
		head->next = NULL;
	}
	else /*이미 만들어진 리스트가 있을 때*/ {
		p = head;
		while(p->next != NULL) {
			p = p->next;
		}
		p->next = (Student *) malloc(sizeof(Student));
		p = p->next;
		p->id = i; strcpy(p->name,s); p->ave = a; p->game = g;
		p->next = NULL;
	}
}

void Push(int i, char *s, double a, int g) {
	Student *p, *q;
	p = (Student *) malloc(sizeof(Student)); // 새로운 리스트의 주소 
	q = head; // 본래 연결리스트의 첫 리스트 주소 
	p->id = i; strcpy(p->name,s); p->ave = a; p->game = g;
	p->next = q;
	head = p;	
}


