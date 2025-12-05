#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
    float a=0, b=0, c=0, A=0, B=0, C=0;
    printf("\n");
    printf("\t      A\n");
    printf("\t     /\\\n");
    printf("\t  c /  \\ b\n");
    printf("\t   /    \\\n");
    printf("\tB /______\\ C\n");
    printf("\t     a \n");
    
    printf("\nEnter any three values of triangle: \n");
    printf("If Value is unknown, Enter '0' \n");
    printf("Side AB (c): ");
    scanf("%f", &c);
    printf("Side BC (a): ");
    scanf("%f", &a);
    printf("Side CA (b): ");
    scanf("%f", &b);
    printf("Angle A: ");
    scanf("%f", &A);
    printf("Angle B: ");
    scanf("%f", &B);
    printf("Angle C: ");
    scanf("%f", &C);
    printf("\n");

    if(A!=0 && B!=0 && C!=0){
        printf("Sides cannot be calculated with only angles provided.\n");
    }

    else if(a!=0 && b!=0 && c!=0){
        int x = (a+b)>c;
        int y = (b+c)>a;
        int z = (a+c)>b;
        if(x && y && z){
            A = acos((b*b + c*c - a*a)/(2*b*c));
            B = acos((a*a + c*c - b*b)/(2*a*c));
            C = acos((a*a + b*b - c*c)/(2*a*b));
            printf("Angle A = %.2f\n", (A*180)/PI);
            printf("Angle B = %.2f\n", (B*180)/PI);
            printf("Angle C = %.2f\n", (C*180)/PI);
        }
        else{
            printf("Triangle Not Possible");
        }
    }

    else if(a!=0 && b!=0 && A!=0){
        if ((b * sin((A * PI) / 180)) / a > 1 || (b * sin((A * PI) / 180)) / a < -1) {
            printf("Triangle Not Possible");
        }
        else{
            B = asin((b*sin((A*PI)/180))/a);
            printf("Angle B = %.2f\n", (B*180)/PI);
            
            C = 180 - A - (B*180)/PI;
            printf("Angle C = %.2f\n", C);

            c = (a * sin((C * PI) / 180)) / sin((A * PI) / 180);
            printf("Side c = %.2f cm\n", c);
        }
    }

    else if(a!=0 && b!=0 && B!=0){
        if ((b * sin((B * PI) / 180)) / a > 1 || (b * sin((B * PI) / 180)) / a < -1) {
            printf("Triangle Not Possible");
        }
        else{
            A = asin((b*sin((B*PI)/180))/a);
            printf("Angle A = %.2f\n", (A*180)/PI);

            C = 180 - (A*180)/PI - B;
            printf("Angle C = %.2f\n", C);

            c = (b * sin((C * PI) / 180)) / sin((B * PI) / 180);
            printf("Side c = %.2f cm\n", c);
        }
    }


    else if(b!=0 && c!=0 && B!=0){
        if ((c * sin((B * PI) / 180)) / b > 1 || (c * sin((B * PI) / 180)) / b < -1) {
            printf("Triangle Not Possible");
        }
        else{
            C = asin((c * sin((B * PI) / 180)) / b);
            printf("Angle C = %.2f\n", (C*180)/PI);
            
            A = 180 - B - (C * 180) / PI;
            printf("Angle A = %.2f\n", A);

            a = (b * sin((A * PI) / 180)) / sin((B * PI) / 180);
            printf("Side a = %.2f cm\n", a);
        }
    }

    else if(b!=0 && c!=0 && C!=0){
        if ((b*sin((C*PI)/180))/c > 1 || (b*sin((C*PI)/180))/c < -1) {
            printf("Triangle Not Possible");
        }
        else{
            B = asin((b*sin((C*PI)/180))/c);
            printf("Angle B = %.2f\n", (B*180)/PI);
            
            A = 180 - C - (B*180)/PI;
            printf("Angle A = %.2f\n", A);

            a = (c * sin((A * PI) / 180)) / sin((C * PI) / 180);
            printf("Side a = %.2f cm\n", a);
        }
    }


    else if(c!=0 && a!=0 && A!=0){
        if ((c * sin((A * PI) / 180)) / a > 1 || (c * sin((A * PI) / 180)) / a < -1) {
            printf("Triangle Not Possible");
        }
        else{
            C = asin((c*sin((A*PI)/180))/a);
            printf("Angle C = %.2f\n", (C*180)/PI);
            
            B = 180 - A - (C*180)/PI;
            printf("Angle B = %.2f\n", B);
            b = (a * sin((B * PI) / 180)) / sin((A * PI) / 180);
            printf("Side b = %.2f cm\n", b);
        }
    }

    else if(c!=0 && a!=0 && C!=0){
        if ((a * sin((C * PI) / 180)) / c > 1 || (a * sin((C * PI) / 180)) / c < -1) {
            printf("Triangle Not Possible");
        }
        else{
            A = asin((a*sin((C*PI)/180))/c);
            printf("Angle A = %.2f\n", (A*180)/PI);
            
            B = 180 - C - (A*180)/PI;
            printf("Angle B = %.2f\n", B);

            b = (c * sin((B * PI) / 180)) / sin((C * PI) / 180);
            printf("Side b = %.2f cm\n", b);
        }
    }



    else if(A!=0 && B!=0 && a!=0){
        C = 180 - A - B;
        printf("Angle C = %.2f\n", C);

        b = (a * sin((B * PI) / 180)) / sin((A * PI) / 180);
        printf("Side b = %.2f cm\n", b);

        c = (a * sin((C * PI) / 180)) / sin((A * PI) / 180);
        printf("Side c = %.2f cm\n", c);
    }

    else if(A!=0 && B!=0 && b!=0){
        C = 180 - A - B;
        printf("Angle C = %.2f\n", C);

        a = (b * sin((A * PI) / 180)) / sin((B * PI) / 180);
        printf("Side a = %.2f cm\n", a);

        c = (b * sin((C * PI) / 180)) / sin((B * PI) / 180);
        printf("Side c = %.2f cm\n", c);
    }


    else if(B!=0 && C!=0 && b!=0){
        A = 180 - B - C;
        printf("Angle A = %.2f\n", A);

        a = (b * sin((A * PI) / 180)) / sin((B * PI) / 180);
        printf("Side a = %.2f cm\n", a);

        c = (b * sin((C * PI) / 180)) / sin((B * PI) / 180);
        printf("Side c = %.2f cm\n", c);
    }

    else if(B!=0 && C!=0 && c!=0){
        A = 180 - B - C;
        printf("Angle A = %.2f\n", A);

        a = (c * sin((A * PI) / 180)) / sin((C * PI) / 180);
        printf("Side a = %.2f cm\n", a);

        b = (c * sin((B * PI) / 180)) / sin((C * PI) / 180);
        printf("Side b = %.2f cm\n", b);
    }


    else if(C!=0 && A!=0 && a!=0){
        B = 180 - C - A;
        printf("Angle B = %.2f\n", B);

        b = (a * sin((B * PI) / 180)) / sin((A * PI) / 180);
        printf("Side b = %.2f cm\n", b);

        c = (a * sin((C * PI) / 180)) / sin((A * PI) / 180);
        printf("Side c = %.2f cm\n", c);
    }

    else if(C!=0 && A!=0 && c!=0){
        B = 180 - C - A;
        printf("Angle B = %.2f\n", B);

        a = (c * sin((A * PI) / 180)) / sin((C * PI) / 180);
        printf("Side a = %.2f cm\n", a);

        b = (c * sin((B * PI) / 180)) / sin((C * PI) / 180);
        printf("Side b = %.2f cm\n", b);
    }


    else if(a!=0 && b!=0 && C==90){
        c = sqrt(a*a + b*b);
        A = atan(a/b)*(180/PI);
        B = 90 - A;
        printf("Angle A = %.2f\n", A);
        printf("Angle B = %.2f\n", B);
        printf("Side c = %.2f cm\n", c);
    }

    else if(b!=0 && c!=0 && A==90){
        a = sqrt(c*c + b*b);
        B = atan(b/c)*(180/PI);
        C = 90 - B;
        printf("Angle B = %.2f\n", B);
        printf("Angle C = %.2f\n", C);
        printf("Side a = %.2f cm\n", a);
    }

    else if(c!=0 && a!=0 && B==90){
        b = sqrt(c*c + a*a);
        A = atan(a/c)*(180/PI);
        C = 90 - A;
        printf("Angle A = %.2f\n", A);
        printf("Angle C = %.2f\n", C);
        printf("Side b = %.2f cm\n", b);
    }

    else{
        printf("Insufficient or invalid data provided to calculate the triangle.\n");
    }

    return 0;
}