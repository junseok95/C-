// �迭�� ���۷��� ������ �Ѿ��.

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

//������ �������� ������� �� ��
//���������̶�?
//��ȯ���� ���۷��� ���� ���
//ex) ���������� stack������ �ֱ� ������ �������� ��, �߸��� ���
//���� ��� ���� ���� �� �ִ� ���������� ����Ұ�
//���� �������� Ȥ�� ���� �������� ����� �� 
//int& average(...)
//{
//	int sum = 0;
//	...
//	int avg = sum / size;
//  static int avg = sum/size; //���� ���� ���
//	return avg;
//}

//���� ����� ���� ����
//���� ���縦 �� �� ���� ������ �Լ� ���
//���� ���� �� ���ѷ����� �߻��ϴµ� ��� ����� �ϴ��� �˱� ���� �� ����
//���۷��� ����, ������ ������ ��� �� �� �ٲ���� �ȹٲ���� Ȯ�� �� const �ݵ�� ���ֱ�

//���� 5-9

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
//	cout << "������ ���� = " << src.getArea() << endl;
//	cout << "�纻�� ���� = " << dest.getArea() << endl;
//}

//251p ����Ʈ ���� ������
//class Book
//{
//	double price;
//	int pages;
//	char *title; // string title �̶�� �������� (�������糪 �������糪 �ٸ��� ����)
//	char *author; // string author �̶�� �������� (�������糪 �������糪 �ٸ��� ����)
//public:
//	Book(double pr, int pa, char* t, char* a);
//	~Book();
//};
//Book(const Book& other)
//	: price(other.price),
//	pages(other.pages),
//	title(other.title),
//	author(other.author) {}

