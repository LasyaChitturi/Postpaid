#include<stdio.h>
int main()
{
	char  planname[30];
	int monthlyRental,freeInternet,freeCalls,freeSMS,CallCharges,SMSCharges,Datacharges,Roamingcharges ;
printf("WELCOME\n");
scanf("%S %d %d",&planname,&monthlyRental,&freeSMS);

if(planname=="one month" ||monthlyRental=="99"||freeSMS=="1000"){
	printf("The detail of ONE Month plan are:\n");
	printf("MonthlyRental=99rupee\t FreeInternet=12gb/day\t FreeCalls=50calls/day\t FreeSMS=1000/day\t CallCharges=50paisa/min\t SMSCharges=1rupee/msg \t DataCharges=1mb/min\t RoamingCharges=1rupee/min\n ");
}else if (planname=="3 months"||monthlyRental=="399"||freeSMS=="3000")
	{printf("The detail of THREE Month plan are:\n");
	printf("MonthlyRental=399rupees\t FreeInternet=24gb/day\t FreeCalls=100calls/day\t FreeSMS=3000/day\t CallCharges=10paisa/min \t SMSCharges=1rupee/msg \t DataCharges=1mb/sec\t RoamingCharges=1rupee/min \n");
}
else if(planname=="5 months"||monthlyRental=="599"||freeSMS=="5000")
{	printf("The detail of FIVE Month plan are:\n");
	printf("MonthlyRental=599rupees\t FreeInternet=30gb/day\t FreeCalls=150calls/day\t FreeSMS=5000/day\t CallCharges=10paisa/min\t SMSCharges=1rupee/msg\t DataCharges=2mb/sec\t  RoamingCharges=50paisa/min\n ");
}
else if(planname=="8 months"||monthlyRental=="799"||freeSMS=="8000")
{
	printf("The detail of EIGHT Month plan are:\n");
	printf("MonthlyRental=799rupees\t FreeInternet=40gb/day\t FreeCalls=250calls/day\t FreeSMS=8000/day\t CallCharges=1paisa/min\t SMSCharges=1rupee/msg\t DataCharges=2mb/sec\t  RoamingCharges=10paisa/min\n ");
}
else if(planname=="1 year"||monthlyRental=="999"||freeSMS=="unlimited")
{	printf("The detail of ONE YEAR plan are:\n");
	printf("MonthlyRental=999rupees\t FreeInternet=50gb/day\t FreeCalls=1000calls/day\t FreeSMS=unlimited \t CallCharges=1paisa/min\t SMSCharges=No charges\t DataCharges=6mb/sec\t  RoamingCharges=no charges\n ");
}
}
