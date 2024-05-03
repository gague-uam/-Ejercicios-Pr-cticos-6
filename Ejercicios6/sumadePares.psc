Proceso sumadePares
	definir totalsuma, num como entero;
	totalsuma <- 0;
	num <- 100;
	Mientras num <= 200 hacer
		si num %2 =0 Entonces
			totalsuma <- totalsuma +  num;
		FinSi
		num <- num +1;
	FinMientras
	Escribir "La suma de todos los numeros pares que se encuentran entre 100 y 200 es de: ", totalsuma;
FinProceso
