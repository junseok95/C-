/*

 private : 동일한 클래스의 멤버 함수에만 제한함
 public : 모든 다른 클래스에 허용
 protected : 클래스 자신과 상속받은 자식 클래스에만 허용

 멤버변수는 private로 지정해야함.
 생성자에서 아무 상관없이 호출 가능함
 private 함수는 main에서 불러 올 수 없음

 인라인 함수
  inline 키워드로 선언된 함수
 인라인 함수에 대한 처리
  인라인 함수를 호출하는 곳에 인라인 함수 코드를 확장 삽입
      매크로와 유사
      코드 확장 후 인라인 함수는 사라짐
  인라인 함수 호출
      함수 호출에 따른 오버헤드 존재하지 않음
      프로그램의 실행 속도 개선
 컴파일러에 의해 이루어짐
 인라인 함수의 목적
  c++ 프로그램의 실행 속도 향상
      자주 호출되는 짧은 코드의 함수 호출에 대한 시간 소모를 줄임
      c++에는 짧은 코드의 멤버 함수가 많기 때문

 c++ 구조체 (단순히 정보만을 저장 하려고 할때)
  상속, 멤버, 접근 지정 등 모든것이 클래스와 동일
  클래스와 유일하게 다른 점
      구조체의 디폴트 접근 지정 - public
      클래스의 디폴트 접근 지정 - private
 c++에서 구조체를 수용한 이유
  c언어와의 호환성 때문
      c의 구조체 100% 호환 수용
      c소스를 그대로 가져다 쓰기 위해
 구조체 객체 생성
  struct 키워드 생략
 structName stObj; (c++ 구조체 객체 생성)

 포인터
  포인터는 메모리에 있는 주소값을 받아오기 때문에 int자료형을 받아온다.
  객체의 주소 값을 가지는 변수
 포인터로 멤버를 접근할 때
  객체포인터 -> 멤버

 Circle donut;
 //Circle* r; // 포인터 변수, 수정 가능, 선언할때 대상을 지정하지 않음
 //Circle r = donut; // 레퍼런스 변수, 수정 불가능, 선언할때 대상을 반드시 지정해야함
 double d = donut.getArea();

 Circle *p; // 객체에 대한 포인터 선언
 p=&donut; // 포인터에 객체 주소 저장
 d=p->getArea(); // 멤버 함수 호출

 객체 배열 선언 가능
  기본 타입 배열 선언과 형식 동일
   int n[3]; // 정수형 배열 선언
   Circle c[3]; // Circle 타입의 배열 선언

 객체 배열 선언
  객체 배열을 위한 공간 할당
  배열의 각 원소 객체마다 생성자 실행
   c[0]의 생성자, c[1]의 생성자, c[2]의 생성자 실행
  매개 변수 있는 생성자를 호출할 수 없음
   Circle circleArray[3](5); // 오류
 배열 소멸
  배열의 각 개체마다 소멸자 호출, 생성의 반대순으로 소멸
   c[2]의 소멸자, c[1]의 소멸자, c[0]의 소멸자 실행
 객체 배열 초기화 방법
  배열의 각 원소 개체당 생성자 지정하는 방법
   Circle circleArray[3] = { Circle(10), Circle(20), Circle()};
 포인터에 동적할당 하는법
 Circle* p[1000];
 for (int i=0; i<1000; i++)
    p[i] = new Circle(i); // Circle(반지름값)

 for (int i=0; i<1000; i++)
    delete p[i]; // 배열 대상을 각각 지워야 함
 */
/* #include <iostream>
 using namespace std;

 class Circle{
 int radius;
 public:
 Circle(){radius = 1;}
 Circle(int r) {radiuse = r;}
 double getArea();
 }
 double Circle::getArea)_{
 return 3.14*radius*radus;
 }

 int main(){
 Circle donut;
 Circle pizza(30);

 //객체 이름으로 멤버 접근
 cout << donut.getArea() << endl;

 //객체 포인터로 멤버 접근 
*/