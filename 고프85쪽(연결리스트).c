#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(push,1) 
typedef struct t_rec {int id; char name[16]; double ave; int game; struct t_rec *next;
} Student;
#pragma pack(pop)

void ShowRec(Student r);
void ShowRecPtr(Student *r);

int main_linkedlist2(void) {
	Student s, t, *p;
	s.id = 6; s.game = 10; s.ave = 6.5; strcpy(s.name, "Haha");
	t.id = 4; t.game =3; t.ave = 5.6; strcpy(t.name, "Mama");
	ShowRec(s); ShowRec(t); 
	
	// 구조체 포인터 연결 
	p = &s;
	ShowRecPtr(p);
	
	// 구조체 동적 할당 
	p = (Student *) malloc(sizeof(Student));
	p->id = 3; p->game = 8; p->ave = 3.3; strcpy(p->name, "Kaka");
	ShowRecPtr(p);
	
	free(p);
}

