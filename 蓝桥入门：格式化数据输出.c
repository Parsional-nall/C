#include<stdio.h>
int main()
{

	float a[5][3]={{960.00,129500.00,1080.00},{10.30,27.57,8.20},{297.47,97000.00,264.80},{62.70,1635.00,3.60},{0.0298,27.80,0.23}};
	printf("---------------------------------------------------\n");
	printf("COUNTRY          AREA(10K  km2)    POP.(10K)    GDP(Billion$)\n");
	printf("---------------------------------------------------\n");
	printf("China                  %.2f            %.2f      %.2f\n",a[0][0],a[0][1],a[0][2]);
	printf("Iceland                %.2f            %.2f      %.2f\n",a[1][0],a[1][1],a[1][2]);
	printf("India                  %.2f            %.2f      %.2f\n",a[2][0],a[2][1],a[2][2]);
	printf("Madagascar             %.2f            %.2f      %.2f\n",a[3][0],a[3][1],a[3][2]);
	printf("Maldive                %.4lf           %.2lf      %.2lf\n"),a[4][0],a[4][1],a[4][2];
	printf("---------------------------------------------------\n");
}
