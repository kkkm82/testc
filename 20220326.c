#include <stdio.h>
main () {
	
	int i, k;
	float sum, hap = 0;
	
	for(i=2; i<=44; i+=2)
		for(k=0; k<48; k+=2)
		hap = (2.0+4.0+6.0+k);
		sum = sum + (i+6.0)/ (hap+k);
		
	printf("sum = %f\n", sum);
	printf("i�� ���� �� = %d\n", i); 
	printf("k�� ���� �� = %d\n", k); 
		
		 
	
	
}
