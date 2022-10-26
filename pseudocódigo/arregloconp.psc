Proceso arregloconprom
	Definir i, num Como Entero;
	definir sum, prom Como Real;
	Dimension num[10];
	sum <- 0;
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "Dame dato para la posición ", i;
	Leer num[i];
		sum <- sum + num[i];
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "El número guardado en el espacio ", i, " es ", num[i];
	FinPara
	prom<- sum/10;
	Escribir "El promedio total es: ", prom;
FinProceso