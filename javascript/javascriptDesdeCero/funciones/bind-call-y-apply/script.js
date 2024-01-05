// console.log('Hola, mundo!')

const tutor = 'lucy'
const direccion = 'calle falsa 123'

function dogGreeting (tutor, direccion) {
    console.log(`Hola mi nombre es ${this.nombre}, vivo en ${direccion}, con mi tutor ${tutor}`)
}

const perro = {
    nombre: 'dogo',
}

dogGreeting.call(perro, tutor, direccion)

//Otro metodo que podemos utilizar es el de .apply(), con este metodo podemos acceder a elementos guardados dentro de un array, en lugar de que sean variables que ocupan mucho mas espacio de memoria

function newdogGreeting (tutor, direccion) {
    console.log(`Hola mi nombre es ${this.nombre}, vivo en ${direccion}, con mi tutor ${tutor}`)//destaco que los elementos llamados en esta funcion al momento de ser invocados, se debe hacer en el mismo orden en el que se escribieron, de otra manera el codigo lanzara un undefined.
}

const newperro = {
    nombre: 'dogo',
}

const datos = [
    tutor, direccion
]

newdogGreeting.apply(newperro, datos)