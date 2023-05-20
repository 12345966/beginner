#include <iostream>
#include <math.h>
using namespace std;

double const pi = 3.14;
//����Բ
class Circle
{
protected:
	double radius;
public:
	virtual double getSurfaceArea() = 0;
	virtual double getVolume() = 0;
	virtual void output() = 0;
};
//��
class Sphere : public Circle
{
public:
	Sphere()
	{
		cout << "������뾶��" << endl;
		cin >> radius;
		cout << '\n';
	}
	virtual double getSurfaceArea()
	{
		return 4 * pi * radius * radius;
	}
	virtual double getVolume()
	{
		return 4 * pi * radius * radius * radius / 3;
	}
	virtual void output()
	{
		cout << "��ı������" << getSurfaceArea() << endl;
		cout << "��������" << getVolume() << endl;
		cout << '\n';
	}
};
//Բ��
class Cylinder :public Circle
{
public:
	double height;
	Cylinder()
	{
		cout << "����Բ���İ뾶�͸ߣ�" << endl;
		cin >> radius >> height;
	}
	virtual double getSurfaceArea()
	{
		return 2 * pi * radius * height + 2 * pi * radius * radius;
	}
	virtual double getVolume()
	{
		return pi * radius * radius * height;
	}
	virtual void output()
	{
		cout << "Բ���ı������" << getSurfaceArea() << endl;
		cout << "Բ���������" << getVolume() << endl;
		cout << '\n';
	}
};
//Բ׶
class Cone : public Circle
{
public:
	double height;
	Cone()
	{
		cout << "����Բ׶�İ뾶�͸ߣ�" << endl;
		cin >> radius >> height;
	}
	virtual double getSurfaceArea()
	{
		return  pi * radius * radius + pi * radius * sqrt(radius * radius + height * height);
	}
	virtual double getVolume()
	{
		return pi * radius * radius * height / 3;
	}
	virtual void output()
	{
		cout << "Բ׶�ı������" << getSurfaceArea() << endl;
		cout << "Բ׶�������" << getVolume() << endl;
		cout << '\n';
	}
};

int main()
{
	double SubVolume;
	Sphere sphere;
	Cylinder cylinder;
	Cone cone;
	sphere.output();
	cylinder.output();
	cone.output();

	cout << "�����Ϊ��" << sphere.getVolume() + cylinder.getVolume() + cone.getVolume();

	return 0;
}