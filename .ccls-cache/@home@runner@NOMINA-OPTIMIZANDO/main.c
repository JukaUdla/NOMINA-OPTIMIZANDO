#include <stdio.h>

  int total_de_horas_trabajadas;
  float valor_por_hora;
  float monto_de_ventas;
  float total;
  float salario,bucle,nomina;
  float vh,ven,sb;

int main(void) {

do {
  printf("ingrese el total de horas trabajadas: \n");
  scanf("%d",&total_de_horas_trabajadas);
  printf("ingrese el valor por hora: \n");
  scanf("%f",&valor_por_hora);
  printf("ingrese el monto de ventas: \n");
  scanf("%f",&monto_de_ventas);


if (total_de_horas_trabajadas<=40){
  vh=total_de_horas_trabajadas*valor_por_hora;
  printf("Valor de horas es= %.2f\n",vh);
}
else if (total_de_horas_trabajadas<=50){
  vh=total_de_horas_trabajadas*valor_por_hora+((valor_por_hora*0.1)*(total_de_horas_trabajadas-40));
  printf("Valor de horas es= %.2f\n",vh);
}
else if (total_de_horas_trabajadas<=55){
  vh=total_de_horas_trabajadas*valor_por_hora+((valor_por_hora*0.15)*(total_de_horas_trabajadas-50));
  printf("Valor de horas es= %.2f\n",vh);
}
else {
  vh=total_de_horas_trabajadas*valor_por_hora+((valor_por_hora*0.2)*(total_de_horas_trabajadas-55));
  printf("Valor de horas es= %.2f\n",vh);
}

  

if (monto_de_ventas<=800){
  ven=monto_de_ventas*0.02;
  printf("Monto de ventas es= %.2f\n",ven);
}
else if (monto_de_ventas<=1500){
  ven=monto_de_ventas*0.04;
  printf("Monto de ventas es= %.2f\n",ven);
}
else if (monto_de_ventas<=3000){
  ven=monto_de_ventas*0.06;
  printf("Monto de ventas es= %.2f\n",ven);
}
else {
  ven=monto_de_ventas*0.08;
  printf("Monto de ventas es= %.2f\n",ven);
} 

salario=(vh-(vh*9.45/100))+ven;
  printf("SALARIO es=%.2f",salario);

nomina+=salario; //acumulador//

printf("\nIngrese\n1.- Continuar\n2.- Salir\n");
  scanf("%f",&bucle);
} while (bucle==1);  
  printf("TOTAL NOMINA= %.2f \n",nomina);
  return 0;
  