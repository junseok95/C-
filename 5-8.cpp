//string 객체에 대한 동적할당 시 반드시 delete를 사용하여 동적해제 할 것

//string *p = new string("C++"); //  스트링 객체 동적 생성
//cout<<*p; // "C++"출력
//p->append("Great!!"); // p 가 가리키는 스트링이 "C++ Great!!"이 됨
//cout << *p; // "C++ Great!!"출력
//delete p; // 동적할당 해제

//string s = "123";
//int n = stoi(s); // s대신 레퍼런스 변수 사옹
//int stoi(const string &a);
//반환형은 string &


//int n = atoi(s.c_str()); 

//c_str()
//string 클래스의 멤버함수
//const char* 를 리턴해줌
//클래스 내부 사이즈 정보가 들어감
//char의 주소정보를 가지고 있음
//반환형은 const char* c_str()
//반환시 변경하지 말 것

//5장 const 명확하게 이해 할 것...시험


//string 예제

//#include <iostream>
//include <string>
//using namespace std;

//  int main()
//  {     //스트링 생성
//      string str; // 빈 문자열을 가진 스트링 객체 생성
//      string address("서울시 성북구 삼선동 389"); // 스택공간에 생성
//      string copyAddress(address); // address의 문자열을 복사한 스트링 객체 생성
//      char text[] = {'L','o','v','e',' ','C','+','+','\0'}; // C-스트링
//      string title(text); // "Love C++" 문자열을 가진 스트링 객체 생성

// 스트링 출력
//      cout << str << endl; // 빈 스트링, 아무값도 출력되지 않음
//      cout << address << endl;
//      cout << copyAddress << endl;
//      cout << title << endl;
//  }

//string 배열선언
//  int main()
//  {
//      string names[5]; // 문자열 배열 선언
//      for(int i=0; i<5; i++)
//      {
//          cout << "이름 >> ";
//          getline(cin, names[i], '\n');
//      }
//      string latter = names[0];
//      for(int i =1; i<5; i++)
//      {
//          if(latter < names[i]) // names가 latter보다 뒤에 온다면
//          {
//              latter = names[i]; // latter 문자열 변경
//          }
//      }
//      cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
//  }

//  예제 4-13 문자열을 입력 받고 회전시키기


// 5장

// '값에 의한 호출'로 객체 전달
//