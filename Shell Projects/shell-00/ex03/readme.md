## Exercise 03

In this exercise, you will be introduced to one of the most important authentication concepts in Linux: **SSH**. According to Chat GPT...

> SSH, which stands for **"Secure Shell,"** is a network protocol and cryptographic tool used for securely accessing and managing remote systems over unsecured networks, such as the internet. SSH provides a secure and encrypted connection between a client and a server, allowing users to perform various tasks on a remote machine as if they were physically present at that machine's console.

Basically, **SSH** is a communication protocol that enables the secure exchange of information between two computers. Currently, it is widely used for authentication in Git repositories.

In simplified terms: you are creating files and completing exercises on your computer, but in this **local environment,** only you have access to these files. If you want other people to have access, for example, to review your exercises, you need to send them to a **remote environment.** We use Git for this purpose.

However, for Git to be sure that it's you (and not someone else) who is sending files to this remote environment, you need to authenticate. This is where **SSH** comes in as a good solution both for sending files securely and encrypted and for authenticating your identity in the remote environment.

## Additional Resources
[SSH Essentials: Working with SSH Servers, Clients, and Keys](https://www.digitalocean.com/community/tutorials/ssh-essentials-working-with-ssh-servers-clients-and-keys#generate-an-ssh-key-pair-with-a-larger-number-of-bits)<br>

[Comparing SSH Keys: RSA, DSA, ECDSA, or EdDSA?](https://goteleport.com/blog/comparing-ssh-keys/)<br>

[Github: About SSH](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/about-ssh) <br>
