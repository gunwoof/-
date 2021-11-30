#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack(push,1) 
typedef struct t_rec {int id; char name[16]; double ave; int game; struct t_rec *next;
} Student;
#pragma pack(pop)

Student *head = NULL;

void ShowList(); // ���Ḯ��Ʈ ��� ��� 
void Append(int i, char *s, double a, int g); // ���Ḯ��Ʈ �� ���� ���ο� ����Ʈ �߰��ϱ� 
void Push(int i, char *s, double a, int g); // ���Ḯ��Ʈ �� ó���� ���ο� ����Ʈ �߰��ϱ� 
void FreeAll();

int main_linkedlist4(void) {
	// ���Ḯ��Ʈ ����� ��� 
	Append(1, "TimDuncon", 0.986, 98);
	Append(4, "ToyParker", 0.567, 43);
	Append(3, "ManuGinobili", 0.876, 43); 
	ShowList();
	
	// ������ ���Ḯ��Ʈ �տ� ���ο� ����Ʈ �߰��Ͽ� ��� 
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
	if(head == NULL) /*����Ʈ�� ���� ��*/ {
		head = (Student *) malloc(sizeof(Student));
		head->id = i; strcpy(head->name,s); head->ave = a; head->game = g;
		head->next = NULL;
	}
	else /*�̹� ������� ����Ʈ�� ���� ��*/ {
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
	p = (Student *) malloc(sizeof(Student)); // ���ο� ����Ʈ�� �ּ� 
	q = head; // ���� ���Ḯ��Ʈ�� ù ����Ʈ �ּ� 
	p->id = i; strcpy(p->name,s); p->ave = a; p->game = g;
	p->next = q;
	head = p;	
}


