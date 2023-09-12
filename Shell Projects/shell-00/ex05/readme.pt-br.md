## Exercício 05

Neste exercício você será introduzido ao **git**, uma ferramenta muito importante no dia a dia dos programadores. Digamos que você está trabalhando num projeto com vários arquivo. Durante o desenvolvimento dele você precisará criar arquivos novos, alterar o conteúdo dos já existentes e até mesmo deletar alguns outros. Então você percebe que cometeu um erro e deletou um arquivo que não deveria deletar. O que fazer nesse caso?

Vamos começar criando uma nova pasta e adicionando uns arquivos lá dentro.

```
~ 
✦ ❯ mkdir test_git

~ 
✦ ❯ cd test_git 

~/test_git 
✦ ❯ echo "Welcome to 42 C Piscine" >> file1.txt

~/test_git 
✦ ❯ echo "Here, we're learning git basics" >> file2.txt

~/test_git 
✦ ❯ ls -l
total 8
-rw-rw-r-- 1 leticia-aguiar leticia-aguiar 24 Sep 12 09:32 file1.txt
-rw-rw-r-- 1 leticia-aguiar leticia-aguiar 32 Sep 12 09:32 file2.txt
```

Podemos, então, inicializamos o nosso **repositorio git**. 

```
~/test_git 
✦ ❯ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
Initialized empty Git repository in /home/leticia-aguiar/test_git/.git/
```

A partir de agora, todos os arquivos dentro dessa pasta *test_git* são monitorados e podem ser salvos utilizando o git. Quando terminamos de fazer as alterações nos arquivos, podemos **empacotá-los** e **"comitá-los"**, ou seja, salvar sua atual versão.

```
test_git 
✦ ❯ git add file1.txt file2.txt

test_git 
✦ ❯ git commit -m "creating file1 and file2"
[master (root-commit) e870aa3] creating file1 and file2
 2 files changed, 2 insertions(+)
 create mode 100644 file1.txt
 create mode 100644 file2.txt

test_git 
✦ ❯ git log
commit e870aa3781495f6388d68b40870d51b3284b6b5e (HEAD -> master)
Author: Letícia Aguiar <letsaguiar@yandex.com>
Date:   Tue Sep 12 09:37:59 2023 -0300

    creating file1 and file2
```

Assim, após o **git add** (empacotar) e o **git commit** (salvar), o **git log** nos diz que existe uma versão com um id *e870aa3781495f6388d68b40870d51b3284b6b5e* criada pela *Letícia Aguiar* (eu) em *12 de Setembro* com a mensagem *creating file1 and file2*.

Vamos adicionar mais alterações.
```
test_git
✦ ❯ rm file2.txt

test_git
✦ ❯ git add file3.txt 

test_git 
✦ ❯ git commit -m "creating file3" 
[master 436f01b] creating file3
 1 file changed, 1 insertion(+)
 create mode 100644 file3.txt

test_git
✦ ❯ echo "Now, we're learning how to get back to previous versions of your code" > file3.txt

test_git
✦ ❯ git add file3.txt 

test_git
✦ ❯ git commit -m "creating file3" 
[master 436f01b] creating file3
 1 file changed, 1 insertion(+)
 create mode 100644 file3.txt

test_git
✦ ❯ git log
commit 436f01ba01f78b0337d2b2675977b36eba0bc4ab (HEAD -> master)
Author: Letícia Aguiar <letsaguiar@yandex.com>
Date:   Tue Sep 12 09:47:24 2023 -0300

    creating file3

commit b88f96d91b912700235bfd3b4739e13ddb011cab
Author: Letícia Aguiar <letsaguiar@yandex.com>
Date:   Tue Sep 12 09:47:03 2023 -0300

    removing file2

commit e870aa3781495f6388d68b40870d51b3284b6b5e
Author: Letícia Aguiar <letsaguiar@yandex.com>
Date:   Tue Sep 12 09:37:59 2023 -0300

    creating file1 and file2
```

O **git log** agora diz que temos mais outras duas versões salvas. Em uma excluímos o arquivo *file2.txt* e em outra criamos o arquivo *file3.txt*. Mas e se precisarmos novamente do arquivo que deletamos? Com **git** isso é fácil! Podemos usar o **git checkout** e ver um snapshot da última versão que continha o arquivo que precisamos.

```
test_git
✦ ❯ git checkout e870aa3781495f6388d68b40870d51b3284b6b5e
Note: switching to 'e870aa3781495f6388d68b40870d51b3284b6b5e'.

You are in 'detached HEAD' state. You can look around, make experimental
changes and commit them, and you can discard any commits you make in this
state without impacting any branches by switching back to a branch.

If you want to create a new branch to retain commits you create, you may
do so (now or later) by using -c with the switch command. Example:

  git switch -c <new-branch-name>

Or undo this operation with:

  git switch -

Turn off this advice by setting config variable advice.detachedHead to false

HEAD is now at e870aa3 creating file1 and file2

test_git (e870aa3) 
✦ ❯ ls -l
total 8
-rw-rw-r-- 1 leticia-aguiar leticia-aguiar 24 Sep 12 09:32 file1.txt
-rw-rw-r-- 1 leticia-aguiar leticia-aguiar 32 Sep 12 09:52 file2.txt
```

Perceba que, assim, vemos exatamente o que tínhamos na primeira versão do nosso projeto. É pra isso que serve o git: guardar várias versões do nosso projeto assim podemos revisitá-las sempre que quisermos. O git também permite que várias pessoas diferentes trabalhem no mesmo projeto, possam criar **branchs** para testar novas features e muito mais. 

Aproveite este exercício para estudar git à fundo. Não passe por ele sem saber de fato o que o git é, como ele funciona, quais os principais comandos, etc. Git é a habilidade básica de qualquer desenvolvedor e você com certeza vai utilizar ele no futuro. 
