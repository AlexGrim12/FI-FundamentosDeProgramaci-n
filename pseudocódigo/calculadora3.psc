Proceso calculadora3
	Definir a,op,r Como Entero;
	Definir n1,n2,n3 Como Real;
	r<-1;
	Mientras r=1 Hacer
		Escribir '(1) Suma';
		Escribir '(2) Resta';
		Escribir '(3) Multiplicación';
		Escribir '(4) División';
		Leer a;
		Segun a  Hacer
			1:
				Escribir 'Dame valores: ';
				Leer n1,n2;
				n3 <- n1+n2;
				Escribir n1,' + ',n2,' es igual a ',n3;
			2:
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
					Escribir n2,' - ',n1,' es igual a: ',n3;
				FinSi
			3:
				Escribir 'Dame valores: ';
				Leer n1,n2;
				n3 <- n1*n2;
				Escribir n1,' * ',n2,' es igual a ',n3;
			4:
				Escribir 'Dame valores: ';
				Leer n1,n2;
				Escribir '(1) n1 / n2';
				Escribir '(2) n2 / n1';
				Leer op;
				Si op=1 Entonces
					Si n2=0 Entonces
						Escribir 'No se puede dividir entre cero';
					SiNo
						n3 <- n1/n2;
						Escribir n1,' / ',n2,' es igual a: ',n3;
					FinSi
				SiNo
					Si n1=0 Entonces
						Escribir 'No se puede dividir entre cero';
					SiNo
						n3 <- n2/n1;
						Escribir n2,' / ',n1,' es igual a: ',n3;
					FinSi
				FinSi
			De Otro Modo:
				Escribir 'No es un número valido entre 1 y 4, aprende a leer hijo';
		FinSegun
		Escribir 'Repetir? (1) Sí (2) No';
		leer r;
	FinMientras
FinProceso
