#include <stdio.h>
#include<math.h>
typedef struct {
   int seconds;
   int minutes;
   int hours;
}TimeType;

void differenceBetweenTimePeriod(TimeType * ArrStruct);

int main() {
   TimeType ArrStruct[3];
   for(int i=0;i<2;i++)
   {
      if(i==0)
      {
         printf("Enter the start time 'Hours then minutes then seconds': ");
      }
      else
      {
         printf("Enter the end time 'Hours then minutes then seconds': " );
      }
      scanf("%d",&ArrStruct[i].hours);
      scanf("%d",&ArrStruct[i].minutes);
      scanf("%d",&ArrStruct[i].seconds);
   }
   differenceBetweenTimePeriod(ArrStruct);
   printf("Time period one :%d : %d : %d\n",ArrStruct[0].hours,ArrStruct[0].minutes,ArrStruct[0].seconds);
   printf("Time period two :%d : %d : %d\n",ArrStruct[1].hours,ArrStruct[1].minutes,ArrStruct[1].seconds);
   printf("The diffrence between the two period time :%d : %d : %d",ArrStruct[2].hours,ArrStruct[2].minutes,ArrStruct[2].seconds);
   return 0;
}

// Computes difference between time periods
void differenceBetweenTimePeriod(TimeType *ArrStruct)
{
	ArrStruct[2].hours = abs(ArrStruct[0].hours - ArrStruct[1].hours);
	ArrStruct[2].minutes   = abs(ArrStruct[0].minutes   - ArrStruct[1].minutes	);
	ArrStruct[2].seconds   = abs(ArrStruct[0].seconds   - ArrStruct[1].seconds	);
}