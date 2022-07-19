//12 = butterfly나오게 하기
#include  <stdio.h>
int main()
{
	int a;
	a =1;
	
	while(a<100)
	{
		if(a%6==0){printf("butterfly");} //만약 a가 2배수라면 'butter'가 출력되도록한다. 
		
		else if(a%3==0){printf("fly");} // 그렇지 않고 만약 3의 배수라면 fly가 출력되도록 한다.
		else if(a%2==0){printf("butter");} //그렇지 않고 만약 6의 배수라면 ‘butterfly' 출력하기

		
		else{printf("%d",a);} //만약 a에 기록된 값이 2의 배수라면 ‘butter’가 아니면 그냥 숫자가 출력되도록 합니다.

	
		a = a + 1;
	}
	
	return 0;
}
