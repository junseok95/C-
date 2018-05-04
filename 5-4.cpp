// 동적 할당 객체 배열 생성과 객체 배열 소멸
// int *p = new int[];
// delete []p;
// int *q = new int;
// delete q;

// static 멤버 함수에서 this 사용 불가
// 186p 참고

// 하지 말 것
// string& return_ref()
// {
//		string test{"test"};
//		return test;
// }
// 반환형에는 레퍼런스 변수를 쓰지 않음
// 지역변수는 함수가 종료되면서 사라지는데 반환해봐야 아무 소용이 없음

// stirng& name = return_ref();
// cout << name;

// 중간에 복사를 하지 않고 레퍼런스 변수를 바로 가르킴
// 하지만 지역변수이기 때문에 가리킨 후에 바로 사라져버림
// 결과값이 나오긴 하지만 메모리가 cleanup 되지 않아서 생기는 현상
// 추후에 결과값이 변조될 우려가 있음

// 해도 됨
// string return_ref()
// {
//		string test{"test"};
//		return test;
// }
// 문제가 발생하지 않음
// 위와 다른 이유는 
// 동적할당 한 내부가 string 클래스 에서 자동으로 동적 할당시켜주면서 소멸자 함수가 호출되어 중간값 또한 지역변수처럼 취급하여 삭제해줌

// string name;
// name = return_ref();
// cout << name;

// 하지 말 것
// stirng& return_ref()
// {
//		string* str = new string{"test"};
//		return *str;
// }
// 정상적이긴 하지만 레퍼런스 변수가 없기 때문에 주소값을 잃어버리면 메모리 누수가 발생함

// 포인터 앞에 *를 사용하면 해당 포인터가 가리키고 있는 내용을 뜻함
// 194p 참조
// 입력 변수 뒤에는 성능 향상을 위하여 const를 써야 함
// 레퍼런스 변수는 바뀌지 않게끔 const 를 사용