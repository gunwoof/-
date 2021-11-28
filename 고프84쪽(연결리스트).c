#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(push,1) 
typedef struct t_rec {int id; char name[16]; double ave; int game; struct t_rec *next;
} Student;
#pragma pack(pop)

void ShowRecPtr(Student *r);
void ShowRec(Student r);

int main_linkedlist1(void) {
	Student *s, *t, *u;
	printf("%d %d %d %d\n", sizeof(s), sizeof(*s), sizeof(s->id), sizeof(s->next));
	
	s = (Student *) malloc(sizeof(Student));
	t = (Student *) malloc(sizeof(Student));
	u = (Student *) malloc(sizeof(Student));
	s->id = 6; s->game = 10; s->ave = 6.5; strcpy(s->name, "Haha");
	t->id = 7; t->game = 20; t->ave = 5.5; strcpy(t->name, "Kaka");
	u->id = 8; u->game = 30; u->ave = 7.5; strcpy(u->name, "Mama");
	
	// 구조체 포인터 연결 
	ShowRecPtr(s); ShowRecPtr(t); ShowRecPtr(u);
	
	free(s); free(t); free(u);
}

void ShowRecPtr(Student *r) {
   printf("%d %d %.2f %s\n", r->id, r->game, r->ave, r->name);
}

void ShowRec(Student r) {
   printf("%d %d %.2f %s\n", r.id, r.game, r.ave, r.name);
}
