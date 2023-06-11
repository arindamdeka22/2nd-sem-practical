//Write a macro that swaps two numbers. Write a program to use it.
#include<stdio.h>
#define SWAP(x,y) do { \ 
int temp=x; \
x=y; \
y=temp; \ 
} while (0)
int main() {
  int x, y;
  printf("Enter two numbers: ");
  scanf("%d%d", &x, &y);
  SWAP(x, y);
  printf("The swapped numbers are: %d %d\n", x, y);
  return 0;
}
