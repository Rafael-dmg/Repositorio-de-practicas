var acordes = ['do', 're', 'mi', 'fa'];

function nombrarAcordes(acorde) {
    console.log(`"Soy un, ${acorde}"`);
}

while(acordes.length > 0) {
    console.log(acordes);//mandamos a traer el array para visualizar mejor como el shift va sacando los elementos del array a medida que los imprime y una vez que llega a 0 como no se cumple mas el ciclo termina.
    var acorde = acordes.shift(); //porque shift? porque con este metodo de mutacion lo que haremos directamente sera sacar elementos del array a medida que los vaya imprimiendo, entonces una vez que ya haya sacado todos los elementos la condicion dejar de cumplirse y el ciclo terminara.
    nombrarAcordes(acorde);
}

//resultado: 
 (4) ['do', 're', 'mi', 'fa']
 "Soy un, do"
 (3)['re', 'mi', 'fa']
 "Soy un, re"
 (2)['mi', 'fa']
 "Soy un, mi"
 ['fa']
 "Soy un, fa"
 undefined