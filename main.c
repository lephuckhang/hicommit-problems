#include <stdio.h>

int main(void) {
  int a;//Khai báo biến

  scanf("%d", &a);//Nhập giá trị

  if(a%2!=0)
  {
    printf("LE");
  }
  else
  {
    printf("CHAN");
  }
  return 0;
}