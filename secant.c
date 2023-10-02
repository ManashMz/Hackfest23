#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define f(x) pow(x,3)-4*x+1
int main()
{
    float x0,x1,x2,f0,f1,f2,er=0.0001;
    int count=1,max_ite=10;
    printf("enter the values of x0 and x1");
    scanf("%f%f",&x0,&x1);
    f0=f(x0);
    f1=f(x1);
     do{
          if(f0 == f1)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }
         
         x2=( ((x0)*(f1))-((x1)*(f0))  )/( f1-f0 );
         f2=f(x2);
         printf("\nvalue of x2 and f2 in the iteration no %d are : %.4f\t %.4f\n",count,x2,f2);
         x0=x1;
         x1=x2;
         f0=f1;
         f1=f2;
        if(count > max_ite)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
         count++;
    }while(fabs(f2)>er);
    printf("\nroot of the equation is : %.4f \n\n",x2);
  
return 0;

}