#include<cstdio>

int main() 
{
    //type identifier = value;
    double price = 499.90;    
    double tax = 0.08; //8% tax

    //type identifier;
    int age; //declared but unitialized
    //identifier value
    age = 23; //initialized

    //type identifier = exp;
    double finalPrice = price * (1 + tax);

    //printf is a function, we distinguish parameters using ','
    //.2%<type> makes so that we only show two decimal places
    printf("The final price is %.2f \n", finalPrice);
    printf("My age is %d.", age);
    return 0;
}