## Compartilhar Soluções
Este arquivo visa facilitar o caminho e guiar os estudantes em suas contribuições. Se você deseja fazer o compartilhamento de suas soluções dos problemas apresentados, siga os passos abaixo.
#### _Se não se sente confortável com a linha de comando, [aqui estão alguns tutoriais de ferramentas gráficas.](#tutoriais-usando-outras-ferramentas)_

<img align="right" width="300" img src="screenshots\fork.png" alt="fork deste repositório" />

Se não possui o git em sua máquina, [instale-o aqui](https://help.github.com/articles/set-up-git/).

## Faça um _Fork_ deste repositório

Faça um _Fork_ clicando no botão "_Fork_" no topo desta página, uma cópia deste repositório será criada em sua conta.

## Clone o repositório

<img align="right" width="300" img src="screenshots\code.png" alt="clonar este repositório" />

Agora clone este repositório para a sua máquina. Clique no botão "_Code_" e, em seguida, clique no ícone "_Copy to clipboard_" para copiar a URL.

Abra um terminal e execute o seguinte comando do git:

```
git clone "url que copiou"
```

onde "url que copiou" (sem as aspas) é a URL deste repositório (seu fork deste projeto). Consulte as etapas anteriores para obter a URL.

<img align="right" width="300" img src="screenshots\copy.png" alt="copiar URL" />

Por exemplo:

```
git clone https://github.com/seu-usuario/GruProStudents.git
```

onde "seu-usuário" é o seu usuário do _GitHub_. Aqui você estará copiando o conteúdo do repositório _GruProStudents_ para o seu computador.

## Crie um Branch

Acesse o diretório do repositório no seu computador (caso você não esteja nele):

```
cd GruProStudents
```

Agora crie um _Branch_ usando o comando `git switch`:

```
git switch -c <add-seu-nome>
```

Por exemplo:

```
git switch -c add-marlonwq
```

Obs.: O nome do _Branch_ não precisa ter a sigla "add", mas nesse caso é recomendável, porque a finalidade deste _Branch_ é a de adicionar o seu nome à uma lista.

## Efetue as alterações necessárias e faça um _Commit_


<img align="left" width="275" src="screenshots\solucao.png" alt="copiar URL" />Siga este caminho `Nível` -> `conteúdo` -> `exercícios` -> `dia` -> `soluções` e em seguida adicione seus códigos a uma pasta com seu nome.

```
Exemplo: Nível 1, Conteúdo 1, Exercícios do dia 1.
```
---

Se você for para o diretório do projeto e executar o comando `git status`, verá que há alterações. Adicione essas alterações ao _Branch_ que você acabou de criar utilizando o comando `git add`:

```
git add .
```

Agora, confirme essas alterações usando o comando git commit `git commit`:

```
git commit -m "Adicionei minhas soluções dos exercícios correspondentes a <nível-conteúdo-aula>"
```

Substituindo `<nível-conteúdo-aula>` pelo endereço correspondente a seu caso.

## Faça um Push das alterações para o _GitHub_

Envie suas alterações usando o comando `git push`:

```
git push origin <nome-da-sua-branch>
```

substituindo `<nome-da-sua-branch>` pelo nome do _Branch_ que você criou anteriormente.

## Envie suas alterações para serem revisadas

Se você for para o seu repositório no _GitHub_, verá um botão `Compare & pull request`. Clique nesse botão.

<img style="float: right;" src="screenshots\pr.png" alt="Crie um Pull Request" />

Agora envie um _Pull Request_.

<img style="float: right;" src="screenshots\enviar.png" alt="Envie o Pull Request" />

Logo estará mesclando ('mergeando') as suas mudanças no _Branch_ principal (main) deste projeto. Você receberá um e-mail de notificação quando as alterações forem mescladas.

## Tutoriais usando outras ferramentas

<a href="../tutoriais/translations/github-desktop-tutorial.pt_br.md"><img alt="GitHub Desktop" src="https://desktop.github.com/images/desktop-icon.svg" width="100">

[GitHub Desktop](github-desktop.md)   
