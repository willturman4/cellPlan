/*
  Programmer's Name:William Turman, David Ho
  NUID: 05032615, 
  Date: 1/28/2020
  Description of the program: Calculation of GB in a data plan how how much you have used
*/

#include<stdio.h>
#include<math.h>

int main(void) {
	
	double numberOfGB;
	double currentDay;
	double GBUsed;
	double remainingGB;
	double daysRemaining;
	double averageDailyUse;
	double suggestedGBPlan;
	double averageMonthlyUse;
	double monthlyUse;
	
	printf("Enter the number of GB in your data plan:\n");
	scanf("%lf", &numberOfGB);
	
	printf("Enter the current day in the 30 day period:\n");
	scanf("%lf", &currentDay);
	
	printf("Enter the total number of GB's used so far:\n");
	scanf("%lf", &GBUsed);
	
	daysRemaining= 30-currentDay;
	
	averageDailyUse= GBUsed/currentDay;
	
	averageMonthlyUse= numberOfGB/30;
	
	remainingGB= numberOfGB-GBUsed;
	
	suggestedGBPlan=remainingGB/daysRemaining;
	
	monthlyUse= (averageDailyUse*30)-numberOfGB;
	
	printf("%lf days used, %lf days remaining\n", currentDay, daysRemaining);
	printf("Average daily use: %lf GB/day\n", averageDailyUse);
	
	if(averageDailyUse>=averageMonthlyUse && remainingGB>0) {
		printf("You are EXCEEDING your average daily use (%lf GB/day), Continuing this high usage, you'll exceed your data plan by (%lf) GB\n", averageMonthlyUse, monthlyUse);
		
		printf("To stay below your data plan, use no more than %lf GB/day.\n", suggestedGBPlan);
	}
	else if(averageDailyUse==averageMonthlyUse) {
		printf("You are ACCEPTABLE for your average daily use (%lf GB/day), \n", averageMonthlyUse);
		
		printf("To stay below your data plan, use no more than %lf GB/day.\n", suggestedGBPlan);
	}
	else if(averageDailyUse<=averageMonthlyUse) {
		printf("You are UNDER for your average daily use (%lf GB/day), You can use up to %lf GB/day and stay below your data plan limit\n", averageMonthlyUse, suggestedGBPlan);
	}
	if (0>=remainingGB) {
		printf("You are currently out of data\n");
	}
	
	return 0;
}









