#include <stdio.h>
#include <math.h>


void addition();
void substraction();
void multiplication();
void division();
void square();
void squareroot();
void percent();
void cube();
void factorial();
void exit();

int main(){
    
int number;

int i = 1 ;
do
{

    printf(" ** Calculator Started **\n\n");
    printf("1.Addition\n");
    printf("2.Substracion\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Square\n");
    printf("6.Square root\n");
    printf("7.Percentage\n");
    printf("8 Cube\n");
    printf("9.Factorial\n");
    printf("10.Exit\n\n");

printf("Choose Any Operation(0-10): ");
scanf("%d", &number);


switch (number)
{
case 1 : addition();
    break;
case 2 : substraction();
break;
case 3 : multiplication();
break;
case 4 : division();
break;
case 5 : square();
break;
case 6 : squareroot();
break;
case 7 : percent();
break;
case 8 : cube();
break;
case 9 : factorial();
break;
case 10 : exit(0);

default: printf("Not a valid input.\n");
    break;
}

printf("----------------------------------------\n");
i++;
} while( number = 1);


   return 0;
}



void addition(){
    float a,b;
    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Sum is: %.2f\n", a+b);
    
}

void substraction(){
     float a,b;
    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Answer is: %.2f\n", a-b);
}

void multiplication(){
       float a,b;
    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Answer is: %.2f\n", a*b);
}

void division(){
           float a,b;
    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Answer is: %.2f\n", a/b);
}

void square(){
            int num;
            
            printf("Enter Number: ");
            scanf("%d", &num);
 int square = num*num;
            printf(" Answer is: %d\n", square);
}

void squareroot(){
    int number,squareofnumber;

    printf("Enter Number: ");
    scanf("%d", &number);

    squareofnumber = sqrt(number);

    printf("Answer is : %d\n", squareofnumber);

}

void percent(){
   float percentage;
   float total_value ;
   printf("Enter Total Value:" );
   scanf("%f", &total_value);

   float value ;
   printf("Enter Value: ");
   scanf("%f", &value);

   percentage = value / total_value * 100.0;
   printf("Percentage = %.2f%%\n", percentage);

}

void cube(){
    int number ;
    printf("Enter Number: ");
    scanf("%d", &number);

    int ans = number* number * number;
    printf("Your Answer is :%d\n", ans);
}

void factorial(){
        int n,i;
    int fact = 1;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if( n < 0)
    printf("invalid input");

    else{
        for( i = 1; i<=n; ++i){
            fact *= i ;
        }
        printf("Answer is :%d\n",fact);
    }
}

