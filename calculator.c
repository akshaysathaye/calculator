#include <stdio.h>

int main(){
  double a, b;
  char operator;
  double answer;
  printf("Enter calculation:\n");
  scanf("%lf%c%lf", &a, &operator, &b);
  switch(operator){
  case '+':
    answer = a + b;
    break;
  case '-':
    answer = a - b;
    break;
  case '*':
    answer = a * b;
    break;
  case '/':
    answer = a / b;
    break;
  default:
    answer = 0;
  }
  printf("The answer is: %lf\n", answer);
  return 0;
}
