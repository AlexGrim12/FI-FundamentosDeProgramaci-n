Proceso resta
	Definir n1,n2,n3 Como Real;
	Definir op Como Entero;
	Escribir 'Dame valores: ';
	Leer n1,n2;
	Escribir '(1) n1 - n2';
	Escribir '(2) n2 - n1';
	Leer op;
	Si op=1 Entonces
		n3 <- n1-n2;
		Escribir n1,' - ',n2,' es igual a: ',n3;
	SiNo
		n3 <- n2-n1;
		Escribir n2,' - ', n1,' es igual a: ',n3;
	FinSi
FinProceso
