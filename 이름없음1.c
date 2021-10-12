1. while문 바깥에 전날 사건의 개수를 저장해둘 변수를 생성
2. while문 바깥에 입력된 사건의 개수를 셀 변수를 생성

int numOfBeforeCase = MAX;   //전날 사건의 개수를 저장해둘 변수
int count = 0;         //총 입력된 사건의 개수

while(count < 5){      //총 5개가 입력되면 입력 종료
   int tmp;
   scanf('사건입력, %tmp);

   if( tmp < numOfBeforeCase ){
      //1. 사건 수 저장하는 코드 구현
      //2. count ++
      //3. numOfBeforeCase를 방금 입력된 사건수로 변경
   }
   else{
      print(사건의 수가 전날보다 크거나 같다.)
   }
}
