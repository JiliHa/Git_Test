// VectorClass.cpp
#include "VectorClass.h" // 包含標頭檔

// 實作建構式，將參數a和b分別指派給x和y
Vector::Vector(double x, double y, double z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

// 實作成員函數add，回傳vector相加之結果
Vector Vector::operator+ (const Vector& v) {
  return Vector(x + v.x, y + v.y, z + v.z);
}
// 實作成員函數sub，回傳vector相減之結果
Vector Vector::operator- (const Vector& v) {
  return Vector(x - v.x, y - v.y, z - v.z);
}
// 實作成員函數cross，回傳vector外積之結果
Vector Vector::operator* (const Vector& v) {
    return x * v.x + y * v.y + z * v.z;
}
// 實作成員函數dot，回傳vector內積之結果
Vector Vector::operator^ (const Vector& v) {
  return Vector(y * v.z - z * v.y,
                z * v.x - x * v.z,
                x * v.y - y * v.x);
}

// 實作取得x座標的函式
double Vector::getX(){
    return x;
}

// 實作取得x座標的函式
double Vector::getY(){
    return y;
}

// 實作取得x座標的函式
double Vector::getZ(){
    return z;
}
