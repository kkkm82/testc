#include <stdio.h>
main () {
	
	int i, k;
	float sum = 0;
	float hap = 12;
	
	for(i=2; i<=44; i+=2) {
		for(k=6; k<48; k+=2)
		hap = hap + k;
			if (k>=8)
				sum = sum + (i+6.0)/ hap;
			else
				sum = sum + (i+6.0)/ (12.0);
	}
	printf("sum = %f\n", sum);
	printf("i의 최종 값 = %d\n", i); 
	printf("k의 최종 값 = %d\n", k); 
	
	/* int k,i;
	float h=0;
	float s=0;
	for(k=6; k<=48; k+=2){
		for(i=2; i<=k; i=i+2)
		h = h + i;
	s= s + (k+2.0/h);
    }
    printf("%f", s); */
}
