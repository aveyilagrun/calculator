#include <stdio.h>

float average(int a, int b, int c)
    {
        int average_of_three;
        average_of_three = (a + b + c) / 3;
        return average_of_three;
    }

int main()
{
    int input=0;
    int average_of_three=0;
    
    while(input!=4){
        printf("1: Average of 3 numbers\n");
        printf("2: Gregory-Leibniz series\n");
        printf("3: Square root\n");
        printf("4: Exit\n");
        scanf("%d", &input);
        
        if(input==1){
            
            float a, b, c;
            printf("Enter 3 variables\n");
            scanf("%f", &a);
            scanf("%f", &b);
            scanf("%f", &c);
            average_of_three=average(a,b,c);
            printf("Average = %d\n", average_of_three);
            
        } else if(input==2){
            
            int precision=0;
            int valueofpi=0;
            int n=1;
            
            printf("Enter the precision you want\n");
            scanf("%d", &precision);
            
            for(int i=0; i<precision; i++){
                valueofpi = valueofpi + ((-1)^i*4)/n;
                n+=2;
            }
            
            printf("pi = %p\n", &valueofpi);
            
        } else if(input==3){
            
            int number=0;
            int integer=0;
            float square=0;
            float another=0;
            
            printf("Enter an integer\n");
            scanf("%d", &number);
            
            square = number / 2;
            another = 0;
            
            
            while(square!=another){
                
                another = square;
                
                square = (number/another + another) /2;
            }
            
            integer=(int)square;
            ++integer;
            
            if((integer-square)!=1){
                printf("Square root of %d is -1\n", number);
            } else {
                printf("Square root of %d is %f\n", number, square);
            }
            
        } else if(input==4){
            printf("You exited the menu\n");
        } else {
            printf("Wrong input number\n");
        }
    
    }

    return 0;
}
