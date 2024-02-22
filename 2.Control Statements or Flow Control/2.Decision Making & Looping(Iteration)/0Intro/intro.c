                                                /*Iteration statement (Loop structure) in C program*/
/*When a number of statements in a program is to be repeatedly executed as long as the given condition is satisfied,the statements are to be put 
  into a loop structure */

/* Calculate the sum of squares of all integers between 1 and 10 using if-else.
            .......
            .......
            sum = 0;
            n = 1;
       |--->loop:
       |    sum = sum + n*n;
    L  |    if (n == 10)
    O  |       goto print;---|
    O  |    else             |
    P  |    {                |    n = 10,
       |        n = n + 1;   |    end of loop
       |------- goto loop;   |
            }                |
            print: <---------|
           .....
           .....

    1. `n` is the counter variable and `sum` is the sum of squares of all integers between 1 and 10.
    2. If n < 10, then the loop body is executed and the sum of squares of all integers between 1 and 10 is calculated.
    3. The value of n is incremented by 1 and the loop is repeated until n = 10.
    4. When n = 10, the loop is terminated and the program jumps to the print label and prints the sum of squares of all integers between 1 and 10.
    6. The program terminates.

    The program evaluates the statement sum = sum + n*n;  10 times. That is, the loop is executed 10 times and the sum of squares of all integers 
    between 1 and 10 is calculated.

   A program loop is a control flow structure that allows a block of code to be executed repeatedly. A loop consists of two main parts: 
     1. the control statement 
     2. the body of the loop

/* Calculate the sum of squares of all integers between 1 and 10 using loop
    #include<stdio.h>
    int main()
    {
        int n, sum = 0;
        for (n = 1; n <= 10; n++)// control statement: This is the part of the loop that determines whether the loop will execute or not. 
                                 // It includes the initialization, condition, and increment/decrement operation. For example, in a for loop, 
                                 // the control statement might look like this: for (int i = 0; i < 10; i++)
        {
            sum = sum + n * n;   // body of the loop: This is the part of the loop that gets executed as long as the condition in the control 
                                 // statement is true. It’s enclosed in curly braces {} following the control statement.
        }
        printf("Sum of squares of all integers between 1 and 10 is %d", sum);
        return 0;
    }
*/

