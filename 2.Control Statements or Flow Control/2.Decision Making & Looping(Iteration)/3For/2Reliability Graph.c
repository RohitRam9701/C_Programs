/*Reliability Graph:
Problem:The reliability of an electronic component is given by
                        reliability (r) = e^-λt
where λ is the component failure rate per hour and t is the time of operation in hours. A graph is required to determine the reliability 
at various operating times, from 0 to 3000 hours. The failure rate (lambda) is 0.001.  */
#include <stdio.h>
#include <math.h>
#define LAMBDA 0.001
int main()
{
    double t;
    float r;
    int i, R;
    for (i=1; i<=27; ++i)
    {
        printf("--");
    }    
    printf("\n");
    for (t=0; t<=3000; t+=150)
    {
        r = exp(-LAMBDA*t);
        R= (int) (50*r+0.5);
        printf("|");
        for (i=1; i<=R; ++i)
        {
            printf("*");
        }
        printf("#\n");
    }
    for (i=1; i<3; ++i)
    {
        printf("|\n");
    }
    return 0;
}
/*The  given program produces a shaded graph. The values of t are self-generated by the for statement
                for (t=0; t 3000; t t+150) 
  in steps of 150. The integer 50 in the statement
                R= (int) (50*r+0.5) 
  is scale factor which converts r to a large value where an integer is used for plotting the curve. Remember r is always less than 1.*/