# gerenciaescola
<br>

Pequeno sistema CRUD para gerenciar dados de alunos de uma escola

# Instalando e executando

Com o terminal aberto no diretório em que deseja colocar os arquivos, digite:

```console
$ https://github.com/danihenrif/gerenciaescola.git
```
Entre no diretório:

```console
$ cd gerenciaescola
```


## Para compilar 
```console
make all
```

## Para executar 
```console
./main
```

## Para compilar e executar
```console
make run
```

# Ao executar o seguinte menu será exibido:
```console
===== SISTEMA ESCOLA BLA BLA BLA =========================================
    1 - CADASTAR ESTUDANTE                                  [ 0 - Fechar ]
    2 - ATUALIZAR INFORMAÇÃO DO ESTUDANTE
    3 - DELETAR CADASTRO
    4 - VERIFICAR NOTAS DO(A) ESTUDANTE
    5 - ALTERAR NOTA
    6 - LISTAR DADOS
    7 - LISTAR SITUAÇÃO DOS ESTUDANTES
==========================================================================
```

# Funcionalidades <br>

<h3>0 - FECHAR <h3>
Encerra a execução do programa<br><br>

<h3> 1 - CADASTRAR ESTUDANTE <h3>

```console
Digite o nome do estudante: daniel
Digite o nome do curso: TI
Digite o cpf(sem hífen e ponto final): \
Digite as três notas (separadas por espaço): 10 10 10
```
2 - ATUALIZAR INFORMAÇÃO DO ESTUTANDE
```console
Qual informação você deseja alterar ?
(a - nome do estudante)
(b - nome do curso)
(c - cpf)
a
Qual é o nome do estudante: 
daniel

Qual é o cpf do estudante: 
\

Qual é o novo nome do estudante: 
fernandes

Nome alterado com sucesso!!
```

3 - DELETAR CADASTRO
```console
Qual é o nome do estudante: daniel

Qual é o cpf do estudante: \

Digite as três notas (separadas por espaço): 10 10 10

Não foi possível encontrar tal cadastro!!
```

```console
Qual é o nome do estudante: fernandes

Qual é o cpf do estudante: \

Cadastro excluído com sucesso!!
```
4 - VERIFICAR NOTAS DO ESTUDANTE
```console
Qual é o nome do estudante: daniel

Qual é o cpf do estudante: 0

Nota 1: 10
Nota 2: 10
Nota 3: 10
```

5 - ALTERAR NOTA
```consome
Qual é o nome do estudante: daniel

Qual é o cpf do estudante: 0

Digite as três notas (separadas por espaço): 8 7 4

Nota alterada com sucesso!!
```

6 - LISTAR DADOS
```console
Nome do estudante: daniel
Nome do curso: TI
Número do cpf: 0
Número da matrícula: 0
Nota 1: 8
Nota 2: 7
Nota 3: 4
Média: 6


Nome do estudante: SALVE
Nome do curso: TI
Número do cpf: 10
Número da matrícula: 1
Nota 1: 10
Nota 2: 5
Nota 3: 4
Média: 6
``` 

7 - LISTAR SITUAÇÃO DOS ESTUDANTES
```console
Nome : daniel
Cpf : 0
Situação : Aprovado por notas (APRN)


Nome : SALVE
Cpf : 10
Situação : Aprovado por notas (APRN)
```

# Conceitos abordados no projeto
 - POO
 - Lista ligada
 - Ponteiros 