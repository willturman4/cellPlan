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
	
	printf("Enter the number of GB in your data plan:");
	scanf("%lf", &numberOfGB);
	
	printf("Enter the current day in the 30 day period:");
	scanf("%lf", &currentDay);
	
	printf("Enter the total number of GB's used so far:");
	scanf("%lf", &GBUsed);
	
	daysRemaining== 30-currentDay;
	
	averageDailyUse== GBUsed/currentDay;
	
	averageMonthlyUse= numberOfGB/30;
	
	remainingGB== numberOfGB-GBUsed;
	
	suggestedGBPlan==remainingGB/daysRemaining;
	
	monthlyUse== averageDailyUse/30;
	
	printf("%lf days used, %lf days remaining", currentDay, daysRemaining);
	printf("Average daily use: %lf GB/day", averageDailyUse);
	
	if(averageDailyUse>averageMonthlyUse) {
		printf("You are EXCEEDING your average daily use (%lf GB/day), Continuing this high usage, you'll exceed your data plan by (%lf) GB", averageMonthlyUse, monthlyUse);
		
		printf("To stay below your data plan, use no more than %lf GB/day.", suggestedGBPlan);
	}
	if(averageDailyUse==averageMonthlyUse) {
		printf("You are ACCEPTABLE for your average daily use (averageMonthlyUse GB/day), Continuing this usage, you'll use up exactly all your data", );
		
		printf("To stay below your data plan, use no more than suggestedGBPlan GB/day.");
	}
	if(averageDailyUse<averageMonthlyUse) {
		printf("You are UNDER for your average daily use (averageMonthlyUse GB/day), Continuing this low usage, you'll have (monthlyUse) GB left over");
	
		printf("To stay below your data plan, use no more than suggestedGBPlan GB/day.");
	}
	if (numberOfGB<GBUsed) {
		printf("You are currently out of data");
	}
	
	return 0;
}









