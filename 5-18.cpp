//있는 것을 다른걸로 대체하는게 오버라이딩
//여러개의 다기능으로 사용하는게 오버로딩
//입력 파라미터가 다 다름
//입력변수의 자료명이 중요

//함수 중복 성공 조건
// 중복된 함수들의 이름 동일
// 중복됨 함수들의 매개 변수 타입이 다르거나 개수가 달라야 함
// 리턴타입은 함수 중복과 무관
// C에서는 함수 중복 불가
// 단 static을 이용하여 중복가능


//#include <iostream>
//using namespace std;
//
//int sum(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//double sum(double a, double b)
//{
//	return a + b;
//}
//
//int sum(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << sum(2, 5, 33);
//	cout << sum(12.5, 33.6);
//	cout << sum(2, 6);
//}

//함수 중복 실패
// 리턴 타입이 다르다고 함수 중복이 성공하지 않음
