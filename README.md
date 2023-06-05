# README

## Building an app

```shell
clang++ --std=c++20 -O3 -fsanitize=address,undefined -Wall -Wextra -Werror 1.2.1_hello.cpp -o hello
```

If we ommit the `-o` flag, the compiler will create an output file with the name `a.out`.
