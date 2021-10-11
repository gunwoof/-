#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	int OddSum =0;
	int EvenSum =0;
	int AllSum; 
	
	int OddMatter[3];
	int EvenMatter[2];
	printf("5개의 단어를 입력해 주세요!\n");
	scanf_s("%d %d %d %d %d", &OddMatter[0], &EvenMatter[0], &OddMatter[1], &EvenMatter[1], &OddMatter[2]);
	
	// 홀수 번째 문제 
	for(i=0; i < 3; i++){
		if(1<= OddMatter[i] && OddMatter[i] <=2) {
			OddSum -= 2 - OddMatter[i];
		}
		else if (3 <= OddMatter[i] && OddMatter[i] <= 6) {
			OddSum += OddMatter[i] -2;
		}
		else if(OddMatter[i] >= 7) {
			OddSum += 5;
		}
	}
	
	// 짝수 번째 문제 
	for(i=0; i < 2; i++){
		if(1<= EvenMatter[i] && EvenMatter[i] <=3) {
			EvenSum -= 3 - EvenMatter[i];
		}
		else if (4 <= EvenMatter[i] && EvenMatter[i] <= 7) {
			EvenSum += EvenMatter[i] -3;
		}
		else if(EvenMatter[i] >= 8) {
			EvenSum += 5;
		}
	}
	
	// 총 패널티의 합 
	AllSum = OddSum + EvenSum;
	printf("패널티의 합은%d", AllSum);	
}
