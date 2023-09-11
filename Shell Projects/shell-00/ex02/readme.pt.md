## Exercício 02

Este exercício é muito semelhante ao anterior. Você precisará conhecer as principais informações que podemos extrair e as principais configurações que podemos fazer em diretórios e arquivos no unix. Porém, você também será apresentado à um novo conceito: os **links**.

De acordo com o Chat GPT...

> **Hard Links:**
>
> - **Definition:** A hard link is a reference to an inode (a data structure that stores information about a file) of a file or directory. Multiple hard links can point to the same inode, and all of them are essentially the same file. When you create a hard link, you're creating an additional directory entry for the same data on the disk.
> 
> - **Filesystem Dependence:** Hard links work only within the same filesystem because they refer to inodes, which are specific to a filesystem.
> 
> - **Usage:** Hard links are used for creating multiple directory entries for a single file, which can be helpful for keeping the same data accessible from multiple locations without duplicating it on disk.
> 
> - **Behavior:** All hard links to a file share the same inode, so if you modify one hard link, the changes are reflected in all the others because they all point to the same data blocks on disk. When the last hard link to an inode is deleted, the data blocks are released, and the disk space is reclaimed.
> 
> - **Example:** To create a hard link, you can use the `ln` command. For instance:
> 
>   ```bash
>   ln sourcefile hardlinkname
>   ```
> 
> **Soft Links (Symbolic Links):**
> 
> - **Definition:** A soft link (or symbolic link) is a separate file that contains a pathname reference to the target file or directory. Unlike hard links, symbolic links do not directly reference inodes; they point to the target file or directory by their pathname.
> 
> - **Filesystem Independence:** Symbolic links work across different filesystems because they refer to file paths, which are independent of the underlying filesystem.
> 
> - **Usage:** Symbolic links are used for creating shortcuts or references to files and directories, even if they are located in different locations or on different filesystems.
> 
> - **Behavior:** Symbolic links can span different filesystems, and they continue to work even if the target file or directory is moved or renamed. If you delete a symbolic link, it doesn't affect the target file or directory. However, if you delete the target, the symbolic link becomes a "dangling link" and points to a non-existent file or directory.
> 
> - **Example:** To create a symbolic link, you can use the `ln` command with the `-s` option:
> 
>   ```bash
>   ln -s targetfile symlinkname
>   ```
> 
> In summary, hard links and soft links serve different purposes in Linux:
> 
> - **Hard links** are used for creating multiple directory entries for the same file or directory within the same filesystem. Changes to one hard link affect all hard links because they share the same data on disk.
> 
> - **Soft links** (symbolic links) are used for creating references to files or directories regardless of their location or filesystem. They are more flexible but are subject to "dangling" if the target is deleted.

**💡 man ln**
