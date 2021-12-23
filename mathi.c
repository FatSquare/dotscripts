#include <stdio.h>

// Author  : Squar3
// Library : Mathi.h

int ceili(float a){
				if(a == (int)a){
								return (int)a;
				}else{
								return (int)a+1;
				}
}

int floori(float a){
				return (int)a;
}

int roundi(float a){
				if(a >= (int)a+0.5){
								return (int)a+1;
				}else{
								return (int)a;
				}
}

int combi(int a,int b){
				return 0;	
}

float sqrti(float a){
				return 0;
}

float fabsi(float a){
				if(a<0) return a*-1;
				return a;
}

int absi(float a){
				if(a<0) return a*-1;
				return a;				
}

float copysigni(float a,float b){
      if(b > 0){
				return fabsi(a);
			}else{
				return -fabsi(a);
			}
}

int gcdi(int a,int b){
					
				if(b==0){
								return a;
				}else{
								return gcdi(b,a%b);
				}
			//if(a>b){
			//	for (int i = b; i >= 1; i--) {
			//								if(b%i == 0 && a%i == 0 ){
			//												return i;
			//								}
			//				}
			//}else{
			//				for (int i = a; i >= 1; i--) {
			//								if(b%i == 0 && a%i == 0 ){
			//												return i;
			//								}

			//}
			//return -1;
}	

int main(){

      for (int i = 1; i<100000; i++) {
								printf("%d \n",gcdi(5230,i));
      }

			//printf("ceili(43.123)  : %d \n",ceili(43.123));
			//printf("floori(3.73)   : %d \n",floori(3.73));
			//printf("roundi(3.4)    : %d \n",roundi(3.4));
			//printf("sqrt(16)       : %f \n",sqrti(16));
			//printf("gcdi(216,891)  : %d \n",gcdi(216,891));
			//printf("absi(-53)      : %d \n",absi(-53));       
			//printf("fabsi(-53)     : %.2f \n",fabsi(-53));       
				return 0;

}

