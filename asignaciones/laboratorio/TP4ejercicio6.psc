Algoritmo TP4ejercicio6
	
definir compra, descuento, totalFinal Como Real
    Escribir "Ingresar valor de la compra"
    leer compra
	
    Si (compra <= 0) Entonces
		Escribir "Ingrese un valor de compra valido"
    
	SiNo
		
    Escribir "Ingrese el color para aplicar descuento"
    Escribir "1.-Blanco"
    Escribir "2.-Verde"
    Escribir "3.-Amarilla"
    Escribir "4.-Azul"
    Escribir "5.-Roja"
    leer descuento
	
    Segun(descuento) Hacer
		
		2: totalFinal <- compra - (compra * 0.10)
			
		3: totalFinal <- compra - (compra * 0.25)
			
		4: totalFinal <- compra - (compra * 0.50)
			
		5: totalFinal <- compra - (compra * 1)
			
		De Otro Modo: Escribir "no se aplico ningun descuento, mejor suerte para la proxima"
    Fin Segun
	
	Escribir "El total de su compra es de:", compra;
	Escribir "El descuento aplicado es de: ", descuento;
	Escribir "La cantidad final por su compra es de: ", totalFinal;
	
Finsi

FinAlgoritmo
