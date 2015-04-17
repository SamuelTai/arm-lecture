#include <stdio.h>
#include <time.h>
extern int fibonacci(int x);

int main(int argc, char **argv)

{
  int number=0;
  int i=0;  
  clock_t start_time;
  clock_t current_time;
  float time_interval;
  int a =-1;
  int b = 1;
  int c;
  scanf("%d",&number);
  start_time = clock();
  	for( i = 0 ;i <= number;i++)
  	{	
	 /* if( i <=2){ 
		current_time = clock();
		time_interval = current_time - start_time;
          	printf("The fibonacci sequence at %d is: %d   %f \n", i,1,time_interval );
		     }
	  else{*/
	  c = a+b;
	  a = b  ;
	  b = c  ;
	  current_time = clock();
	  time_interval = current_time - start_time;
          printf("The fibonacci sequence at %d is: %d   %f \n", i, c,time_interval);}

}
