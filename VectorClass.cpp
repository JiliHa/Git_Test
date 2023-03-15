// VectorClass.cpp
#include "VectorClass.h" // �]�t���Y��

// ��@�غc���A�N�Ѽ�a�Mb���O������x�My
Vector::Vector(double x, double y, double z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

// ��@�������add�A�^��vector�ۥ[�����G
Vector Vector::operator+ (const Vector& v) {
  return Vector(x + v.x, y + v.y, z + v.z);
}
// ��@�������sub�A�^��vector�۴���G
Vector Vector::operator- (const Vector& v) {
  return Vector(x - v.x, y - v.y, z - v.z);
}
// ��@�������cross�A�^��vector�~�n�����G
Vector Vector::operator* (const Vector& v) {
    return x * v.x + y * v.y + z * v.z;
}
// ��@�������dot�A�^��vector���n�����G
Vector Vector::operator^ (const Vector& v) {
  return Vector(y * v.z - z * v.y,
                z * v.x - x * v.z,
                x * v.y - y * v.x);
}

// ��@���ox�y�Ъ��禡
double Vector::getX(){
    return x;
}

// ��@���ox�y�Ъ��禡
double Vector::getY(){
    return y;
}

// ��@���ox�y�Ъ��禡
double Vector::getZ(){
    return z;
}
