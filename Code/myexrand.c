#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mycoeffs.h"

int  main(void) //main function begins
{
 
//Uniform random numbers
uniform("uni.dat", 1000000);

//Gaussian random numbers
gaussian("gau.dat", 1000000);

//Mean of uniform
printf("mean of uniform= %lf\n",mean("uni.dat"));

//var of uniform
printf("variance of uniform= %lf\n",var("uni.dat"));


//Mean of gauss
printf("mean of gauss= %lf\n",mean("gau.dat"));

//var of gauss
printf("variance of gauss= %lf\n",var("gau.dat"));

return 0;
}


