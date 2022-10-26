Proceso arrNomEdad
	//5 nombres con diferentes edades en dos arreglos
	Definir i, edad Como Entero;
	Definir nom Como Caracter;
	Dimension nom[5], edad[5];
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Escribir "Dime el nombre de la persona ", i, ": ";
		Leer nom[i];
		Escribir "Dime la edad de la persona ", i, ": ";
		leer edad[i];
	FinPara
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Escribir "El nombre de la persona ", i+1, " es: ", nom[i], ", y su edad es: ", edad[i], " años";
	FinPara
FinProceso
