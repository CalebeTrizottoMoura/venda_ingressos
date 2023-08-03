DOCUMENTAÇÃO DO PROGRAMA DE VENDA DE INGRESSOS

Este programa foi desenvolvido em linguagem C e tem o objetivo de 
realizar vendas de ingressos, listar os ingressos vendidos e 
validar ingressos através do CPF. O programa utiliza funções 
básicas de manipulação de strings, estruturas (structs) para 
armazenar os dados dos clientes, e loops para controlar o fluxo
do programa.


TECNOLOGIAS UTILIZADAS:
Linguagem de programação C.
Foram utilizadas as bibliotecas <stdio.h>, <stdlib.h>, 
<string.h> e <locale.h>.


FUNÇÕES UTILIZADAS:
void clean_buffer(): limpa o buffer do teclado para evitar 
problemas com caracteres indesejados.

void read_text(char *name, int size): lê uma string digitada 
pelo usuário (com limite de tamanho) e remove o caractere '\n' 
que é adicionado pela função fgets.

void format_cpf(char *old_cpf, char new_cpf[]): formata um CPF
inserindo pontos e hífen.

void vender_ingresso(int *codigo, struct dados_cliente venda[]):
função para realizar a venda de um ingresso, solicitando o nome
e CPF do cliente.

void listar_ingressos(int *codigo, struct dados_cliente venda[]):
lista todos os ingressos vendidos até o momento.

void validar_ingresso(struct dados_cliente venda[]): valida um
ingresso através do CPF digitado pelo usuário.


ESTRUTURAS UTILIZADAS:
struct dados_cliente: estrutura que armazena os dados do cliente, 
incluindo nome, CPF e ano de nascimento.


COMO UTILIZAR O PROGRAMA:
Ao executar o programa, você verá um menu principal com as opções 
disponíveis. Para vender um ingresso, selecione a opção "1" e 
forneça o nome e CPF do cliente. O CPF será formatado 
automaticamente. Para listar os ingressos vendidos, selecione 
a opção "2". Será exibida a lista com nome, CPF e ano de 
nascimento de cada cliente. Para validar um ingresso, selecione a 
opção "3" e insira o CPF do cliente. O programa mostrará se o 
ingresso foi validado ou não. Se desejar sair do programa, 
selecione a opção "4".


OBSERVAÇÕES IMPORTANTES:
O programa possui um limite de 99 ingressos vendidos. Após atingir 
esse limite, não será possível vender novos ingressos. Todavia, 
podemos fazer alterações ilimitadas na diretiva TAM. Além disso, 
caso as acentuações, ou outros carecteres especiais, não aparecerem 
corretamente em seu VS Code, você precisará alterar a codificação 
padrão para "windows 1252" na opção Encoding. 
(File > Preferences > Settings > Search Settings > Encoding)
