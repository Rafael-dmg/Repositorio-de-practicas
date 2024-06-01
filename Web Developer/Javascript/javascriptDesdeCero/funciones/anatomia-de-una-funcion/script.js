console.log('Hola, mundo!')

let precio = 1200;
let porcentajeDescuento = 35 ;

function descuento(){
    let discount = (precio * porcentajeDescuento) / 100; 
    let finalPrice = precio - discount;

    return finalPrice;
}

descuento() //con esta solucion corregimos el uso de decimales en el porcentaje
console.log(descuento())

/* Mi primera solucion:

let precio = 1200;
let porcentaje = 0.35 ;

function descuento(){
    let discount = precio * porcentaje; 

    return precio - discount; 
}

descuento() */

/* Solucion de la profesora

function calculatedDiscountedPrice(price, discountPercentage){
    let discount = (price * discountP) / 100; 
    let priceWithDiscount = price - discount;

    return priceWithDiscount;
}

let originalPrice = 1200;
let discountPercentage = 35;
let finalPrice = calculatedDiscountedPrice(originalPrice, discountPercentage)

console.log('Original Price $' + originalPrice)
console.log('Discount:' + discountPercentage + '%')
console.log('Price with discount: $' + finalPrice)

 */