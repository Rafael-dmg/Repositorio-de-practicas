console.log('Hola, mundo!')

//Explicit type casting

const numeroString = '42';
const numeroNumber = parseInt(numeroString) 
console.log(numeroNumber)
console.log(typeof numeroNumber)


const floatString = '42.23';
const floatNumber = parseFloat(floatString)
console.log(floatNumber)
console.log(typeof floatNumber)

const binary = '1010';
const decimal = parseInt(binary);
console.log(decimal)

//Implicit

//al ser de debilñ tipado javascript tiene ciertos problemas a la hora de transformar datos, o de unirlos, entonces algunos tipos de datos en lugar de lanzarnos un error lo que hara sera transformarlos a otra cosa segun su criterio.

console.log('-----------------------------')

const stringValue = '123'
const numberValue = 65
const booleanValue = true

console.log(stringValue + stringValue) //CONCATENA
console.log(stringValue + numberValue) //CONCATENA
console.log(stringValue + booleanValue) //CONCATENA
console.log(numberValue + stringValue) //SUMA
console.log(numberValue + numberValue) //SUMA
console.log(numberValue + booleanValue) //CONCATENA
console.log(booleanValue + stringValue) //CONCATENA
console.log(booleanValue + numberValue) //SUMA
console.log(booleanValue + booleanValue) //SUMA



/* QUIZ RAPIDO: QUE TIPO DE RESULTADO OBTENDREMOS DEL SIGUIENTE EJERCICIO?*/

const numero = '596';
const nuemroCnvertido = parseInt(numero)

console.log(typeof numero);
console.log(typeof nuemroCnvertido);

//respuesta: string y numero