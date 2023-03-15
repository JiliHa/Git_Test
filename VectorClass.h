// VectorClass.h
#ifndef VectorClass
#define VectorClass

// �w�q�@�ӦW��VectorClass�����O
class Vector {
private:
  // �����ܼ�(member variable)�A�Ψ��x�s���󪺪��A
  double x, y, z;

public:
  // �غc��(constructor)�A�ΨӪ�l�ƪ���
  Vector(double x=0, double y=0, double z=0);

  // ���ox�y�Ъ��禡
  double getX();

  // ���oy�y�Ъ��禡
  double getY();

  // ���oZ�y�Ъ��禡
  double getZ();

  // �h��+�B��l�ӭp���ӦV�q���[�k
  Vector operator+ (const Vector& v);
  // �h��+�B��l�ӭp���ӦV�q���[�k
  Vector operator- (const Vector& v);
  // �h��*�B��l�ӭp���ӦV�q�����n
  Vector operator* (const Vector& v);
  // �h��^�B��l�ӭp���ӦV�q���~�n
  Vector operator^ (const Vector& v);
};

#endif
