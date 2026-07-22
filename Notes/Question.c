C Programming / Logic

What is the difference between = and ==?
ans. The main difference between = and == is that the "=" presents of assignment operator and it directly assigns it and the "==" represent the comparison operator, which gives the boolean expression like true and false.

What is the difference between ++i and i++?

What happens if you write i = i++ + ++i?
What is the output of:
  int a = 5;
  printf("%d %d %d", a++, ++a, a);
How do you swap two numbers without using a third variable?
  #include<stdio.h>
  int main(){
    int a = 10 , b = 20;
    a = a+b;
    b = a-b;
    a = a-b;
  }
  
How do you find whether a number is even or odd without using %?
How do you find whether a particular bit is set?
How do you set, clear, toggle, and check a bit?
How do you count the number of 1s in a binary number?
How do you reverse the bits of an integer?
What is the difference between && and &?
What is the difference between || and |?
What is the difference between ~ and !?

Pointers
What is a pointer?
What is a NULL pointer?
What is a dangling pointer?
What is a wild pointer?
What happens if you dereference a NULL pointer?
What is the difference between:
int *p;
const int *p;
int *const p;
const int *const p;
What is a pointer to a pointer?
What is the difference between an array and a pointer?
What happens when you increment a pointer?
What is a function pointer?
Can you pass a structure to a function using a pointer?
Why do we use -> with a structure pointer?

Memory
Where are local variables stored?
Where are global variables stored?
Where are static variables stored?
What is the difference between stack and heap?
What causes a segmentation fault?
What is a memory leak?
What is stack overflow?
What happens if you access an array outside its bounds?
What is the difference between initialized and uninitialized global variables?
What are .text, .data, .bss, heap, and stack sections?
static, const, volatile
What is a static variable?
What is the scope of a static global variable?
Can you access a static variable from another .c file?
What is the difference between static and extern?
What is const?
What is volatile?
Why is volatile important in embedded systems?
Where would you use volatile?
Can a variable be both const and volatile?

Very important for your interview: if a hardware register can change its value without the CPU explicitly modifying it, why should it be declared volatile?

Embedded-Specific Brainstorming
You have an LED connected to a microcontroller. How do you turn it ON using C?
How do you set the 4th bit of a register?
How do you clear the 4th bit?
How do you toggle the 4th bit?
How do you check if the 4th bit is HIGH?
You have a 32-bit register. You need to modify only bits 4–7 without affecting other bits. How will you do it?
A sensor is connected through I²C but you are not receiving data. What will you check?
UART communication is working sometimes and failing sometimes. What could be the reasons?
SPI communication is not working. What will you debug?
CAN communication is not working. What will you check?
What happens if two devices transmit simultaneously on CAN?
Why does CAN use termination resistors?
What is the difference between UART and SPI?
What is the difference between SPI and I²C?
Why is I²C called a two-wire protocol?
Why is CAN considered robust for automotive and industrial applications?

Debugging Brainstorming
Your embedded system is resetting randomly. What could be the reason?
Your microcontroller is stuck in an infinite loop. How will you debug it?
The code works in Debug mode but fails in Release mode. What could be the reason?
Your firmware works for 10 minutes and then crashes. What will you check?
An LED is not blinking. How will you debug the problem?
UART prints garbage characters. What will you check?
A sensor gives incorrect values. How will you determine whether the problem is hardware or software?
The system works after power-on but stops after some time. What could be the reason?
Your code is running too slowly. How will you optimize it?
You have a bug that you cannot reproduce consistently. How will you debug it?

Testing / Validation
What is the difference between verification and validation?
What is a test case?
What is a test plan?
What is a test report?
What is the difference between unit testing, integration testing, and system testing?
How would you test a UART interface?
How would you test a CAN interface?
What would you include in an embedded software test case?
What is regression testing?
What would you do if a test case fails?
