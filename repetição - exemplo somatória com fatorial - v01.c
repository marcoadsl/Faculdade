/*
Escreva um programa que calcule e escreva a soma dos 20
primeiros termos da s�rie

      x!    (x+1)!   (x+2)!  
S = ----- + ------ + ------ + ... 
      y!    (y+1)!   (y+2)! 

entradas de dados:
  valor de x e de y
sa�das de dados:
  soma dos 20 primeiros termos da s�rie
processamento:
  obter o valor de x
  obter o valor de y
  atribuir 0 a qt
	atribuir 0 a S
  enquanto qt for menor do que 20
	  calcular o fatorial de x 
	    atribuir x - 1 a fx
	    atribuir x a gx
	    enquanto fx for maior do que 1
	      gx recebe gx * fx
	      fx recebe fx - 1
	    fimenquanto
	  calcular o fatorial de y 
	    atribuir y - 1 a fy
	    atribuir y a gy	    
			enquanto fy for maior do que 1
	      gy recebe gy * fy
	      fy recebe fy - 1
	    fimenquanto
		S recebe S + gx / gy (gx fatorial de x e gy fatorial de y)
	  x recebe x + 1
	  y recebe y + 1
		qt recebe qt + 1
	fimenquanto 
*/
#include <stdio.h>
int main(){
	double x, y, S, gx, fx, gy, fy;
	int qt;
	qt = 0;
	S = 0;
  printf("\nInforme o valor de x: ");
  scanf("%lf",&x);
  printf("\nInforme o valor de y: ");
  scanf("%lf",&y); 
	while(qt < 20){
//fatorial de x
		gx = x;
		fx = x - 1;
		while(fx > 1){
			gx = gx * fx;
			fx = fx - 1;
		}
//fatorial de y
		gy = y;
		fy = y - 1;
		while(fy > 1){
			gy = gy * fy;
			fy = fy - 1;
		}
		S = S + gx / gy;
		x = x + 1;
		y = y + 1;
		qt = qt + 1;
	}
  printf("\n     x!   (x+1)!  (x+2)!");
  printf("\nS = --- + ----- + ----- + ..."); 
  printf("\n     y!   (y+1)!  (y+2)!");
	printf("\nS --> %lf",S);
	return 0;
}