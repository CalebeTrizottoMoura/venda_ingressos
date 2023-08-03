DOCUMENTA��O DO PROGRAMA DE VENDA DE INGRESSOS

Este programa foi desenvolvido em linguagem C e tem o objetivo de 
realizar vendas de ingressos, listar os ingressos vendidos e 
validar ingressos atrav�s do CPF. O programa utiliza fun��es 
b�sicas de manipula��o de strings, estruturas (structs) para 
armazenar os dados dos clientes, e loops para controlar o fluxo
do programa.


TECNOLOGIAS UTILIZADAS:
Linguagem de programa��o C.
Foram utilizadas as bibliotecas <stdio.h>, <stdlib.h>, 
<string.h> e <locale.h>.


FUN��ES UTILIZADAS:
void clean_buffer(): limpa o buffer do teclado para evitar 
problemas com caracteres indesejados.

void read_text(char *name, int size): l� uma string digitada 
pelo usu�rio (com limite de tamanho) e remove o caractere '\n' 
que � adicionado pela fun��o fgets.

void format_cpf(char *old_cpf, char new_cpf[]): formata um CPF
inserindo pontos e h�fen.

void vender_ingresso(int *codigo, struct dados_cliente venda[]):
fun��o para realizar a venda de um ingresso, solicitando o nome
e CPF do cliente.

void listar_ingressos(int *codigo, struct dados_cliente venda[]):
lista todos os ingressos vendidos at� o momento.

void validar_ingresso(struct dados_cliente venda[]): valida um
ingresso atrav�s do CPF digitado pelo usu�rio.


ESTRUTURAS UTILIZADAS:
struct dados_cliente: estrutura que armazena os dados do cliente, 
incluindo nome, CPF e ano de nascimento.


COMO UTILIZAR O PROGRAMA:
Ao executar o programa, voc� ver� um menu principal com as op��es 
dispon�veis. Para vender um ingresso, selecione a op��o "1" e 
forne�a o nome e CPF do cliente. O CPF ser� formatado 
automaticamente. Para listar os ingressos vendidos, selecione 
a op��o "2". Ser� exibida a lista com nome, CPF e ano de 
nascimento de cada cliente. Para validar um ingresso, selecione a 
op��o "3" e insira o CPF do cliente. O programa mostrar� se o 
ingresso foi validado ou n�o. Se desejar sair do programa, 
selecione a op��o "4".


OBSERVA��ES IMPORTANTES:
O programa possui um limite de 99 ingressos vendidos. Ap�s atingir 
esse limite, n�o ser� poss�vel vender novos ingressos. Todavia, 
podemos fazer altera��es ilimitadas na diretiva TAM. Al�m disso, 
caso as acentua��es, ou outros carecteres especiais, n�o aparecerem 
corretamente em seu VS Code, voc� precisar� alterar a codifica��o 
padr�o para "windows 1252" na op��o Encoding. 
(File > Preferences > Settings > Search Settings > Encoding)
