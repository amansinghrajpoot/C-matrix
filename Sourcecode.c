#include <stdio.h>
#include <stdlib.h>



int main ()
{
  int width = 0, height = 0, *arr, *tarr, *ttarr,*arr1, temp = 0, r = 0, c = 0, i = 0, j =
    0, tsum = 0, sum = 0;
  printf ("Enter width and Height of matrix\n");
  scanf ("%d%d", &width, &height);
  arr = (int *) malloc (height * width * sizeof (int));
  printf ("\nEnter values for matrix between 0-9 seprated by space.\n");
  for (r = 0; r < height; r++)
    {
      for (c = 0; c < width; c++)
	{
	  scanf ("%d", &temp);
	  if (temp >= 0 && temp <= 9)
	    {
	      *(arr + r * width + c) = temp;
	    }
	  else
	    {
	      printf ("Invalid Number, please enter again\n");

	      c = c - 1;
	    }

	}

    }
  printf ("\nEntered matrix\n");
  //..........................................................................................

  for (r = 0; r < height; r++)
    {
      for (c = 0; c < width; c++)
	{
	  printf ("%d ", *(arr + r * width + c));
	}
      printf ("\n");
    }

    printf ("\n");



  //...............................................................................................
  tarr = arr;
  for (i = 0; i < height-2; i++)
    {
      arr1 = arr + i * width;
      tarr = arr1;
      for (j = 0; j<width - 2; j++)
	  {
	       ttarr=tarr + j;

	       for (r = 0; r < 3; r++)
	      {
	         for (c = 0; c < 3; c++)
		     {
              if(r==1&&c==1)
		      printf ("  ");
              else
               {
                printf ("%d ", *(ttarr + r * width + c));
                tsum= tsum+ *(ttarr + r * width + c);
               }
		  }
	      printf ("\n");
	    }
	  printf ("\n");
	  printf("%d\n",tsum);
	  if(tsum>sum)
	  sum=tsum;
	  tsum=0;
	  printf ("\n");

	}
    
    }


printf("\n%d is the max sum",sum);




  return 0;
}
