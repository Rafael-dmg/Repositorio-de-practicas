Algoritmo centro_de_distribucion
    Definir codCliente, codCiudad, ventas, control, maxVentas, centroMaxVentas, cantidadTotal Como Entero
    Definir precio, sumVentas, totalVendido Como Real
    Definir ciudad Como Caracter
    Dimension ciudad[4]
    Dimension ventas[4]
    Dimension cantidad[4]
    codCliente <- 0
    codCiudad <- 0
    sumVentas <- 0
    totalVendido <- 0
    maxVentas <- 0
    centroMaxVentas <- 0
	cantidadTotal <- 0
	
    Para i <- 1 Hasta 4 Hacer
        ventas[i] <- 0
        cantidad[i] <- 0
    FinPara
	
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
                    Escribir "Volviendo al menu anterior..."
                Sino
                    Si codCiudad = -1 Entonces
                        codCliente <- -1
                    Sino
                        Escribir "Procesando ciudad..."
						
                        Segun codCiudad Hacer
                            1: ciudad[1] <- "CABA"
                                Escribir ciudad[1]
                                Repetir
                                    //Escribir "Listo para cargar datos? presiona 1 para continuar o 0 para salir"
									// Leer control
									Escribir "Precio del producto"
									Leer precio
									
                                    Si precio > 0 Entonces
                                        Escribir "Cantidad del producto"
                                        Leer cantidad[1]
										
                                        ventas[1] <- ventas[1] + (cantidad[1] * precio)
                                        Escribir "El total de la venta de este centro es: ", ventas[1]
                                        Si cantidad[1] > 1 Entonces
                                            Escribir "Tiene ", cantidad[1], " productos"
                                        SiNo
                                            Escribir "Tiene ", cantidad[1], " producto"
                                        FinSi
                                        Escribir "Presione 0 para volver al menu anterior, cargar datos o ver datos"
									FinSi
									
                                Hasta Que precio = 0
								
                            2: ciudad[2] <- "Corrientes"
                                Escribir ciudad[2]
                                Repetir
                                    Escribir "Precio del producto"
                                    Leer precio
									
                                    Si precio > 0 Entonces
                                        Escribir "Cantidad del producto"
                                        Leer cantidad[2]
										
                                        ventas[2] <- ventas[2] + (cantidad[2] * precio)
                                        Escribir "El total de la venta de este centro es: ", ventas[2]
                                        Si cantidad[2] > 1 Entonces
                                            Escribir "Tiene ", cantidad[2], " productos"
                                        SiNo
                                            Escribir "Tiene ", cantidad[2], " producto"
                                        FinSi
                                        Escribir "Presione 0 para volver al menu anterior y cargar los productos del siguiente centro"
                                    FinSi
									
                                Hasta Que precio = 0
								
                            3: ciudad[3] <- "Misiones"
                                Escribir ciudad[3]
                                Repetir
                                    Escribir "Precio del producto"
                                    Leer precio
									
                                    Si precio > 0 Entonces
                                        Escribir "Cantidad del producto"
                                        Leer cantidad[3]
										
                                        ventas[3] <- ventas[3] + (cantidad[3] * precio)
                                        Escribir "El total de la venta de este centro es: ", ventas[3]
                                        Si cantidad[3] > 1 Entonces
                                            Escribir "Tiene ", cantidad[3], " productos"
                                        SiNo
                                            Escribir "Tiene ", cantidad[3], " producto"
                                        FinSi
                                        Escribir "Presione 0 para volver al menu anterior y cargar los productos del siguiente centro"
                                    FinSi
									
                                Hasta Que precio = 0
								
                            4: ciudad[4] <- "San Luis"
                                Escribir ciudad[4]
                                Repetir
                                    Escribir "Precio del producto"
                                    Leer precio
									
                                    Si precio > 0 Entonces
                                        Escribir "Cantidad del producto"
                                        Leer cantidad[4]
										
                                        ventas[4] <- ventas[4] + (cantidad[4] * precio)
                                        Escribir "El total de la venta de este centro es: ", ventas[4]
                                        Si cantidad[4] > 1 Entonces
                                            Escribir "Tiene ", cantidad[4], " productos"
                                        SiNo
                                            Escribir "Tiene ", cantidad[4], " producto"
                                        FinSi
                                        Escribir "Presione 0 para volver al menu anterior y cargar los productos del siguiente centro"
                                    FinSi
									
                                Hasta Que precio = 0
                        FinSegun
						
                        sumVentas <- 0
                        Para i <- 1 Hasta 4 Hacer
                            sumVentas <- sumVentas + ventas[i]
                        FinPara
						
                        totalVendido <- sumVentas
						
                        Para i <- 1 Hasta 4 Hacer
                            Si ventas[i] > maxVentas Entonces
                                maxVentas <- ventas[i]
                                centroMaxVentas <- i
                            FinSi
                        FinPara
						
                        Escribir "Total de ventas por centro:"
                        Para i <- 1 Hasta 4 Hacer
                            Escribir "Centro ", ciudad[i], ": ", ventas[i]
                        FinPara
						
                        Escribir "Total vendido en general: ", totalVendido
                        Escribir "Quien vendio mas? Centro ", ciudad[centroMaxVentas], " con ", maxVentas, " en ventas"
						
						Para i <- 1 Hasta 4 Hacer
							cantidadTotal = cantidadTotal + cantidad[i]
						FinPara
						Escribir "La cantidad global de ventas es de: ", cantidadTotal
						
                    FinSi
                FinSi
				
            Hasta Que codCiudad = 0 O codCiudad = -1
        FinSi
		
    Hasta Que codCliente = -1
	
    Escribir "Saliendo del programa..."
FinAlgoritmo