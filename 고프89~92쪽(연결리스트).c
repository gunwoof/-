#include <stdio.h>

#pragma pack(push,1) 
typedef struct t_rec {int id; char name[16]; double ave; int game; struct t_rec *next;
} Student;
#pragma pack(pop)

Student *head = NULL;

void Showlist(); // 연결리스트 모두 출력 
void append(int i, char *s, double a, int g); // 연결리스트 맨 끝에 새로울 리스트 추가하기 
void push(int i, char *s, double a, int g); // 연결리스트 맨 처음에 새로운 리스트 추가하기 

int main(void) {
	
	
} 

void ShowList() {
	Student *p;
	p = head;
	while(p != NULL) {
		printf("%4d %16s %4.3f %4d\n",p->id, p->name, p->ave, p->game);
		p = p->next;
	}
} 

void append(int i, char *s, double a, int g) {
	Student *p;
	if(head == NULL) {
		head = (Student *) malloc(sizeof(Student));
		head->id = i; strcpy(head->s,n); head->ave = a; head->game = g;
		head->next = NULL;
	}
	else {
		p = head;
		while(p != NULL) {
			p = p->next
		}
		p->next = (Student *) malloc(sizeof(Student));
		p = p->next;
		head->id = i; strcpy(head->s,n); head->ave = a; head->game = g;
		p->next = NULL;
	}
	
}


