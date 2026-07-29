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
if(num & 1){
  printf("The number is odd");
}else{
  printf("The number is ever");
  }

How do you find whether a particular bit is set?
  if(no &= (1<<pos));

How do you set, clear, toggle, and check a bit?
set no |= (1<<pos);
clear no &= ~(1<<pos);
toggle no ^= (1<<pos);

How do you count the number of 1s in a binary number?

How do you reverse the bits of an integer?
What is the difference between && and &?
What is the difference between || and |?
What is the difference between ~ and !?

Pointers

What is a pointer?
int *ptr = a;
*ptr is a variable which is holding the address of another varible that is a.

What is a NULL pointer?
int *ptr = NULL; 
a pointer ppointing to the null adress is called as null pointer.

What is a dangling pointer?
int *ptr = a;
free(ptr);
ptr = malloc(n*sizeof(int);
The above is called as a wild pointer when we free it and the next second we try to assign the size or tring to use it,the best prevention is to use a NULL. it is called as wild pointer.

What is a wild pointer?
int *ptr;
This is called as a dangling pointer when the pointer is declared but it is not assigned then it is called as dangling pointer, bcz it can misbehave

What happens if you dereference a NULL pointer?
It becomes an error as "segmentation fault" or a "NULL POINTER EXCEPTION"as we are trying to access the undefined memory.

What is the difference between:
int *p; it is a pointer declared but not initialized.
const int *p; Pointer to a constant value, we can change the adress but we cannot play with the value.
int *const p; Constant pointer to a variable value, we cannot change the adress but we can change the value.
const int *const p; constant pointer and constant value. we canot edit value and adress.

What is a pointer to a pointer?
A pointer pointing to a pointer, i.e when a pointer is holding the address of another pointer is called as pointer to pointer.

What is the difference between an array and a pointer?

What happens when you increment a pointer?
It moves to the next memory address which it is pointing for a example if the pointer is pointing to the integer(0x04) then it will move to 0x08 to its next corresponding address because int holds 4bytes.

What is a function pointer?
A pointer passing to a function is called as fuction pointer.

Can you pass a structure to a function using a pointer?
yes we can pass a structure to a duction using a pointer there is a special variable called as (->) arrow operator.

Why do we use -> with a structure pointer?
yes we can use it!

Memory

Where are local variables stored?
The local variable is stored in stack segment, when the local variable is used with static keyword then it is stored in data segment.

Where are global variables stored?
The global variables which are initialized is stored in data segment and when not initiazlzed then it is stored in .bss segment.

Where are static variables stored?
The static variables are stored in data when initialized and in .bss segment when uninitialized.

What is the difference between stack and heap?
The main difference between Stack and Heap is that stack grows downwards and heap grows upwards, when we use dyanamically memory allocation at that time we use heap and when we initialize direct in code that time we use stack.

What causes a segmentation fault?
The main casue of segmentation fault is that when we try to access the freed memory or trying to put some data into uninitialized variable of working with dma leads to the segmentation fault.

What is a memory leak?
If i use dyanmic memory allocation and ask os to give the space and even after using that space im not telling the system that use of that allocated memory is done and keeping it like in use at that time we can say there is a memory leak.

What is stack overflow?


What happens if you access an array outside its bounds?
It leads to segmentation fault.

What is the difference between initialized and uninitialized global variables?
The initialized global variables are stored in .data segment and the uninitialized gloabal variable are stored in the bss segment. the global variables are directly initialized to zero if it is not assigned wih some value.

What are .text, .data, .bss, heap, and stack sections?
All these terms are called as memory layout in C programming, the .txt holds the arguments and function call, the .data hold the initialize variable and the .bss segment holds the uninitialized variable, the .heap section is used for DMA, and the stack is used for local variables and for faster response.

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
