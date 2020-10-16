/*var valor1 = document.getElementById("numO");
var valor2 = document.getElementById('numT');
var acao = document.getElementById('actions');*/


function calculo() {

    var valor1 = document.getElementById("num1");
    var valor2 = document.getElementById('num1');
    var acao = document.getElementById('actions');

    var n1 = parseInt(valor1.value);
    var n2 = parseInt(valor2.value);
    

if (acao.value == "Somar") {
    var resultado = n1 + n2;
    alert("O resultado da soma é de :" + resultado);
}
 if(acao.value == "Dividir"){
    var resultado = n1 / n2;
    alert("O resultado da divisão é de :" + resultado);
} 
if(acao.value == "Multiplicar"){
    var resultado = n1 * n2;
    alert("O resultado da multiplicação é de :" + resultado);
} 
if(acao.value == "Subtrair"){
    var resultado = n1 - n2;
    alert("O resultado da subtração é de :" + resultado);
}
    
}