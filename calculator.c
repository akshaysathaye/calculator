#include <stdio.h>

int main(){
  char d_or_h;
  int a, b;
  char operator;
  int answer;
  int i;
  printf("Enter d for decimal or h for hexadecimal:\n");
  scanf("%c", &d_or_h);
  if(d_or_h == 'd'){
      printf("Enter calculation:\n");
      scanf("%d%c%d", &a, &operator, &b);
  }else if(d_or_h == 'h'){
    printf("Enter calculation:\n");
    scanf("%x%c%x", &a, &operator, &b);
  }else{
    printf("Invalid input.\n");
    return 1;
  }
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
  case '^':
    answer = 1;
    for(i = 0; i < b; i++){
      answer = answer * a;
    }
    break;

	case '%':
	answer = a % b;
	break;
	// tested functionality
	// state of the art code works beautifully
  default:
    answer = 0;
  }
  if(d_or_h == 'd')
    printf("The answer is: %d\n", answer);
  else
    printf("The answer is: %x\n", answer);
  return 0;
}
