/*
객체 배열 선언 가능
 기본 타입 배열 선언과 형식 동일
  int n[3]; // 정수형 배열 선언
  Circle c[3]; // Circle 타입의 배열 선언
객체 배열 선언
 객체 배열을 위한 공간 할당
 배열의 각 원소 객체마다 생성자 실행
  c[0]의 생성자, c[1]의 생성자, c[2]의 생성자 실행
  매개 변수 없는 생성자 호출
 매개 변수 있는 생성자를 호출할 수 없음
  Circle circleArray[3](5); // 오류
배열 소멸
 배열의 각 개체마다 소멸자 호출, 생성의 반대순으로 소멸
  c[2]의 소멸자, c[1]의 소멸자, c[0]의 소멸자 실행

객체 배열 초기화 방법
 배열의 각 원소 객체당 생성자 지정하는 방법
  Circle circleArray[3] = { Circle(10), Circle(20), Circle()};
   circleArray[0] 객체가 생성될 때, 생성자 Circle(10) 호출
   circleArray[1] 객체가 생성될 때, 생성자 Circle(20) 호출
   circleArray[2] 객체가 생성될 때, 생성자 Circle() 호출

c++의 기본 연산자
new/delete 연산자의 사용 형식
	데이터타입 *포인터변수 = new 데이터타입;
	delete 포인터변수;
new/delete의 사용
	int *plnt = new int; // int 타입의 메모리 동적 할당
	char *pChar = new char; // char 타입의 메모리 동적 할당
	Circle *pCircle = new Circle(); // Circle 클래스 타입의 메모리 동적 할당

	delete plnt; // 할당 받은 정수 공간 반환
	delete pChar; // 할당 받은 문자 공간 반환
	delete pCircle; // 할당 받은 객체 공간 반환
delete 사용시 주의사항
 동적으로 할당 받지 않는 메모리 반환 - 오류 
 동일한 메모리 두번 반환 - 오류 (delete 중복 반환)

new/delete 연산자의 사용 형식
데이터타입 *포인터변수 = new 데이터타입 [배열의크기];
delete [] 포인터변수; // 배열 반환 // []쓰지 않으면 맨 앞부분만 삭제 되면서 메모리 누수 현상 발생
*/