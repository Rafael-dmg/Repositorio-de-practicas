let finalResult;

    let evenOddResult;

    // Add your code here
    let num1 = 2;
    let num2 = 4;
    let num3 = 8;
    let num4 = 16;

function operation () {
   var numx = num2 + num1;
   var numy = num4 - num3;

finalResult = numx * numy;

function check(finalResult) {
    var resto = finalResult % 2 === 0;

    if(resto === 0) {
        evenOddResult = 0
    } else if (resto != 0) {
        evenOddResult !=0
    }
}
    check()
}

operation()


    // Don't edit the code below here!

    const section = document.querySelector('section');

    const para1 = document.createElement('p');
    const finalResultCheck = finalResult === 48 ? `Yes, well done!` : `No, it is ${ finalResult }`;
    para1.textContent = `Is the finalResult 48? ${ finalResultCheck }`;
    const para2 = document.createElement('p');
    const evenOddResultCheck = evenOddResult === 0 ? 'The final result is even!' : 'The final result is odd. Hrm.';
    para2.textContent = evenOddResultCheck;

    section.appendChild(para1);
    section.appendChild(para2);