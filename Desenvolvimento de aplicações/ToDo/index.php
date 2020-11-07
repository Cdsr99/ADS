<?php
// index sera o ponto central

require "src/classes/Tarefa.php";
require "src/classes/ArquivoTarefa.php";

// esta linha redireciona qualquer requisição no index para o endereco
// header('Location: /resource/lista_tarefas.html');

$template = file_get_contents('resource/lista_tarefas.html');

$arquivoTarefa = new ArquivoTarefa('tarefas.txt');// envia para ArquivoTarefa.php
$listaTarefasJSON = $arquivoTarefa->le();// ler o arquivo e salvar em uma variavél 
//$listaTarefasJSON recebe
$modeloTarefa = file_get_contents('resource/tarefa.html');//?

$linhasTabela = ''; //Limpar a variavel


foreach ($listaTarefasJSON as $tarefa) { // as ?
    $tr = '';
    $tr = str_replace('#STATUS', $tarefa->legenda(), $modeloTarefa);
    $tr = str_replace('#ID',     $tarefa->getId(), $tr);
    $tr = str_replace('#NOME',  $tarefa->getNome(), $tr);
    $tr = str_replace('#DATALIMITE', $tarefa->getDataLimite(), $tr);
    $tr = str_replace('#MARCADO', $tarefa->getStatus() == 0 ? 'checked' : '', $tr);
    $linhasTabela .= $tr;
}

echo str_replace('#TAREFAS', $linhasTabela, $template);

$escolha = $_POST['slc'];

echo "a escolha foi $escolha";