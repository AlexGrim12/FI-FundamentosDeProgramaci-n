Proceso arrEmpresa
//	Cierta empresa quiere controlar la existencia de 10 productos, los cuales se almacenaran en un arreglo "a", 
//	mientras que los pedidos de los clientes de estos procductos se almacenana en un arreblo "b". Se requiere generar 
//	un tercer vector llamado "c", con base en los anteriores que represente lo que se ncesita comprar para mantener 
//	el stock de inventario, para esto se considera lo siguiente:
//		- si los valores correspondientes de los vectores "a" y "b", se almacena este mismo valor
//		- si el valor de b es mayor que el de a, se almacena el doble de la diferncia entre b y a
//		- si se da el caso de que a es mayo que b, se almacena b
//	Realizar un programa que se permita visualizar lo que se requiere comprar para mantener el stock del inventario
	Definir i, a, b, c, acum Como Entero;
	Dimension a[10], b[10], c[10];
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "Dime la cantidad del producto ", i+1, ": ";
		Leer a[i];
		Escribir "Dime la cantidad de pedidos del producto ", i+1, ": ";
		leer b[i];
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
	Si b[i]>a[i] Entonces
		acum<-0;
		c[i]<-((b[i]-a[i])*2);
	SiNo
			c[i]<-b[i];
	FinSi
FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "La cantidad del  producto", i+1, " es: ", a[i], ", y la cantidad de pedidos es: ", b[i], " el stck faltante es: ", c[i];
	FinPara	
FinProceso
