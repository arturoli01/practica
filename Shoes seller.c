#include<stdio.h>

main(){

	int  opc=0, n=0, c=0, cz=0, sum2=0, c2=0, count=0, vcount=0;
	int zpts[1000];
	int vzpts[1000];
	int position, loop=1, aux=0, cod=0;
	
	printf("MENU ADMINISRTADOR\n\n");
	
	while(loop==1){
	printf("1.Introducir\n2.Venta\n3.Consultar\n4.Salir\n");
	scanf("%i", &opc);
	switch(opc){
		case 1: 
		
		printf("Introducir cantidad de pares de zapatos:\n");
		scanf("%i", &n);
		
		printf("Intruducir el codigo de los %i zapatos en el sistema: \n", n);
		n=n+sum2;
		
		for(c=sum2 ; c<n ; c++){
			printf("Zapato [%i]: ",cz+=1);
			scanf("%i", &zpts[sum2]);
			sum2++;
			
		}
		printf ("Total de zapatos = %i\n", cz);
		
/*	//	ARRAY EXPLORE - verificacion
	for(c=0, cz=0; c<n ; c++,cz++){
		printf("Zapato [%i] = %i\n",cz+1 ,zpts[c]);
	}
*/
		break;
	
		case 2: 
		
		for(c=0, cz=0; c<n ; c++,cz++){
			printf("Zapato [%i] = %i\n",cz+1 ,zpts[c]);
		}
	
		printf("Producto que desea retirar: ");
		scanf("%i", &position);
		
		
		if (position >= n+1 || position <= 0){
			printf("Producto no encontrado\n");
		}
		else {
			vzpts[c2]= zpts[position-1];
			c2++;
			vcount++;
			for (c = position-1; c < n-1; c++){
				zpts[c] = zpts[c+1];

			}
		n=n-1;
		sum2--;
		
		
		printf("Resultado: \n");
		for(c=0, cz=0; c<n ; c++,cz++){
			printf("Zapato [%i] = %i\n",cz+1 ,zpts[c]);
		}
		}
	
		break;
	

		case 3 : 
		count=0;
		aux=0;
		cod=0;
		printf("Codigo del producto: ");
		scanf("%i", &cod);

		while (aux < cz){
			
			if(zpts[aux] == cod){
				count++;
			}
			aux++;
		}
		
		printf("%i Zapatos del codigo [%i]\n\n", count, cod);
		
		break;

		case 4 : 
		if(vcount>0){
		printf("FACTURA\n\n");
		for(c2=0;c2<vcount;c2++){
			printf("Codigo de zapato '%i' = 1\n", vzpts[c2]);
		}
		}	
		loop=0;
		break;

		default :
		printf("Valor fuera de rango.\nIntente de nuevo.\n\n");	
	}
	}


}

/*PROBANDO GIT 
a
asd
asd
sd
sda
da
das
das
as
asd
sd
da
as
a
a
a
a
a
a
a
a
a
a
a
hola */
