'strict mode'

//caracteres de escape

//const whatDoIDo = 'I'm software engineer' esto romperia el string

//1.- Escape alternativo
const escapeAlternativo = "I'm Software engineer"

//2.- Barra invertida
const barraInvertida = 'I\'m Software engineer'

//3.- Template Literals
const comillaInvertida = `I'm Software engineer`

//Esritura de Strings Largos

/*
Las rojas son rojas,
las violetas azules,
caracter inesperado,
en la linea 86.
*/


const poema = 'Las rojas son rojas,\n' +
              'las violetas azules,\n' +
              'caracter inesperado,\n' +
              'en la linea 86.'

console.log(poema)

const poema2 = 'Las rojas son rojas,\n\
las violetas azules,\n\
caracter inesperado,\n\
en la linea 86.'

console.log(poema2)

//ATENTO A LOS ESPACIOS, PUEDEN OCURRIR ERRORES DE SINTAXIS: UNEXPECTED TOKEN POR ESPACIOS EN LUGARES DONDE NO SON NECESARIOS

//con template literals

const poema3 = `Las rojas son rojas,
las violetas azules,
caracter inesperado,
en la linea 86.`

console.log(poema3)