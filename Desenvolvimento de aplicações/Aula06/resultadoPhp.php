<?php

$val1 = $_POST['val1'];
$val2 = $_POST['val2'];

$soma = $val1 + $val2;
$subtracao = $val1 - $val2;
$divisao = $val1 / $val2;
$multiplicacao = $val1 * $val2;


//print_r($_POST);
echo "Os valores inseridos foram : $val1 e $val2 <br><br>";

echo "<p> O valor da soma é: $soma <p>";
echo "O valor da subtracao é: $subtracao<p>";
echo "O valor da divisao é: $divisao<p>";
echo "O valor da multiplicacao é: $multiplicacao<p>";

