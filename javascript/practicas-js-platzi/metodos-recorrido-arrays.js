// METODO .filter(): el nombre es bastante intuitivo

var articulos = [
    { nombre: "PS4", marca: "sony", precio: 4500 },
    { nombre: "Desktop", marca: "Maximus", precio: 3000 },
    { nombre: "Televisor", marca: "LG", precio: 5000 },
    { nombre: "Libro", marca: "Planeta", precio: 20},
    { nombre: "Control-PS4", marca: "Sony", precio: 250 },
    { nombre: "Bicicleta", marca: "Tandem", precio: 600 }, //todos los objetos deben ser almacenados dentro de sus propias llaves.
    { nombre: "Laptop", marca: "B-rreta", precio: 550 },
];

var articulosFiltrados = articulos.filter(function filtro(articulo) {
    return articulo.precio <= 400;
}
); //la variable almacena el metodo, y a su vez el metodo almacena la funcion con la que va a operar
// se crea otra variable con la finalidad de que esta sea la que almacene el resultado de la funcion. De estra manera no es modificado el array principal.

articulosFiltrados //se llama a la variable solamente no se llama como funcion porque a pesar de que almacena una funcion, no es (valga la redundancia) la funcion principal de la variable

//METODO .map()

var articulos = [
    { nombre: "PS4", marca: "Sony", precio: 4500 },
    { nombre: "Desktop", marca: "Maximus", precio: 3000 },
    { nombre: "Televisor", marca: "LG", precio: 5000 },
    { nombre: "Libro", marca: "Planeta", precio: 20},
    { nombre: "Control-PS4", marca: "Sony", precio: 250 },
    { nombre: "Bicicleta", marca: "Tandem", precio: 600 },
    { nombre: "Laptop", marca: "B-rreta", precio: 550 },
];

var mapeo = articulos.map(function marcas(articulo) {
    return articulo.marca["T"]    
})
// este metodo nos devuelve un mapeo (:D) de la propiedad que necesitemos de los objetos dentro del array