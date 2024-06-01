let userName = 'Ramgad';
let fullName = 'Rafael Martinez';
let age = '32';
let isStudent = true;

let address = {
    street: 'Evergreen',
    city: 'Springfield',
    state: 'Whereville',
    zipCode: '4523'
}

let hobbies = ['coding,', 'play the guitar,', 'learning languages']
let complementary = 'and';

let completeSentence = hobbies.slice(0, 2).concat(complementary).concat(hobbies.slice(2));

let bio = `Hello there and welcome to my blog, my name is ${fullName},
i'm ${age} years old.
My favorite activities are ${completeSentence.join(' ')}. 
Follow me to learn some more coding hacks, you can also contact me on ${userName}@tumail.com`


console.log(bio)

let infoTexto = document.querySelector('#info').innerHTML = bio;

