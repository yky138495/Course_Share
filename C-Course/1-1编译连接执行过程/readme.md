## GCC


### 对应参数说明
预处理 -E  对应后缀：(.i) 
 汇编-S     对应后缀：(.s) 
编译-c      对应后缀：(.o) 
连接-o


### 预处理
```
gcc -E 1-1.c -o 预处理/1-1.i 

```


### C转换为为汇编代码(下面两种均可 预处理后转汇编或者直接转)
```
gcc -S 1-1.c -o 生成汇编/1-1.s
gcc -S 预处理/1-1.i -o 生成汇编/1-1.s
```

### 编译 （仅编译操作，不进行链接）
```
gcc -c 1-1.c -o 编译/1-1.o

```

### 链接
```
gcc 编译/1-1.o -o 可执行文件/1-1
```

### 执行(计算机可以直接执行可执行二进制)
```
./可执行文件/1-1
```

### git地址
https://github.com/yky138495/Course_Share
