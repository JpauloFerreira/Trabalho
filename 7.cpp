#include <stdio.h>
main(){
	float compra,venda;
	
	printf("Digite o valor de compra: R$");
	scanf("%f",&compra);
	
	if(compra<10){
		printf("Valor de venda = R$%.2f",compra*1.7);
	}
	else if(compra>=10&&compra<30){
		printf("Valor de venda = R$%.2f",compra*1.5);
	}
	else if(compra>=30&&compra<50){
		printf("Valor de venda = R$%.2f",compra*1.4);
	}
	else{
		printf("Valor de venda = R$%.2f",compra*1.3);
	}
}
