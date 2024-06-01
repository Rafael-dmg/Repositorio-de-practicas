var estudiantes = ['maria', 'jose', 'rosa', 'daniel']

function saludarEstudiantes(estudiante) {
    console.log(`Hola ${estudiante}`)
}

for(var i = 0; i < estudiantes.length; i++) {
    saludarEstudiantes(estudiantes[i])
}

// resultado: 
// Hola, maria
// Hola, jose
// Hola, rosa
// Hola, daniel

//2da manera

for (var estudiante of estudiantes) {
    saludarEstudiantes(estudiante)
}