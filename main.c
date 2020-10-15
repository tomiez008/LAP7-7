#include <stdio.h>

int main(void) {
  char   name[100] ;
  int    temp[7][2] ;
  int    Min =0 , Max =0 , MidH =0 , MidL =0;
  float  SumH=0 , SumL=0 ;

  char*   days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  int     pointerHi =0 , pointerLo =0;

  printf("\nEnter your name : ");
  scanf("%s",name);
  printf("\n\nHello %s",name);
  printf("\n**************************************");

  for(int i = 0 ; i < 7 ; i++){
    for(int j = 0 ; j < 2 ;j++){
      printf("\n High Temp  %s  : ",days[i]);
      scanf("%d",&temp[i][j]);
      j++;
      printf(" Low  Temp  %s  : ",days[i]);
      scanf("%d",&temp[i][j]);
    }
    //Find Max-Min and SumH-SumL
    if(temp[pointerHi][0] < temp[i][0] ){
        pointerHi = i;
      }
    if(temp[pointerLo][1] > temp[i][1]){
        pointerLo = i; 
      }
    SumH = SumH + temp[i][0];
    SumL = SumL + temp[i][1];
  }
 
  printf("\n**************************************\n");
  
    Max = temp[pointerHi][0];
    Min = temp[pointerLo][1];
    MidH = temp[((7+1)/(2))-1][0];
    MidL = temp[((7+1)/(2))-1][1];

printf("Max Temperature is  %d C ",Max);
printf("\nLow Temperature is  %d C ",Min);
printf("\nAverage High Temperature is  %f C ",SumH/7);
printf("\nAverage Low  Temperature is  %f C ",SumL/7);
printf("\nMedian  High Temperature is  %d C ",MidH);
printf("\nMedian  Low  Temperature is  %d C ",MidL);


}
  
