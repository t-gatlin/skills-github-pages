#include <stdio.h>

int main(){

  int a, b;
  char op;
  int result;

  printf ("Enter 1st number: ");
  scanf ("%d", &a);

  printf ("Enter operator (+, -, /, *): ");
  scanf (" %c", &op);

  printf ("Enter 2nd number: ");
  scanf ("%d", &b);

  switch (op) {
    case '+':
      result = a + b;
      printf ("%d %c %d = %d\n", a, op, b, result);
      break;

    case '-':
      result = a - b;
      printf ("%d %c %d = %d\n", a, op, b, result);
      break;
    case '*':
      result = a * b;
      printf ("%d %c %d = %d\n", a, op, b, result);
      break;
    case '/':
      if (b==0){
        printf("Error: can't divide by zero\n");
      } else {
        result = a / b;
        printf("%d %c %d = %d\n", a, op, b, result);
      }
      break;
    default:
      printf("Unknown operator: %c\n", op);
  }




  return 0;
}
