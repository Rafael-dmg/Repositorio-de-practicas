Algoritmo HojaDeCalculo
    //Definir hoja Como 
    Definir fila, columna Como Entero
    Definir option Como Caracter
    Definir valor Como Real
    
	Dimension hoja[10, 10]
    // Inicializar la hoja de cálculo con ceros
    Para fila <- 1 Hasta 10 Hacer
        Para columna <- 1 Hasta 10 Hacer
            hoja[fila, columna] <- 0
        FinPara
    FinPara
    
    Repetir
        Escribir "Menú de opciones:"
        Escribir "1. Ingresar valor"
        Escribir "2. Mostrar hoja de cálculo"
        Escribir "3. Calcular suma de una fila"
        Escribir "4. Calcular promedio de una columna"
        Escribir "5. Salir"
        Leer option
        
        Segun option Hacer
            "1":
                Escribir "Ingrese fila (1-10):"
                Leer fila
                Escribir "Ingrese columna (1-10):"
                Leer columna
                Escribir "Ingrese valor:"
                Leer valor
                hoja[fila, columna] <- valor
            "2":
                Para fila <- 1 Hasta 10 Hacer
                    Para columna <- 1 Hasta 10 Hacer
                        Escribir Sin Saltar hoja[fila, columna], " "
                    FinPara
                    Escribir ""
                FinPara
            "3":
                Escribir "Ingrese número de fila (1-10):"
                Leer fila
                suma <- 0
                Para columna <- 1 Hasta 10 Hacer
                    suma <- suma + hoja[fila, columna]
                FinPara
                Escribir "La suma de la fila ", fila, " es: ", suma
            "4":
                Escribir "Ingrese número de columna (1-10):"
                Leer columna
                suma <- 0
                Para fila <- 1 Hasta 10 Hacer
                    suma <- suma + hoja[fila, columna]
                FinPara
                promedio <- suma / 10
                Escribir "El promedio de la columna ", columna, " es: ", promedio
            "5":
                Escribir "Saliendo del programa..."
            De Otro Modo:
                Escribir "Opción no válida. Intente de nuevo."
        FinSegun
    Hasta Que optcion = "5"
FinAlgoritmo