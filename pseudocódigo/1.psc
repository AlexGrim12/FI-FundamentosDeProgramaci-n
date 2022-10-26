Proceso sin_titulo
	//solicitar 10 números entre 25 y 75, e indicar cuales son pares. Los elementos solicitados deberan estar almacenados en un arreglo así
	//como los elementos pares encontrados
	Definir i, num, par, cpar, n Como Entero;;
	Dimension num[10], par[10];
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "Dime el  ", i+1, ": ";
		Leer n;
		si n>=25 y n<=75
		Si num[i] mod 2=0 Entonces
			par[cpar]<-num[i];
			cpar<-cpar+1;
		FinSi
	FinPara
FinProceso
