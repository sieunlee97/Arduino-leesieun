/* 팩토리얼 */
#define ONE 1	
int factorial(int n) {
	if(n>ONE){
		return(n*factorial(n-1));
		// 3*factorial(2)
		// 3*(2*factorial(1))
		// 3*(2*1)
	}else{
		return (ONE);
	}
}