Proceso invertirnumero
	Definir n, i, n1 Como Entero;
	n1<-0;
	Escribir "Escribe un valor";
	leer n;
	Mientras n<>0 Hacer
		i<-n mod 10;
		n<-trunc(n/10);
		n1<-n1*10+i;
	FinMientras
	Escribir n1;
FinProceso
