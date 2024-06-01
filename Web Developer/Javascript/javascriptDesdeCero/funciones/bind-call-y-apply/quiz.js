const caricatura = {
    nombre:'Coraje el perro cobarde',
    duenos: ['Coraje', 'Muriel', 'Justo']
}

function recuerdo (personaje1, personaje2, personaje3) {
    console.log(`${this.nombre} era mi caricatura favorita cuando era niño. 
    Podia pasar horas viendo las aventuras y desventuras de ${personaje1}, ${personaje2} y ${personaje3}`)
}



recuerdo.call(caricatura, 'Coraje', 'Muriel', 'Justo')
// recuerdo.bind(caricatura, 'Muriel')

let bindingMemories = recuerdo.bind(caricatura, 'Coraje', 'Muriel', 'Justo')

bindingMemories()

recuerdo.apply(caricatura, caricatura.duenos)


