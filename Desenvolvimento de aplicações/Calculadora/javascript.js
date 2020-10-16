const valor1 = document.getElementById('numO');
const valor2 = document.getElementById('numT');
const acao = document.getElementById('actions');





function calculo() {

    alert(valor1.value);
    alert(valor2);
    alert(acao);

if (acao == "Somar") {
    var resultado = valor1 + valor2;
    alert("O resultado da soma é de :" + resultado);
}
 if(acao == "Dividir"){
    var resultado = valor1 / valor2;
    alert("O resultado da divisão é de :" + resultado);
} 
if(acao == "Multipicar"){
    var resultado = valor1 * valor2;
    alert("O resultado da multiplicação é de :" + resultado);
} 
if(acao == "Subtrair"){
    var resultado = valor1 - valor2;
    alert("O resultado da subtração é de :" + resultado);
}
    
}