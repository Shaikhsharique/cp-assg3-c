#include <stdio.h>
/*
  Roll No.: 38
  Student Name: Sharique Shaikh
  Program Title: WAP to print the first 10 elements of the Fibonacci series.

  Task Given By:
    - Roll No. of Assignee: 41
    - Assignee Name: Hunain Shaikh
*/
int main(){
    int f0 = 0, f1 = 1, f2;
    printf("The first 10 values of the Fibonacci series are :\n");
    printf("%i %i", f0, f1);
        for(int i = 2; i < 10; i++){
            f2 = f1 + f0;
            printf(" %i", f2);
            f0 = f1;
            f1 = f2;
        }
    return 0;
}
/*
                    ---Output---

The first 10 values of the Fibonacci series are :
0 1 1 2 3 5 8 13 21 34
*/
