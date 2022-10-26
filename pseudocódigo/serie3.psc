Proceso serie3
	Definir i, s, n, t, c Como Real;
	t<-3;
	c<-5;
	s<-0;
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		n<-(t/c);
		t<-t+3;
		c<-c+5;
		s<-s+n;
	FinPara
	Escribir "La suma de los primeros 10 números es: ", s;
	Escribir "El promedio de los primeros 10 números es: ", (s/10);	
FinProceso