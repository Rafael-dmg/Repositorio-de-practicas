console.log('Hola, mundo!')

//Capacidades que tienen las funciones al igual que otros objetos.

// //1.- Pasar funciones como argumentos -> callback (muy preguntado en entrevistas): unoa funcion que se pasa como argumento de otra funcion

function a() {}
function b(a) {
    
}

b(a)

//Retornar funciones

function a() {
    function b () {}
    return b
}

// Asignar funciones a variables -> Expresion de funcion

const a = function () {} //el nombre de la funcion es la variable misma

//Tener propiedades y metodos

function a () {
}

const obj = {}
a.call(obj)

//Anidar funciones -> Nested functions

function a() {
    function b () {
        function c() {
            
        }
        c()
    }
    b()
}
a()

// Esposible almacenar funciones en objetos? Si, estos se les conoce como metodos y serian por ejemplo:

let cohete = {
    name: 'falcon 9',
    launchMessage: function launchMessage() {
        console.log('Vamonos!')
    }
}

console.log(cohete.launchMessage())