let acordes = ["do", "re", "mi", "fa"]; 



function duplicado(acordes) {
    let copiaAcordes = [];

    for (let i = 0; i < acordes.length; i++) {
        copiaAcordes.push(acordes[i]);
        copiaAcordes.push(acordes[i]);
    }

    return copiaAcordes
}

const dobleValor = duplicado(acordes);

console.log(dobleValor);

//resultado: ['do', 'do', 're', 're', 'mi', 'mi', 'fa', 'fa']

// Paso a paso:
// Inicialización del array acordes: Se tiene un array llamado acordes con elementos "do", "re", "mi" y "fa".

// Función duplicado:

// Se declara una función llamada duplicado que toma un array acordes como parámetro.
// Se inicializa un nuevo array vacío llamado copiaAcordes.
// Recorriendo el array acordes:

// Se usa un bucle for que itera sobre cada elemento del array acordes.
// Para cada elemento acordes[i], se agrega dos veces ese elemento al array copiaAcordes utilizando copiaAcordes.push(acordes[i]) dos veces.
// Retorno del nuevo array:

// La función retorna el array copiaAcordes, que contiene cada elemento duplicado.
// Uso de la función y visualización del resultado:

// Se llama a la función duplicado pasando el array acordes como argumento y se guarda el resultado en la variable dobleValor.
// Se muestra en la consola el array dobleValor, que contiene los elementos duplicados.
// Entonces, al ejecutar esta función con el array de acordes proporcionado, el resultado será un nuevo array llamado dobleValor que contiene cada elemento duplicado, manteniendo el orden original de los acordes. Es decir, el nuevo array tendrá cada acorde seguido por una copia de sí mismo en el mismo orden.