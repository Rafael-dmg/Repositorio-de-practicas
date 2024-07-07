Algoritmo VueltoConCiclos
    // Declaración de variables
    Definir pago, precio, vuelto, denominaciones Como Real
    Definir billetes100, billetes50, billetes20, billetes10, billetes5, billetes2, cantidades Como Entero
    Definir monedas1, monedas0_5, monedas0_25, monedas0_10 Como Entero
    Dimension denominaciones[10]
    Dimension  cantidades[10]
    Definir i Como Entero
    
    // Inicializar las denominaciones
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
    
    // Solicitar datos de entrada
    Escribir "Ingrese el precio del producto: "
    Leer precio
    Escribir "Ingrese el monto pagado: "
    Leer pago
    
    // Calcular el vuelto
    vuelto = pago - precio
    
    // Inicializar las cantidades de billetes y monedas
    Para i = 1 Hasta 10 Hacer
        cantidades[i] = 0
    FinPara
    
    // Calcular la cantidad de cada billete y moneda usando ciclos
    Para i = 1 Hasta 10 Hacer
        cantidades[i] = Trunc(vuelto / denominaciones[i])
        vuelto = vuelto - cantidades[i] * denominaciones[i]
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
