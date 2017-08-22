/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int prime (unsigned int x)

{
  
int flag = 0;
 
 if (x == 1)
    
{
     
 flag = 1;
  
  }
 
 else
   
 {
     
 for (int y = 2; y <= x / 2; y++)

{
	
  if (x % y == 0)
  {
	    
  flag = 1;
	  
    break;
	   
 }

	
}
   
 }
  
return flag;


}


int main ()

{
  
unsigned int n, fn, fm, store;
 
 fn = 1;
  fm = 0;
  store = 0;
  
printf ("Enter a n value: ");
 
 scanf ("%u", &n);
 
 printf ("%u %u", fm, fn);

  if (n > 1)
   
 {
    
  for (int i = 2; n >= i; i++)
	
{
	
  store = fn;
	 
 fn += fm;
	 
 fm = store;
	 
 if (!prime (fn))
	
    printf (" BuzzFizz");
	 
 else if (fn % 5 == 0)
	  
  printf (" Fizz");
	 
 else if (fn % 3 == 0)
	   
 printf (" Buzz");
	  
else
	   
 printf (" %u", fn);

	
}
 
   }

  
return 0;

}

