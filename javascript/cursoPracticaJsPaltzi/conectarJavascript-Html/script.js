// 'strict mode'

// console.log('Hello, world')

// const titulo = document.querySelector('h1')

// const parrafo = document.querySelector('.daparagrph')

// const otroParrafo = document.querySelector('#mid')

// const input = document.querySelector('input')

// console.log ({
//     titulo, 
//     parrafo, 
//     otroParrafo, 
//     input
// });

// titulo.innerHTML = "Lasa <br> Brosura"

// titulo.innerText = "Lasa <br> Brosura" //este metodo es uno de los mas basicos para protegernos de que no tengamos modificaciones maliciosas en nuestro codigo por parte de terceros

// titulo.setAttribute //de nuevo como lo indica su nombre otorga un atributo a un elemento seleccionado. EJM:
// titulo.setAttribute('class', 'verde');

// titulo.getAttribute //nos trae el atributo (como lo indica su nombre), de algun elemento. EJM:
// console.log(titulo.getAttribute('class'));


// //para agregar clases es MUCHO mas recomendable usar:

// //classList

// //ejm:

// titulo.classList.add("azul")//de esta maenra ahora la class de titulo no tiene una sola sino que tiene dos valores

// titulo.classList.remove('verde')//removemos clses :V

// //titulo.classList.toggle(""); nos permite intercambiar entre una clase y otra.

// //titulo.classList.contains(""); es ocmo una especie de condicional true or false, nos permite validar si nuestro elemento tiene o no la clase que le estemos preguntando.

// const foto = document.createElement('img')
// foto.setAttribute('class', 'parrafo');
// foto.setAttribute('src', 'https://images.pexels.com/photos/19287950/pexels-photo-19287950/free-photo-of-madera-hombre-gente-mujer.jpeg?auto=compress&cs=tinysrgb&w=300&lazy=load')

// //mid.append(foto); //

// console.log(foto.getAttribute('class'));

// //Pero como hacemos si queremos eliminar el contenido de mid en HTML y solo dejar la imagen?

// mid.innerHTML = ""; //creamos un string vacio para el contenido en el HTML y luego
// mid.appendChild(foto); //agregamos la imagen con el append o appendhild

///////////////////////////////////////////////////////////////////////////////////////////////////

// let tituloAlternativo = document.querySelector('h1').innerText = 'Ahora el titulo se vera asi';

// const input = document.querySelector('input')

// input.classList.add('loco');

// console.log(input.getAttribute('class'));

// // claseNueva.setAttribute('placeholder', 'Nuevo placeholder papu')

// const foto = document.createElement('img')

// foto.setAttribute('id', 'imagen');
// foto.setAttribute('src', 'https://images.pexels.com/photos/19287950/pexels-photo-19287950/free-photo-of-madera-hombre-gente-mujer.jpeg?auto=compress&cs=tinysrgb&w=300&lazy=load');

// imagen.innerHTML = '';
// imagen.append(foto);


// const convert1 = document.querySelector('#input1');

// const convert2 = document.querySelector('#input2');

// let conversion1 = Number(convert1); //Des esta manera se realiza la conercion
// let conversion2 = Number(convert2);

// console.log(typeof conversion1, conversion2)

let hi = document.querySelector('#nombre')

function saludar() {
    alert(hi.value);
}