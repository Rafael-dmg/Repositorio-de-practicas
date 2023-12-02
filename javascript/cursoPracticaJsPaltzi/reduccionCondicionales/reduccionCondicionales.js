//ejemplo para solucionar el anidamiento excesivo en un condicional if usando solo condicionales if, en lugar de if-else if
//los ejemplos dados son con los tipos de planes anuales de platzi

function tipoSuscripcion (suscripcion) {
    if (suscripcion === "Free") {
        console.log("Solo puedes tomar los cursos gratis")
        return;
    }
    
    if (suscripcion === "Basic") {
        console.log("Puedes tomar algunos cursos de Platzi por un año")
        return;
    }


    if (suscripcion === "Expert") {
        console.log("Puedes tomar todos los cursos de Platzi por un año")
        return;
    }

    if (suscripcion === "ExpertDuo") {
        console.log("Tu y alguien mas pueden tomar todos los cursos de Platzi por un año")
        return;
    }
     
    console.warn("Ese tipo de suscripcion no existe")
}

tipoSuscripcion("Expert")

//con el return lo que hacemos es evitar que se ejecute el codigo entero y solo nos devuelva el condicional que necesitamos, si estuviesemos utilizando este metodo de solos if, ejecutaria todos hasta encontrar la solucion, y no cortaria por ejemplo si insertamos el console.warn, al ejecutarlo nos saldria tanto la condicion que se cumplio, como el console.warn.

//Bonus: si ya eres una experta o experto en el lenguaje, te desafío a comentar cómo replicar este comportamiento con arrays u objetos y un solo condicional. 😏

const tipoDeSuscripciones = {
    Free: "Solo puedes tomar los cursos gratis",
    Basic: "Puedes tomar algunos cursos de Platzi por un año",
    Expert: "Puedes tomar todos los cursos de Platzi por un año",
    ExpertDuo: "Tu y alguien mas pueden tomar todos los cursos de Platzi por un año",
  };

  function respuesta (suscripcion) {
    if (tipoDeSuscripciones[suscripcion]) {
        console.log(tipoDeSuscripciones[suscripcion])
        return;
    }
    console.warn("no existe ese plan")
}