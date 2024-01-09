const caricatura = {
    nombre:'Coraje el perro cobarde'
}

function recuerdo () {
    console.log(`${this.nombre} era mi caicatura favorita cuando era niño. 
    Podia pasar horas viendo las aventuras y desventuras de ${personaje1}, ${personaje2} y ${personaje3}`)
}

recuerdo.call(caricatura, 'Coraje')
recuerdo.bind(caricatura, 'Muriel')