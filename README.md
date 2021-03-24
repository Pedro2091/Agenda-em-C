# agenda-em-C
Uma agenda simples usando C.  O foco é aprender a usar o struct.


ATIVIDADE – AGENDA – ALGORITMOS II

DESCRITIVO:
  Desenvolver um programa em C que possibilite ao usuário gerenciar sua agenda de contatos.
  Cada contato deve ser armazenado em um registro (Struct), contendo os seguintes atributos: Código
  (Inteiro), Nome Completo (String), Telefone (String), E-mail (String), Data de Nascimento
  (String) e Observações (String). Seu programa permitirá armazenar no máximo 10 contatos.
  O programa deve conter as seguintes funcionalidades, que devem ser acessadas através de um
  menu: Cadastrar, Listar, Buscar, Alterar e Excluir.

> Cadastrar: Deve-se ler os respectivos dados de contato e armazenar em uma posição livre
do vetor de contatos. Caso a agenda já estiver cheia, será exibida a mensagem “Agenda
cheia!” para o usuário. Deve-se fazer uma validação para que o código informado seja maior
do que zero.

> Listar: Deve-se exibir uma lista com todos os contatos registrados. Caso a agenda estiver
vazia, será exibida a mensagem “Agenda vazia!” para o usuário.

> Buscar: Deve-se permitir a busca de uma contato por código ou nome. Caso o contato seja
encontrado, será exibido todos os seus dados na tela. Caso contrário, será exibida a
mensagem “Contato não encontrado!” para o usuário.

> Alterar: Deve-se permitir a alteração de todos os dados de um contato cadastrado. A busca
do contato será através de seu código. Caso o código não seja encontrado, será exibida a
mensagem “Contato não encontrado!” para o usuário.

> Excluir: Deve-se permitir a exclusão de contatos. A busca pelo contato a ser excluído será
através de seu código. Caso o código não seja encontrado, será exibida a mensagem
“Contato não encontrado!” para o usuário. A exclusão deve ser feita colocando-se o número
0 no atributo “código” do registro.

DETALHES DA IMPLEMENTAÇÃO:
  Para a implementação do projeto, deve-se atentar aos seguintes requisitos:
  > Utilizar funções.
  > Manter o código organizado e comentado.
  > Verificar o funcionamento correto de cada parte do programa.
  > Respeitar o prazo e escopo de cada entrega.
  > Manter a organização no versionamento do projeto.

PRAZO PARA ENTREGA DE CADA PARTE:
  > Cadastrar: 11/03/21
  > Listar: 18/03/21
  > Buscar: 25/03/21
  > Alterar: 01/04/21
  > Excluir: 08/04/21
