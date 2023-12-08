//string primitivos

const stringPrimitivo = 'Soy un string primitivo';
console.log(typeof stringPrimitivo);

const stringPrimitivoTambien = String('Tambien soy un string primitivo');
console.log(typeof stringPrimitivoTambien);

//String objeto

const cadenaObjeto = new String('Soy un string objeto papu');
console.log(typeof cadenaObjeto);

//Acceder a caracteres 
//ACLARACION: LA GRAN MAYORIA DE LOS METODOS SI NO TODOS DEBEN SER INICIALIZADOS CON PARENTESIS COMO FUNCIONES QUE SON, DEPENDIENDO DEL USO LLEVAN O NO PARAMETROS, PERO SIEMPRE INICIAN CON PARENTESIS DE OTRO MODO NO SERVIRAN

const saludo = 'Hola. Como estas?'

console.log(saludo[2]) //busqueda por index tipo array
console.log(saludo.charAt(2))//busqueda por index usando un metodo
console.log(saludo.indexOf('o')) //busqueda por caracter, parecido a un ctrl + f 
console.log(saludo.indexOf('Como')) //igual que en el anterior pero podemos ver que este da un resultado real
console.log(saludo.indexOf('como')) //caso contrario del anterior aca nos arroja un -1 porque esta cadena de texto exacta no existe
console.log(saludo.slice(2, 6)) // con este metodo buscamos entre dos ubicaciones del index, impr en consola para ver resultado
console.log(saludo.slice(6, 11)) //impr en consola para ver resultado
console.log(saludo.length)
console.log(saludo.toLowerCase())
console.log(saludo.toUpperCase())



const saludoDividido = saludo.split(' ');
console.log(saludoDividido);