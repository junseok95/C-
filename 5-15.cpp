// 배열은 레퍼런스 정보가 넘어간다.

//int* average(const int a[], int size)
//{
//	if (size <= 0) return nullptr;
//	int sum = 0;
//	for (int i = 0; i < size; i++) sum += a[i];
//
//	int* result = new int;
//	*result = sum / size;
//	return result;
//}

//가급적 참조리턴 사용하지 말 것
//참조리턴이란?
//반환형에 레퍼런스 변수 사용
//ex) 지역변수가 stack공간에 있기 때문에 지워지게 됨, 잘못된 사용
//값이 계속 남아 있을 수 있는 전역변수를 사용할것
//정적 지역변수 혹은 정적 전역변수 사용할 것 
//int& average(...)
//{
//	int sum = 0;
//	...
//	int avg = sum / size;
//  static int avg = sum/size; //정적 변수 사용
//	return avg;
//}

//깊은 복사와 얕은 복사
//깊은 복사를 할 때 복사 생성자 함수 사용
//깊은 복사 시 무한루프가 발생하는데 어디서 끊어야 하는지 알기 힘들 수 있음
//레퍼런스 변수, 포인터 변수를 사용 할 때 바뀌는지 안바뀌는지 확인 후 const 반드시 써주기

//예제 5-9

//Circle() : Circle(1) {}
//Circle(int radius) : radius(radius) {}
//Circle(const Circle& r) : Circle(r.radius) {}

//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle(Circle& c);
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	double getArea() { return 3.14*radius*radius; }
//};
//
//Circle::Circle(Circle& c)
//{
//	this->radius = c.radius;
//	cout << "....." << radius << endl;
//}
//
//int main()
//{
//	Circle src(30);
//	Circle dest(src);
//
//	cout << "원본의 면적 = " << src.getArea() << endl;
//	cout << "사본의 면적 = " << dest.getArea() << endl;
//}

//251p 디폴트 복사 생성자
//class Book
//{
//	double price;
//	int pages;
//	char *title; // string title 이라면 깊은복사 (얕은복사나 깊은복사나 다른게 없음)
//	char *author; // string author 이라면 깊은복사 (얕은복사나 깊은복사나 다른게 없음)
//public:
//	Book(double pr, int pa, char* t, char* a);
//	~Book();
//};
//Book(const Book& other)
//	: price(other.price),
//	pages(other.pages),
//	title(other.title),
//	author(other.author) {}

