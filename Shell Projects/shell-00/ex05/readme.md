## Exercise 05

In this exercise, you will be introduced to **git**, a very important tool in the daily life of programmers. Let's say you're working on a project with multiple files. During its development, you will need to create new files, modify the content of existing ones, and even delete some. Then you realize that you made a mistake and deleted a file that you shouldn't have. What do you do in that case?

Let's start by creating a new folder and adding some files inside it.

```shell
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

Now, we can initialize our **git repository**.

```shell
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

From now on, all files in this folder, **test_git**, are monitored and can be saved using git. When we finish making changes to the files, we can **package them** and **"commit"** them, which means saving their current version.

```shell
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

So, after **git add** (packaging) and **git commit** (saving), **git log** tells us that there is a version with an ID of *e870aa3781495f6388d68b40870d51b3284b6b5e* created by *Letícia Aguiar* (me) on *September 12th* with the message *creating file1 and file2*.

Now, let's add more changes.

```shell
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

Now, **git log** shows that we have two more versions saved. In one, we deleted the file *file2.txt*, and in the other, we created the file *file3.txt*. But what if we need the file we deleted again? With **git**, that's easy! We can use **git checkout** to see a snapshot of the last version that contained the file we need.

```shell
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

Notice that, in this way, we can see exactly what we had in the first version of our project. That's what git is for: saving multiple versions of our project so we can revisit them whenever we want. Git also allows multiple people to work on the same project, create branches to test new features, and much more.

Take advantage of this exercise to study git in-depth. Don't pass it by without actually knowing what git is, how it works, what the main commands are, etc. Git is a basic skill for any developer, and you will definitely use it in the future.
