console.log('Hola, mundo!')

const titulo = document.querySelector('h1')

const resultadoFinal = document.querySelector('p')

const valor1 = document.querySelector('#num1')

const valor2 = document.querySelector('#num2')

const input = document.querySelector('#result')

function calcular() {
    let conversion1 = Number(valor1.value); // Corregir la conversión
    let conversion2 = Number(valor2.value); // la coercion se realiza dentro de la funcion con la finalidad de que al llamarla, la misma tenga la conversion directamente y no que tenga que traer los datos de una variable externa
    
    //console.log(conversion1 + conversion2); 
    
    let resultado = conversion1 + conversion2;

    resultadoFinal.innerHTML = `tu resultado es ${resultado}`;
}

input.addEventListener('click', calcular)