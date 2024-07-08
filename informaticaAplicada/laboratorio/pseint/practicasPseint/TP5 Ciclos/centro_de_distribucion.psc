Algoritmo centro_de_distribucion
    Definir codCliente, codCiudad, cantidadCABA Como Entero
    Definir precio, sum Como Real
	Definir ciudad Como Caracter
    Dimension ciudad[4]
    codCliente <- 0
    codCiudad <- 0
	sum <- 0
	
    Repetir
        Escribir "Ingrese codigo de cliente o ingrese -1 para salir"
        Leer codCliente
		
        Si (codCliente <> -1) Entonces
			
            Repetir
                Escribir "Ingrese el codigo de ciudad o ingrese 0 para volver al menu anterior"
				Escribir "Ingresa 1 para CABA"
				Escribir "Ingresa 2 para Corrientes"
				Escribir "Ingresa 3 para Misiones"
				Escribir "Ingresa 4 para San Luis"
                Leer codCiudad
				
                Si codCiudad = 0 Entonces
                    // Volver al menú principal
                    Escribir "Volviendo al menu anterior..."
				Sino
					
					Si codCiudad = -1 Entonces
                    // Salir del programa
                    codCliente <- -1
					Sino
                    // Aquí iría la lógica para procesar codCiudad
						Escribir "Procesando ciudad..."
						
						Segun codCiudad Hacer
							1: ciudad[1] <- 'CABA'
								Escribir ciudad[1]
								Escribir "Se cargara de a 1 producto por vez"
								
								Repetir
									Escribir "precio del producto"
									leer precio
									sum <- sum + precio
									cantidad <- cantidad + 1
									Escribir "Tu total hasta ahora es: ", sum
									Si(cantidad > 1)Entonces
										Escribir "Sobre ", cantidad, " productos"
									SiNo
										Escribir "Sobre ", cantidad, " producto"
									FinSi
								Hasta Que precio == 0
								
							2: ciudad <- 'Corrientes'
							3: ciudad <- 'Misiones'
							4: ciudad <- 'San Luis'
						FinSegun
						Escribir ciudad
					FinSi
                FinSi
				
            Hasta Que (codCiudad == 0 O codCiudad == -1)
        FinSi
		
    Hasta Que codCliente = -1
	
    Escribir "Saliendo del programa..."
FinAlgoritmo
