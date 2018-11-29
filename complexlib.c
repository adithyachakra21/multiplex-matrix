#include <stdio.h>
#include <stdlib.h>

typedef struct {
   float real;
   float imag;
} complex;

complex addComplex (complex x, complex y);
float absval (float x);
float squareRoot (float x, float accuracy);
complex subtractComplex (complex x, complex y);
complex multiplyComplex (complex x, complex y);
float magnitudeComplex (complex x, float accuracy);
int squareRootComplex (complex x, complex *output, float accuracy);


complex addComplex (complex x, complex y) {
   complex sum;
   sum.real = x.real + y.real;
   sum.imag = x.imag + y.imag;
   return sum;
}

float absval (float x) {
   if (x<0) {
      return -1*x;
   }
   else {
      return x;
}
}

float squareRoot (float x, float accuracy) {
   float estimate = x * 0.5;
   
   while (absval (x - (estimate * estimate)) > accuracy) {
      estimate = 0.5*(estimate + (x / estimate));
   }
   return estimate;
}  

complex subtractComplex (complex x, complex y) {
   complex difference;

   difference.real = x.real - y.real;
   difference.imag = x.imag - y.imag;

   return difference;
}

complex multiplyComplex (complex x, complex y) {
   complex product;

   product.real = (x.real*y.real) - (x.imag*y.imag);
   product.imag = (x.real*y.imag) + (x.imag*y.real);

   return product;
}

float magnitudeComplex (complex x, float accuracy) {

   float magn_squared = ((x.real * x.real) + (x.imag * x.imag));
  

   return squareRoot (magn_squared,accuracy);
} 

int squareRootComplex (complex x, complex *output, float accuracy) {
   float delta = 0;
   float gamma = 0;
   complex output1;
   complex output2;

   float mod = magnitudeComplex (x, accuracy);

   gamma = squareRoot ((0.5*(x.real + mod)), accuracy);

   if (x.imag==0) {
      delta = 0;
   }
   
   else if (x.imag > 0) {
      delta = squareRoot ((0.5*((-1*x.real)+mod)), accuracy);
   }

   else if (x.imag < 0) {
      delta = -1*squareRoot (((0.5*(-1*x.real)+mod)), accuracy);
   }

   output1.real = gamma;
   output1.imag = delta;

   output2.real = -1*gamma;
   output2.imag = -1*delta;

   output[0] = output1;
   output[1] = output2;

   return 0;
}

/*
int main (void){
   
   complex m[2];
   complex a;
   complex b;

   float p;
   
   a.real = 8;
   a.imag = 5;

   b.real = 7;
   b.imag = 3;

   r = squareRootComplex (a,m,0.001);
   p = (m[0]).imag;

   printf ("Magnitude is %f\n", p);
   return 0;
}  
*\


