#include<stdio.h>
struct address
{
int a;
char c;
};
struct parent
{
int b;
struct child c1;

};
int main()
{
struct parent p1={12,34,'j'};
printf("value of b=%d",p1.b);
printf("value ofb=%d",p1.c1.a);
printf("value of c=%d",p1.c1.c);


}
