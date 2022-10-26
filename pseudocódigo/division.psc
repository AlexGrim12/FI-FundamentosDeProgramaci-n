Proceso division
	Definir n1,n2,n3 Como Real;
	Definir op Como Entero;
	Escribir 'Dame valores: ';
	Leer n1,n2;
	Escribir '(1) n1 / n2';
	Escribir '(2) n2 / n1';
	Leer op;
	Si op=1 Entonces
		si n2=0 Entonces
			Escribir 'No se puede dividir entre cero';
		SiNo
			n3 <- n1/n2;
			Escribir n1,' / ',n2,' es igual a: ',n3;	
		FinSi
	SiNo
		si n1=0 Entonces
			Escribir 'No se puede dividir entre cero';
		SiNo
		n3 <- n2/n1;
		Escribir n2,' / ', n1,' es igual a: ',n3;
	FinSi
	FinSi
FinProceso
