'strict mode'

console.log('Hello, world')

const titulo = document.querySelector('h1')

const parrafo = document.querySelector('.daparagrph')

const otroParrafo = document.querySelector('#mid')

const input = document.querySelector('input')

console.log ({
    titulo, 
    parrafo, 
    otroParrafo, 
    input
});

titulo.innerHTML = "Lasa <br> Brosura"

titulo.innerText = "Lasa <br> Brosura" //este metodo es uno de los mas basicos para protegernos de que no tengamos modificaciones maliciosas en nuestro codigo por parte de terceros

titulo.setAttribute //de nuevo como lo indica su nombre otorga un atributo a un elemento seleccionado. EJM:
titulo.setAttribute('class', 'verde');

titulo.getAttribute //nos trae el atributo (como lo indica su nombre), de algun elemento. EJM:
console.log(titulo.getAttribute('class'));


//para agregar clases es MUCHO mas recomendable usar:

//classList

//ejm:

titulo.classList.add("azul")//de esta maenra ahora la class de titulo no tiene una sola sino que tiene dos valores

titulo.classList.remove('verde')//removemos clses :V

//titulo.classList.toggle(""); nos permite intercambiar entre una clase y otra.

//titulo.classList.contains(""); es ocmo una especie de condicional true or false, nos permite validar si nuestro elemento tiene o no la clase que le estemos preguntando.

