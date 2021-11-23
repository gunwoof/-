/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct t_rec {int id; char name[16]; double ave; int game; struct t_rec *next;
} Student;

void ShowRec(Student r);
void ShowRecPtr(Student *r);

int main_linkedlist2(void) {
	Student s, t, *p;
	s.id = 6; s.game = 10; s.ave = 6.5; strcpy(s.name, "Haha");
	t.id = 4; t.game =3; t.ave = 5.6; strcpy(t.name, "Mama");
	ShowRec(s); ShowRec(t); ShowRecPtr(&s); ShowRecPtr(&t);
	
	p = &s;
	ShowRec(p);
	
	s = t; 
}*/

