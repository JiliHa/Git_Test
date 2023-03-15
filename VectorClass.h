// VectorClass.h
#ifndef VectorClass
#define VectorClass

// 定義一個名為VectorClass的類別
class Vector {
private:
  // 成員變數(member variable)，用來儲存物件的狀態
  double x, y, z;

public:
  // 建構式(constructor)，用來初始化物件
  Vector(double x=0, double y=0, double z=0);

  // 取得x座標的函式
  double getX();

  // 取得y座標的函式
  double getY();

  // 取得Z座標的函式
  double getZ();

  // 多載+運算子來計算兩個向量的加法
  Vector operator+ (const Vector& v);
  // 多載+運算子來計算兩個向量的加法
  Vector operator- (const Vector& v);
  // 多載*運算子來計算兩個向量的內積
  Vector operator* (const Vector& v);
  // 多載^運算子來計算兩個向量的外積
  Vector operator^ (const Vector& v);
};

#endif
