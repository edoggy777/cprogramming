#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void stack_overflow(void);
void stack_underflow(void);

#define STACK_SIZE 100

int stack[STACK_SIZE]; 
int top = 0;

void make_empty(void) {
   top = 0;
}

bool is_empty(void) {
   return top == 0;
}

bool is_full(void) {
   return top == STACK_SIZE;
}

void push(int i) {
   if (is_full())
      stack_overflow();
   else
      stack[top++] = i; 
}

int pop(void) {
   if (is_empty())
      stack_underflow();
   else
      return stack[--top];  
   return 0;
}

void stack_overflow(void) {
   fprintf(stderr, "Error: stack overflow.\n");
   exit(1);
}

void stack_underflow(void) {
   fprintf(stderr, "Error: stack underflow.\n");
   exit(1); 
}

int main(void) {
  
   push(200000);
   printf("pushed: %d\n", 20);
   
   int popped_value = pop();
   printf("popped: %d\n", popped_value);
   
   push(300);
   printf("pushed: %d\n", 30);
   
   push(40);
   printf("pushed: %d\n", 40);
   
   printf("popped: %d\n", pop());
   printf("popped: %d\n", pop());
   
   for (int i = 0; i <= 100; i++) {
        printf("Pushing item #%d (value: %d)\n", i+1, i*1000);
        push(i * 1000);  // The values can be anything - 0, 1000, 2000, etc.
    }

   return 0;
}
