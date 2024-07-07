Algoritmo VueltoConCiclos
    Definir pago, precio, vuelto, denominaciones Como Real
    Definir billetes100, billetes50, billetes20, billetes10, billetes5, billetes2, cantidades Como Entero
    Definir monedas1, monedas0_5, monedas0_25, monedas0_10 Como Entero
    Dimension denominaciones[10]
    Dimension  cantidades[10]
    Definir i Como Entero
    
    // Guardo cada denominacion en cada posicion del vector
    denominaciones[1] = 100
    denominaciones[2] = 50
    denominaciones[3] = 20
    denominaciones[4] = 10
    denominaciones[5] = 5
    denominaciones[6] = 2
    denominaciones[7] = 1
    denominaciones[8] = 0.5
    denominaciones[9] = 0.25
    denominaciones[10] = 0.10
    
    // Solicitar datos de entrada al usuario
    Escribir "Ingrese el precio del producto: "
    Leer precio
    Escribir "Ingrese el monto pagado: "
    Leer pago
    
    // Calcular el vuelto
    vuelto = pago - precio
    
    // Inicializar cantidades en 0 para inicializar el vector y sumarle valores luego
    Para i = 1 Hasta 10 Hacer
        cantidades[i] = 0
    FinPara
    
    // Calcular la cantidad de cada billete y moneda usando ciclos
    Para i = 1 Hasta 10 Hacer
        cantidades[i] = Trunc(vuelto / denominaciones[i]) //precisa la cantidad de billetes o monedas
        vuelto = vuelto - cantidades[i] * denominaciones[i] //actualiza el valor de vuelto para seguir comparando con el resto de denominaciones
    FinPara
    
    // Mostrar el resultado
    Escribir "Billetes de 100: ", cantidades[1]
    Escribir "Billetes de 50: ", cantidades[2]
    Escribir "Billetes de 20: ", cantidades[3]
    Escribir "Billetes de 10: ", cantidades[4]
    Escribir "Billetes de 5: ", cantidades[5]
    Escribir "Billetes de 2: ", cantidades[6]
    Escribir "Monedas de 1: ", cantidades[7]
    Escribir "Monedas de 0.5: ", cantidades[8]
    Escribir "Monedas de 0.25: ", cantidades[9]
    Escribir "Monedas de 0.10: ", cantidades[10]
FinAlgoritmo
//
//Paso a paso a partir de linea 31:
//	Inicialización de las cantidades de billetes y monedas (Línea 31-33)
//	pseudocode
//	Copiar código
//	Para i = 1 Hasta 10 Hacer
//		cantidades[i] = 0
//	FinPara
//	Aquí, se utiliza un ciclo Para para inicializar todas las posiciones del arreglo cantidades en 0.
//			i es el índice que recorre las posiciones del arreglo cantidades, que va desde 1 hasta 10 (inclusive).
//			Esto asegura que todas las posiciones del arreglo estén listas para almacenar la cantidad de billetes y monedas necesarios.
//				Cálculo de la cantidad de cada billete y moneda (Línea 36-39)
//				pseudocode
//				Copiar código
//				Para i = 1 Hasta 10 Hacer
//					cantidades[i] = Trunc(vuelto / denominaciones[i])
//					vuelto = vuelto - cantidades[i] * denominaciones[i]
//				FinPara
//			Línea 36: Este Para también usa i como índice y recorre el arreglo denominaciones que contiene los valores de cada billete y moneda.
//				Línea 37: Para cada denominación, calcula cuántos billetes o monedas de esa denominación son necesarios. Esto se hace dividiendo el vuelto restante por la denominación actual (denominaciones[i]) y usando Trunc para obtener la parte entera del resultado.
//						Trunc(vuelto / denominaciones[i]): Devuelve el número máximo de billetes o monedas de la denominación actual que se pueden usar sin exceder el vuelto restante.
//						cantidades[i]: Almacena esta cantidad en la posición correspondiente del arreglo cantidades.
//						Línea 38: Actualiza el vuelto restante restando el valor total de los billetes o monedas de la denominación actual.
//						cantidades[i] * denominaciones[i]: Calcula el valor total de los billetes o monedas de la denominación actual.
//						vuelto = vuelto - cantidades[i] * denominaciones[i]: Resta este valor del vuelto restante, actualizándolo para la siguiente iteración del ciclo.
//								Ejemplo de Iteración
//							Supongamos que el vuelto inicial es 187.35:
//								
//							Primera Iteración (i = 1):
//								
//								denominaciones[1] es 100.
//								cantidades[1] = Trunc(187.35 / 100) = 1.
//								vuelto = 187.35 - 1 * 100 = 87.35.
//							Segunda Iteración (i = 2):
//								
//								denominaciones[2] es 50.
//								cantidades[2] = Trunc(87.35 / 50) = 1.
//								vuelto = 87.35 - 1 * 50 = 37.35.
//							Tercera Iteración (i = 3):
//								
//								denominaciones[3] es 20.
//								cantidades[3] = Trunc(37.35 / 20) = 1.
//								vuelto = 37.35 - 1 * 20 = 17.35.
//								Y así sucesivamente para las demás denominaciones.
//									
//									Mostrar el resultado (Línea 42-50)
//									pseudocode
//									Copiar código
//									Escribir "Billetes de 100: ", cantidades[1]
//									Escribir "Billetes de 50: ", cantidades[2]
//									Escribir "Billetes de 20: ", cantidades[3]
//									Escribir "Billetes de 10: ", cantidades[4]
//									Escribir "Billetes de 5: ", cantidades[5]
//									Escribir "Billetes de 2: ", cantidades[6]
//									Escribir "Monedas de 1: ", cantidades[7]
//									Escribir "Monedas de 0.5: ", cantidades[8]
//									Escribir "Monedas de 0.25: ", cantidades[9]
//									Escribir "Monedas de 0.10: ", cantidades[10]
//									Aquí, se muestran las cantidades de cada denominación calculadas en el ciclo anterior.
//									Cada línea escribe el tipo de billete o moneda seguido de la cantidad correspondiente almacenada en el arreglo cantidades.
//									Resumen
//								Línea 31-33: Inicializa las cantidades de billetes y monedas a cero.
//								Línea 36-39: Calcula las cantidades de cada denominación necesaria utilizando un ciclo Para.
//									Línea 42-50: Muestra las cantidades de cada billete y moneda necesarias para dar el vuelto.
//											Este enfoque con el uso de ciclos permite que el algoritmo sea más eficiente y fácil de mantener, ya que se maneja de manera uniforme todas las denominaciones de billetes y monedas.
