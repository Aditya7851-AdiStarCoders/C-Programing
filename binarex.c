/******************************************************************************
// Binary Search using C
*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main()
{
   int data[100],i,size,X,mid=0,low=0,high, flag=0, loc=0;


   printf("\n enter how many numbers you want");
   scanf("%d",&size);
   for(i=0;i<=size-1;i++)
   {
      printf("\n enter number %d:", (i+1));
      scanf("%d", &data[i]);

   }
   printf("\n enter the number you want to search");
   scanf("%d",&X);

   low=0;
   high=size-1;

   while(low<=high)
   {
      mid=(low+high)/2;

      if(X==data[mid])
      {
      flag=1;
      loc=mid+1;
      break;
      }
      else if (X>data[mid])
      {
         high=mid-1;
      }
      else
      {
       low=mid+1;
      }
}

      if(flag==1)
      {
         printf("\n %d is found at %d location", X, loc);
      }
      else
      {
         printf("\n %d not found   high %d   low %d ", X,high,low);
      }



    return 0;
}
