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
Student *FindList(char *s); // name�� �� �� name�� ����ִ� ����Ʈ�� ã�� �Լ� 
int *FindId(char *s); // name�� �� �� name�� id�� ã�� �Լ�
void Insert(char *exist/*���� �ϰ� ���� ���� �� ����Ʈ name*/, int i, char *s, double a, int g); // ���Ḯ��Ʈ �߰��� ���ο� ����Ʈ ����
void FindLast(); // ������ ����Ʈ���� name�� ��� 
void FreeAll(); // ��� ���Ḯ��Ʈ�� free�Ѵ� 


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

void Insert(char *exist/*���� �ϰ� ���� ���� �� ����Ʈ name*/, int i, char *s, double a, int g) {
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
