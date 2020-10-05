#include <stdio.h>
struct test
{
    int age;
    int no;/* data */
};
int main(){
  printf("hello world!\n");
  test t;
  scanf("%d %d",&t.age,&t.no);
  printf("t.age=%d,t,no=%d",t.age,t.no);
  return 1;
}
