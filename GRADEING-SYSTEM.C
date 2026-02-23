

#include<stdio.h>
int main()
{
int mark;
scanf("%d",&mark);
 if(mark>=91&&mark<100) printf("O");
else if(mark>=81&&mark<90) printf("A+");
else if(mark>=71&&mark<80) printf("A");
else if(mark>=61&&mark<70) printf("B+");
else if(mark>=51&&mark<60) printf("B");
else if(mark>=41&&mark<50) printf("C+");
else if(mark>=31&&mark<40) printf("C");
else if(mark>=21&&mark<30) printf("PASS");
else if(mark>=00&&mark<20)   printf("FAIL");
}