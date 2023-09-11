## Exercício 03

Neste exercício, você será introduzido à um dos conceitos de autenticação mais importantes do linux: o **ssh**. Segundo o Chat GPT...

> SSH, which stands for **"Secure Shell"** is a network protocol and cryptographic tool used for securely accessing and managing remote systems over unsecured networks, such as the internet. SSH provides a secure and encrypted connection between a client and a server, allowing users to perform various tasks on a remote machine as if they were physically present at that machine's console.

Basicamente, o **ssh** é um protocolo de comunicação que permite a troca segura de informações entre dois computadores. Atualmente, ele é muito utilizado para autenticação em repositórios git.

De forma simplificada: você está criando arquivos e finalizando os exercícios no seu computador, mas neste **ambiente local** só você tem acesso à estes arquivos. Se vocẽ quiser que outras pessoas tenham acesso para, por exemplo, corrigir seus exercícios, você precisará enviá-los para um **ambiente remoto**. Para isso usaremos o git.

Entretanto, para o git ter certeza que é você (e não outra pessoa) que está enviando arquivos para este ambiente remoto, é preciso que você faça uma autenticação. É nesse momento que o **ssh** aparece como uma boa solução tanto para enviar os arquivos de forma segura e criptografada quanto para autenticar sua identidade no ambiente remoto.

## Aditional Resources
[SSH Essentials: Working with SSH Servers, Clients, and Keys](https://www.digitalocean.com/community/tutorials/ssh-essentials-working-with-ssh-servers-clients-and-keys#generate-an-ssh-key-pair-with-a-larger-number-of-bits)<br>

[Comparing SSH Keys: RSA, DSA, ECDSA, or EdDSA?](https://goteleport.com/blog/comparing-ssh-keys/)<br>

[Github: About SSH](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/about-ssh) <br>
