//C program to display Cruz Tech
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int opp,d,i,gcd,HCF,lcm,exponent,f=1,base;
    int Num1,Num2;
    char c;
    long long power=1;
    float results,results1,results2,w,x,y,z,root,root1,root2;
do{
    printf("# Welcome to K9 Tech # \n");
    printf("# Contact Cruz Tech at +237682726566 or email K9 Tech at mnkitzito@gmail.com \n");
    printf("#K9 Tech is Proudly Sponsored by Bill'sUpdates, Ambition Motors, Lydia's Foundation and KADEV Inc \n");
    printf("0. Exit: \n");
    printf("1. Addition: \n");
    printf("2. Subtraction: \n");
    printf("3. Multiplication: \n");
    printf("4. Division: \n");
    printf("5. Modulus: \n");
    printf("6. Average: \n");
    printf("7. Square: \n");
    printf("8. Sine: \n");
    printf("9. Cos: \n");
    printf("10. square Root: \n");
    printf("11. Cube Root: \n");
    printf("12. Log10: \n");
    printf("13. Tan: \n");
    printf("14. Factorial: \n");
    printf("15. HCF: \n");
    printf("16. LCM: \n");
    printf("17. Power Series: \n");
    printf("18. Quadratic Equation: \n");
    printf("Select Operation: ");
    scanf("%d",&opp);

switch(opp){

case 0:
    printf("Exit \n");
    printf("K9 Tech is proudly sponsored by Bill'sUpdates, Ambition Motors, Lydia's Foundation and KADEV Inc: \n");
    printf("contact K9 Tech at +237682726566 or email Cruz Tech at mnkitzito@gmail.com: \n");
    printf("Thanks for patronizing K9 Tech: \n");
    exit(0);
    break;

case 1:
    printf("Addition: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    results=Num1+Num2;
    printf("Addition of %d and %d is %f",Num1,Num2,results);
    break;

case 2:
    printf("Subtraction: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    results=Num1-Num2;
    printf("Subtraction of %d and %d is %f", Num1,Num2,results);
    break;

case 3:
    printf("Multiplication: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    results=Num1*Num2;
    printf("Multiplication of %d and %d is %f",Num1,Num2,results);
    break;

case 4:
    printf("Division: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    while(Num2==0){
        printf("Denominator Cannot be Zero, input another number:");
        scanf("%d",&Num2);
    }
    results=Num1/Num2;
    printf("Division of %d and %d is %f",Num1,Num2,results);
    break;

case 5:
    printf("Modulus: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    results=Num1%Num2;
    printf("Modulus of %d and %d is %f",Num1,Num2,results);
    break;

case 6:
    printf("Average: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    results=(Num1+Num2)/2;
    printf("Average of %d and %d is %f",Num1,Num2,results);
    break;

case 7:
    //square1 = Num1*Num1;
    //square2 = Num2*Num2;
    if(opp==7){
    printf("Square: \n");
    printf("do you want to square two numbers? (y/n): \n");
    scanf("%c",&c);
    scanf("%c",&c);
    }
    if(c=='n'){
        printf("Square: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        results=Num1*Num1;
        printf("Square of %d is %f",Num1,results);
    }
    else if(c=='y'){
        printf("Square: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        printf("Num2: ");
        scanf("%d",&Num2);
        results1=Num1*Num1;
        results2=Num2*Num2;
        printf("Square of %d and %d is %f and %f",Num1,Num2,results1,results2);
    }
        else{
            printf("invalid input");
        }
        break;

case 8:
    //sine1 = sine(Num1);
    //sine2 = sine(Num2);
    if(opp==8){
        printf("Sine: \n");
        printf("do you want sine of two numbers? (y/n): \n");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    if(c=='n'){
        printf("Sine: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        results=sin(Num1*3.14159/180);
        printf("sine of %d is %f",Num1,results);
    }
    else if(c=='y'){
        printf("Sine: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        printf("Num2: ");
        scanf("%d",&Num2);
        results1=sin(Num1*3.14159/180);
        results2=sin(Num2*3.14159/180);
        printf("Sine of %d and %d is %f and %f",Num1,Num2,results1,results2);
    }
    else{
        printf("invalid input");
    }
    break;

case 9:
    if(opp==9){
        printf("Cos: \n");
        printf("do you want cos of two numbers? (y/n): \n");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    if(c=='n'){
        printf("Cos: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        results=cos(Num1*(22/7)/180);
        printf("Cos of %d is %f",Num1,results);
    }
    else if(c=='y'){
        printf("Cos: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        printf("Num2: ");
        scanf("%d",&Num2);
        results1=cos(Num1*(22/7)/180);
        results2=cos(Num2*(22/7)/180);
        printf("Cos of %d and %d is %f and %f",Num1,Num2,results1,results2);
    }
    else{
        printf("invalid input");
    }
    break;

case 10:
    //sqrt = (Num1)^1/2;
    //sqrt = (Num2)^1/2;
    if(opp==10){
    printf("Square Root: \n");
    printf("do you want square root of two numbers? (y/n): \n");
    scanf("%c",&c);
    scanf("%c",&c);
    }
    if(c=='n'){
    printf("Square Root: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    results=sqrt(Num1);
    printf("Square Root of %d is %f",Num1,results);
    }
    else if(c=='y'){
        printf("Square Root: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        printf("Num2: ");
        scanf("%d",&Num2);
        results1=sqrt(Num1);
        results2=sqrt(Num2);
        printf("Square Root of %d and %d is %f and %f",Num1,Num2,results1,results2);
    }
    else{
        printf("invalid input");
    }
    break;

case 11:
    //cbrt1 = Num1^1/3;
    //cbrt2 = Num2^1/3;
    if(opp==11){
        printf("Cube Root: \n");
        printf("do you want cube root of two numbers? (y/n): \n");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    if(c=='n'){
        printf("Cube Root: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        results=cbrt(Num1);
        printf("Cube Root of %d is %f",Num1,results);
    }
    else if(c=='y'){
        printf("Cube Root: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        printf("Num2: ");
        scanf("%d",&Num2);
        results1=cbrt(Num1);
        results2=cbrt(Num2);
        printf("Cube Root of %d and %d is %f and %f",Num1,Num2,results1,results2);
    }
    else{
        printf("invalid input");
    }
    break;

case 12:
    //log = log10(Num1);
    //log = log10(Num2);
    if(opp==12){
        printf("Log10: \n");
        printf("do you want log10 of two numbers? (y/n): \n");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    if(c=='n'){
        printf("Log10: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        while(Num1<0){
            printf("Log10 of a negative number does not exist, input another number: ");
            scanf("%d",&Num1);
        }
        results=log10(Num1);
        printf("log10 of %d is %f",Num1,results);
    }
    else if(c=='y'){
        printf("Log10: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
        while(Num1<0){
            printf("Log10 of a negative number does not exist, input another number: ");
            scanf("%d",&Num1);
        }
        printf("Num2: ");
        scanf("%d",&Num2);
        while(Num2<0){
            printf("Log10 of a negative number does not exist, input another number: ");
            scanf("%d",&Num2);
        }
        results1=log10(Num1);
        results2=log10(Num2);
        printf("log10 of %d and %d is %f and %f",Num1,Num2,results1,results2);
    }
    else{
        printf("invalid input");
    }
    break;
case 13:
    if(opp==13){
        printf("Tan: \n");
        printf("do you want tan of two numbers? (y/n): ");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    if(c=='n'){
        printf("Tan: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
    while(Num1==90){
        printf("Tan of 90 is undefined, input another number: ");
        scanf("%d",&Num1);
    }
    results=tan(Num1*3.14159/180);
    printf("Tan of %d is %f",Num1,results);
    }
    else if(c=='y'){
        printf("Tan: \n");
        printf("Num1: ");
        scanf("%d",&Num1);
    while(Num1==90){
        printf("Tan of 90 is undefined, input another number: ");
        scanf("%d",&Num1);
    }
    printf("Num2: ");
    scanf("%d",&Num2);
    while(Num2==90){
        printf("Tan of 90 is undefined, input another number: ");
        scanf("%d",&Num2);
    }
    results1=tan(Num1*3.14159/180);
    results2=tan(Num2*3.14159/180);
    printf("Tan of %d and %d is %f and %f",Num1,Num2,results1,results2);
    }
    else{
        printf("invalid input:");
    }
    break;
case 14:
    //Factorial
    printf("Factorial: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    for(i=1;i<=Num1;i++)
        f=f*i;
    printf("Factorial of %d is %d",Num1,f);
    break;
case 15:
    //HCF
    printf("HCF: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    for(i=1; i<Num1 && i<=Num2; ++i){
        if(Num1%i==0 && Num2%i==0)
            gcd=i;
    }
    printf("HCF of %d and %d is %d",Num1,Num2,gcd);
    break;
case 16:
    printf("LCM: \n");
    printf("Num1: ");
    scanf("%d",&Num1);
    printf("Num2: ");
    scanf("%d",&Num2);
    for(i=1;i<=Num1 && i<=Num2; ++i){
        if(Num1%i==0 && Num2%i==0)
            gcd=i;
    }
    lcm=(Num1*Num2)/gcd;
    printf("LCM of %d and %d is %d",Num1,Num2,lcm);
    break;

case 17:
    printf("Power Series: \n");
    printf("Base: ");
    scanf("%d",&base);
    printf("exponent: ");
    scanf("%d",&exponent);
    for(i=1; i<=exponent; i++)
    {
        power=power*base;
    }
    printf("%d ^ %d =%d",base,exponent,power);
    break;

case 18:
    printf("Quadratic Equation: \n");
    printf("w: ");
    scanf("%f",&w);
    printf("x: ");
    scanf("%f",&x);
    printf("y: ");
    scanf("%f",&y);
    z=x*x-4*w*y;
    if(d<0){
        printf("Roots are complex number: \n");
        printf("Roots of quadratic equation are: ");
        printf("%.3f%+.3fi",-x/(2*w),sqrt(-z)/(2*w));
        printf(",%.3f%+.3fi",-x/(2*w),-sqrt(-z)/(2*w));
    }
    else if(z==0){
        printf("both roots are equal. \n");
        root1=-x/(2*w);
        printf("root of quadratic equation is %.3f",root1);
    }
    else{
        printf("roots are real numbers. \n");
        root1=(-x+sqrt(z))/(2*w);
        root2=(-x-sqrt(z))/(2*w);
        printf("roots of quadratic equation are: %.3f,%.3f",root1,root2);
    }
    break;

    default:
    printf("Syntactic Error!!!");
    printf("\n select operation: ");
    scanf("%d",&opp);
    break;
}
    printf("\nproceed to to other calculations?(y/n): ");
    scanf("%d",&d);
    scanf("%c",&c);
    //scanf("%d",&opp);
}
while((c=='y')&&(opp!=0));
}
