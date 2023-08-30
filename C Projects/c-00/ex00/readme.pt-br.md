# Para entender o projeto...
Neste primeiro exercício, é importante que você entenda o que a função **write** faz e como você deve utilizá-la. A função **write** faz parte da biblioteca **unistd.h** e é utilizada para escrever num **file descriptor**.

Segue o prototype da função:
```c
#include <unistd.h>

ssize_t write(int fd, const void *buf, size_t count);
```

- **fd**: O *file descriptor* onde você quer escrever. Um *file descriptor* é um número inteiro que representa um arquivo, soquete ou outro recurso de input/output. Valores comuns são `0` para a entrada padrão (stdin), `1` para a saída padrão (stdout) e `2` para o erro padrão (stderr).
- **buf**: Um ponteiro para um buffer de memória. Um buffer é uma região de memória que é usada para armazenar temporariamente dados. Neste contexto, o buffer é o local de onde os dados serão lidos para serem escritos no descritor de arquivo.
- **count**: O número de bytes que você quer escrever a partir do buffer. Ele especifica o tamanho dos dados que você quer escrever.

Lembre-se de que **write** é uma função de baixo nível para realizar operações de input/output. Existem opções de mais alto nível para realizar estas mesmas operações (como o **printf** e o **scanf**), mas por baixo dos panos, todas utilizam o **write** e por isso trabalhamos com ele aqui.                             
