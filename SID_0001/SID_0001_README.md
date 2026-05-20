# [SID_0001] Hello World



# 简介 / Introduction

这是一个最简单的例子。你可以通过构建该例程来学习如何搭建ArtC的开发环境。

This is the simplest example. You can learn how to build an ArtC development environment by building it.



# 适用环境 / Prerequisites or Environment

本例程依赖的运行环境：

| 项 / Item                     | 值 / Value       |
| ----------------------------- | ---------------- |
| 操作系统 / Operating system   | Windows 10       |
| c编译器 / C compiler version  | minGW gcc 15.2.0 |
| artcc版本 / Artcc version     | v0.7.8           |
| artwork版本 / Artwork version | v0.7.8           |



本例程是在Windows10 环境下生成的。

在Windows11 环境下，应该也可以构建该例程的编译、运行环境。



编译、运行该例程前，需要先安装以下工具：

i686-15.2.0-release-win32-dwarf-ucrt-rt_v13-rev1.7z

https://github.com/niXman/mingw-builds-binaries/releases/download/15.2.0-rt_v13-rev1/i686-15.2.0-release-win32-dwarf-ucrt-rt_v13-rev1.7z

安装方法：

将解压后的文件，放在C:\mingw，然后将C:\mingw\bin加入到系统path中。



artcc

使用源码编译出目标文件。将目标文件及依赖的动态库文件，放在C:\artcc\bin, 然后将C:\artcc\bin加入到系统path中。

artwork

使用源码编译出目标文件。将目标文件及依赖的动态库文件，放在C:\artwork\bin, 然后将C:\artwork\bin加入到系统path中。



# 文件结构 / File Structure

在Window命令行使用artwork生成该例程的源码：

```batch
D:\samples> artwork new ws -n "SID_0001"
D:\samples> cd "SID_0001"
D:\samples\SID_0001> artwork new exe -n main
D:\samples\SID_0001> artwork ws add main
```



文件结构：

```c
SID_0001/
│
├── .gitignore
├── SID_0001.acws
├── main/
    ├── .gitignore
    ├── main.aclib
    └── src/
        ├── main.artc
        └── main.test.artc
```

# 编译方法 / How to Build

```batch
D:\samples\SID_0001> artwork build
```

# 运行方法 / How to Run

```batch
D:\samples\SID_0001> artwork run
```

# 关键代码说明 / Key Code Explanation





# 常见问题 / FAQs or Troubleshooting





# 扩展练习 / Exercises or Next Steps





# 参考资料 / References

