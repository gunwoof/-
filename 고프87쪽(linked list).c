#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t_rec {int id; char name[16]; double ave; int game; struct t_rec *next;
} Student;

void ShowRec(Student r);
void ShowRecPtr(Student *r);

int main/*_linkedlist3*/(void) {
	Student *s, *t, *u, *p;
	
	s = (Student *) malloc(sizeof(Student));
	t = (Student *) malloc(sizeof(Student));
	u = (Student *) malloc(sizeof(Student));
	s->id = 6; s->game = 10; s->ave = 6.5; strcpy(s->name, "Haha"); s->next = t;
	t->id = 7; t->game = 20; t->ave = 5.5; strcpy(t->name, "Kaka"); t->next = u;
	u->id = 8; u->game = 30; u->ave = 7.5; strcpy(u->name, "Mama"); u->next = 0;
	
	p = s;
	while(p != 0) {
		ShowRecPtr(p);
		p = p -> next;
	}
}
