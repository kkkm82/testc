#include <stdio.h>
main() {
	char hh[]="We are the champion";
	char Large[80]="We are the champion";
	char Small[80]="We are the champion";
	
	int k;
    for(k=0;Large[k]!='\0';k++) {
        if(Large[k] >= 'a' && Large[k] <= 'z')
       		Large[k] -=32;
       		printf("%c", Large[k]); 
       	}
       	printf("\n");
    
    int i;
    for(i=0;Small[i]!='\0';i++) {
        if(Small[i] >= 'A' && Small[i] <= 'Z')
       		Small[i] +=32;
       		printf("%c", Small[i]); 
       	}
	
	printf("\n\n\n기본 형태 : %s\n", hh);
	printf("%s\n", Large); // 대문자 
	printf("%s\n", Small); // 소문자 
	
}
