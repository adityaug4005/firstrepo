#include<stdio.h>
// pattern questions
/*
int main(){
    int n;

    printf("enter a number");
    scanf("%d",&n);

    for(int i =1; i<=n ; i++){
        for(int j=1; j<=i ;j++){
            printf("*");
        }
        printf(" \n");
    }


    return 0;

}
*/

/*
int main(){
  int n;
  printf("enter a number \n");
  scanf("%d",&n);

  for(int i =n ;i>=1 ;i--){
    for(int j =1; j<=i; j++){
                    printf("*");

    }
    printf("\n");
  }

    return 0;

}

*/
/*
int main()
{
    int num1, num2;
    char mathOperation;
    printf("Enter what math operation you would like to use : ('+', '-', ..): ");
    scanf("%c", &mathOperation);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    switch (mathOperation)
    {
    case '+':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 + num2);
        break;
    case '-':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 - num2);
        break;
    case '*':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 / num2);
        break;
    case '%':
        if (num2 == 0)
            printf("You cannot divide by 0! \n");
        else
            printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 % num2);
        break;
    default:
        printf("Wrong mathematical operation.. Try again. \n");
        break;
    }
}
*/

/*
int main()
{
    int totalSeconds;

    int hours, minutes, remainingSeconds;

    printf("Enter seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds - hours * 3600) / 60;
    remainingSeconds = (totalSeconds - hours * 3600) % 60;

    if (hours < 10)
        printf("0");
    printf("%d : ", hours);
    if (minutes < 10)
        printf("0");
    printf("%d : ", minutes);
    if (remainingSeconds < 10)
        printf("0");
    printf("%d\n", remainingSeconds);

    return 0;
}
*/

// find next day on a calender

int main()
{
    int day, month, year;
    int leapYear = 0; // Default

    printf("Enter the day: ");
    scanf("%d", &day  );

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    // Find if a given year is Leap or Not Leap
    if (month == 2) // If it's February
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            leapYear = 1;

    day += 1; // day = day + 1;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day <= 31)
            break;// That's OK :)
    case 4:
    case 6:
    case 9:
    case 11:
        if (day <= 30)
            break;
    case 2: // February
        if (day <= 29 && leapYear == 1)
            break;
        else if (day <= 28)
            break;
    default:
        day = 1;
        month += 1; // month = month + 1
        if (month > 12)
        {
            month = 1;
            year += 1; // year = year + 1
        }
    }
        printf("The Next Awesome Day is: %d/ %d/ %d\n", day, month, year);

    return 0 ;
}
/*

// Arrays
int main(){
    int array[10];
    array={3,56,5,4,3,3};
   printf( "%d",array[1]);
   return 0;
}*/