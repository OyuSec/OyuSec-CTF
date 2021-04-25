### Challenge introduction
So my [challenge](https://github.com/oyusec/OyuSec-CTF/blob/master/Writeup/%D0%A3%D1%80%D1%82%20%D1%88%D0%B0%D0%BB%D0%B3%D0%B0%D0%BB%D1%82/challenge) is reversing elf file.
* random number with seed
* statically linked binary
* c++ for harder to read


### Solution (player view)
```sh
[~/]$ rabin2 -I challenge
arch     x86
canary   true
class    ELF64
compiler GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
lang     c++
linenum  true
machine  AMD x86-64 architecture
static   true
stripped false
```

Statically linked binary bigger c++ and luckily not stripped so symbols are clear.

So there is many comparasions with random numbers. For random number `srand(1337)` it uses seed so we can pass it.

![img](https://github.com/ByamB4/cybertalent-internship/blob/main/public/img/1.png)

For solution we can use [angr](https://github.com/angr/angr). But there is no correct meaning output, and hard to find address. Also we can debug each time but takes sometime.

> It's quick to use [z3](https://github.com/Z3Prover/z3) comparasions are clear.

So script will be like that
* create **getKeys.cpp** to get random numbers
* add comparisions to z3
* submit flag :')

Final script is [here](https://github.com/ByamB4/cybertalent-internship/blob/main/sol.py)
