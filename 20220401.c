#include <stdio.h> 
main() {
	/*int a[10]={10,14,3,5,9,20,7,2,5,4};
	int i;
	for(i=0; i<10; i+=1)
		printf("%d\n", a[i]); */
		
	/* int a[10]={10,14,3,5,9,20,7,2,5,4};
	int i,max;
	for(i=0; i<10; i+=1){
		if(max<a[i])
			max=a[i];
	}
	printf("Maximum value = %d\n", max); */
	
	/* float jumsu[] = {80.2, 78.4, 99.0, 88.8, 92.5, 79.1, 91.7, 94.2, 81.6, 79.4 };
	int k;
	int cnt=0,cnt1=0,cnt2=0;
	for(k=0; k<10; k+=1) {
		if(jumsu[k] >= 90) 
			cnt+=1;
			 
		else if (jumsu[k] < 80) 
			cnt1+=1; 
		
		else if (jumsu[k]<90 && jumsu[k]>=80)
			cnt2+=1;
			 }
			
		printf("%d %d %d\n", cnt,cnt1,cnt2); */
		
	/* int v[]={23,48,56,24,12,8,72,64,32,15};
	int i;
	int c=0;
	for(i=0; i<10; i++) {
		if(v[i] >= 30) {
			printf("%d\n", v[i]);
			c=c+1;
		}
	}
	printf("\n%d",c); */
	
	/* int v[]={23,48,56,24,12,8,72,64,32,15};
	int i;
	int c=0;
	int sum=0;
	float avr=0;
	for(i=0; i<10; i++) 
		sum=sum+v[i];
	printf("%d\n",sum);
	avr = sum/10.;
	printf("%7.2f",avr); */
	
	/* int v[10]={10,14,3,5,9,20,7,2,5,4}; // test
    int i,max,no;
    max=-1000; // max=v[0];
    for(i=0;i<10;i=i++) {
        if(max<v[i]) 
	    	max=v[i];
	    	no=i; 
		}
    printf("Maximum value = %d\n",max);
    // for(k=0;k<10;k=k+1)
       // if(max==sbs[k]) {
        //	no=k;
        //	break; }
    		printf("%d\n",no+1); 	*/
    		
    int v[]={23,48,56,24,12,8,72,64,32,15}; 
    int i,t,j;
    
    for(j=9;j>=0;j--) {
    for(i=0;i<j;i++) {
		if(v[i]>v[i+1]) {
			t=v[i];
			v[i]=v[i+1];
			v[i+1]=t;
		}
	}
	printf("%d\n", v[j]);
}
}