/* 
Syntax:
   for( initialization; test condition; updation (increment or decrement))  // control statement
      {
          statement(s);   // body of the loop
      }
   while( condition)      // control statement
      {
          statement(s);   // body of the loop
      }
   do
      {
          statement(s);   // body of the loop
      }
     while( condition)    // control statement

Loops in programming can be categorized based on various factors. Here are some common categorizations:

1. Based on the position of the control statement (Loop Condition):
    - Pre-test loop (for and while loops): These loops evaluate the condition before each iteration. They are also known as Entry-Controlled 
       loops. For example, in a `for` loop, the condition is checked before the loop body is executed.
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
    - Post-test loop (do-while loop): These loops evaluate the condition after each iteration. This ensures that the loop body is executed at 
      least once, regardless of the condition. They are also known as Exit-Controlled loops. For example:
     
     int i = 0;
     do {
         printf("%d ", i);
         i++;
     } while(i < 10);
     
2. Based on the number of iterations (Loop Control Variable):
   - Counter-Controlled Loop (Definite Loop): The number of iterations is known before the loop starts. This is typically controlled by a counter 
     variable that is initialized before the loop starts, and then incremented or decremented with each iteration of the loop. This is often 
     implemented using a `for` loop. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
   - Sentinel-Controlled Loop (Indefinite Loop): The number of iterations is not known in advance. The loop continues until it encounters a 
     special value (the sentinel). This is common when you don't know how many times you need to loop, such as reading user input or processing 
     data from a file until a certain condition is met. This can be implemented using `while` or `do-while` loops. For example:
     
     int i;
     while(scanf("%d", &i), i != -1) {
         printf("%d ", i);
     }
     
        int input;
        do {
            printf("Enter a number (0 to stop): ");
            scanf("%d", &input);
        } while(input != 0);  //In this example, 0 is the sentinel value. The loop will continue to ask for input until the user enters 0.
        
        int input, sentinel = -1;
        do {
            printf("Enter a number (-1 to stop): ");
            scanf("%d", &input);
        } while(input != sentinel);  //In this example, -1 is the sentinel value. The loop will continue to ask for input until the user enters -1.

3. Based on Loop Structure:
   - Simple Loop: Basic loop structure with a single condition and loop body. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
   - Nested Loop: One loop embedded within another. For example:
     
     for(int i = 0; i < 5; i++) {
         for(int j = 0; j < 5; j++) {
             printf("%d ", i*j);
         }
         printf("\n");
     }
   - Infinite Loop: Loop that never terminates (usually unintentional). For example:
     
     while(1) {
         printf("This is an infinite loop\n");
     }
     
4. Based on the Number of Control Statements:
   - Single-Control Loop: Only one control statement is present. This is typically a `for` loop, where the initialization, condition check, and 
     increment/decrement are all part of a single statement. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
   - Multiple-Control Loop: More than one control statement is present. This is typically a `while` or `do-while` loop, where the initialization 
     is done before the loop, the condition check is done as part of the loop statement, and the increment/decrement is done inside the loop body. 
     For example:
     
     int i = 0;
     while(i < 10) {
         printf("%d ", i);
         i++;
     }
     
5. Based on Flag Control:
   - Flag-Controlled Loop: A type of loop that uses a boolean flag to control its execution. A flag is a variable (usually a boolean) that signals 
     when a certain condition is met. When the flag is set (usually to `true`), it indicates that a specific condition has occurred, and this can 
     be used to control the flow of the program. For example:
     
     int flag = 1;
     while(flag) {
         printf("The flag is set\n");
         flag = 0;
     }
     
6. Based on the Type of Data They Iterate Over:
   In C programming, loops are not typically categorized based on the type of data they iterate over. However, you can use different loops to 
   iterate over different types of data structures to get the similar functionality.

   - Array-Based Loop: This type of loop iterates over elements in an array. It's commonly used when you want to perform an operation on each 
     element in an array. It is also known as For-Each Loop or Range-Based Loop or Collection-Based Loop. For example:
     
     int arr[5] = {1, 2, 3, 4, 5};
     for(int i = 0; i < 5; i++) {
         printf("%d ", arr[i]);
     }
   - Pointer-Based Loop: This type of loop uses a pointer to iterate over elements in a data structure. For example:
     
     int arr[5] = {1, 2, 3, 4, 5};
     int *ptr = arr;
     for(int i = 0; i < 5; i++) {
         printf("%d ", *(ptr + i));
     }
     
7. Based on the Step:
    - Decrementing Loop: This type of loop reduces the counter variable in each iteration until a certain condition is satisfied. An example of 
      this is a for loop that counts downwards. For example:
     
     for(int i = 10; i > 0; i--) {
         printf("%d ", i);
     }
    - Incrementing Loop: This type of loop increases the counter variable in each iteration until a certain condition is satisfied. This is 
      commonly seen in most for loops. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
     
8. Based on the Order of Execution:
   - Sequential Loop: This type of loop executes the loop body sequentially. For example:
   
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
     printf("\n");
     
   - Parallel Loop: This type of loop executes the loop body in parallel. For example:
     
     #pragma omp parallel for  //The #pragma omp parallel for directive tells the compiler to execute the following for loop in parallel.
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
     printf("\n");  

   Please note that the output of the parallel loop may not be in order due to the nature of parallel execution. Also, using parallel programming 
   constructs like OpenMP requires a system with multiple processing units (like a multi-core processor) and a compiler that supports it. Otherwise, 
   the code will just run sequentially.

Note that the following examples are based on the same loop, but they demonstrate different types of loops.   
    
- For Loop (Definite, Entry-Controlled, Single-Control):

for(int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
In this example, `i` is the counter. The loop will execute 10 times, and `i` will increment by 1 after each iteration.

- While Loop (Indefinite, Entry-Controlled, Multiple-Control):

int i = 0;
while(i < 10) {
    printf("%d\n", i);
    i++;
}
In this example, the loop will execute as long as `i` is less than `10`.

- Do-While Loop (Indefinite, Exit-Controlled, Multiple-Control):

int i = 0;
do {
    printf("%d\n", i);
    i++;
} while(i < 10);

*/
/****/

#include<stdio.h>
int main()
{
/*To take 5 nos. from user and find the product of the nos. using `for` loop*/
  int n,c,p;
  for (c = 0, p = 1; c < 5; c++)
  {
   printf("\n Enter number:");scanf("%d",&n);
   p*=n; 
  }  
  printf("\n Product of numbers:%d",p);

/*To take 5 nos. from user and find the sum of the nos. using `while` loop*/
  int num,count=0,s=0;
  while(count<5) 
  {
   printf("\n Enter number:");scanf("%d",&num);
   s+=num;
   count+=1; 
  }  
  printf("\n Sum of numbers:%d",s);  

  /*To take 5 nos. from user and find the sum of the nos. using `do-while` loop*/
  int number,num_count=0,sum=0;
  do
  {
   printf("\n Enter number:");scanf("%d",&number);
   sum+=number;
   num_count+=1; 
  }  
  while(num_count<5);
  printf("\n Sum of numbers:%d",sum);

  return 0;
}