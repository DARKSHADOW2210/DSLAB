#include <stdio.h>

enum Weekdays {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};

int main() {
	enum Weekdays today;
    int userDay;
    printf("Enter a day of the week (0-6): ");
    scanf("%d", &userDay);
    if(userDay<0 || userDay>6){
		printf("Invalid input. Please enter a value between 0 and 6.\n");
	}
		 switch (userDay) {
            case SUNDAY:
                printf("It's a relaxing day!\n");
                break;
            case MONDAY:
                printf("Start of the workweek.\n");
                break;
            case TUESDAY:
            case WEDNESDAY:
            case THURSDAY:
                printf("It's a regular workday.\n");
                break;
            case FRIDAY:
                printf("Weekend is almost here!\n");
                break;
            case SATURDAY:
                printf("It's the weekend!\n");
                break;
            default:
                printf("Invalid day!\n");
     }
}
