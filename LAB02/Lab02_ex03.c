#include <stdio.h>

void swop(int *x,int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
void printA(int *a){
// ใช้คำสั่งfor เพื่อวน loop ใน array แล้วพิมพ์ค่าสมาชิกแต่ละตัวบนหน้าจอ
}

int main (){
  int a[10] = {};
  int *p,*q;

  // ใช้ loop วนรับค่าตัวเลขจาก keyboard ใส่ลงใน array a[] 
  printA(a);

  p=a;
  q=&a[9];
  
  // ใช้ loop และ function swop ในการสลับค่าจากหน้าไปหลัง
  printA(a);

  return 0;
}
