//string ��ü�� ���� �����Ҵ� �� �ݵ�� delete�� ����Ͽ� �������� �� ��

//string *p = new string("C++"); //  ��Ʈ�� ��ü ���� ����
//cout<<*p; // "C++"���
//p->append("Great!!"); // p �� ����Ű�� ��Ʈ���� "C++ Great!!"�� ��
//cout << *p; // "C++ Great!!"���
//delete p; // �����Ҵ� ����

//string s = "123";
//int n = stoi(s); // s��� ���۷��� ���� ���
//int stoi(const string &a);
//��ȯ���� string &


//int n = atoi(s.c_str()); 

//c_str()
//string Ŭ������ ����Լ�
//const char* �� ��������
//Ŭ���� ���� ������ ������ ��
//char�� �ּ������� ������ ����
//��ȯ���� const char* c_str()
//��ȯ�� �������� �� ��

//5�� const ��Ȯ�ϰ� ���� �� ��...����


//string ����

//#include <iostream>
//include <string>
//using namespace std;

//  int main()
//  {     //��Ʈ�� ����
//      string str; // �� ���ڿ��� ���� ��Ʈ�� ��ü ����
//      string address("����� ���ϱ� �Ｑ�� 389"); // ���ð����� ����
//      string copyAddress(address); // address�� ���ڿ��� ������ ��Ʈ�� ��ü ����
//      char text[] = {'L','o','v','e',' ','C','+','+','\0'}; // C-��Ʈ��
//      string title(text); // "Love C++" ���ڿ��� ���� ��Ʈ�� ��ü ����

// ��Ʈ�� ���
//      cout << str << endl; // �� ��Ʈ��, �ƹ����� ��µ��� ����
//      cout << address << endl;
//      cout << copyAddress << endl;
//      cout << title << endl;
//  }

//string �迭����
//  int main()
//  {
//      string names[5]; // ���ڿ� �迭 ����
//      for(int i=0; i<5; i++)
//      {
//          cout << "�̸� >> ";
//          getline(cin, names[i], '\n');
//      }
//      string latter = names[0];
//      for(int i =1; i<5; i++)
//      {
//          if(latter < names[i]) // names�� latter���� �ڿ� �´ٸ�
//          {
//              latter = names[i]; // latter ���ڿ� ����
//          }
//      }
//      cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
//  }

//  ���� 4-13 ���ڿ��� �Է� �ް� ȸ����Ű��


// 5��

// '���� ���� ȣ��'�� ��ü ����
//