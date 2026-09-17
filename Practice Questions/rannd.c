#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
   int
   srand(time(0));
   printf("%d", rand());
   return 0;
}