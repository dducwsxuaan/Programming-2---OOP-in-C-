#include<stdio.h>
#include<math.h>
//Implement the function f(x)
float f_x(float x){
    return x/2 * (1 + x+ 0.04 * x * x *x);
}

// Implement the log function
double ln(float x){
    double sum = 0;
    for (int i = 1; i < x; i++){
            sum += -(pow(0.5, i) / i);
    }    
    return sum;
}

int main(){
    float x;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("%f\n", f_x(x));
    printf("%f\n", ln(x));
    return 0;
}

