Proceso sumaVectores
	Definir vector1, vector2, suma, long, i Como entero;
	
	Escribir "Digite la longitud de los vectores: ";
	Leer long;
	Para i<-1 Hasta long Con Paso 1 Hacer
		Escribir "Ingrese el valor del primer vector en la posici�n ", i;
		Leer vector1;
	FinPara
	Para i<-1 Hasta long Con Paso 1 Hacer
		Escribir "Ingrese el valor del segundo vector en la posici�n ", i;
		Leer vector2;
	FinPara
	
	Para i<-1 Hasta long Con Paso 1 Hacer
		suma <- vector1 + vector2;
	FinPara
	
	Escribir "La suma de ambos vectores es de: ";
	Para i<-1 Hasta long Con Paso 1 Hacer
		Escribir suma;
	FinPara
	
FinProceso
