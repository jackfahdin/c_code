#*********************************************************************************
#       >文件：debug.sh
#       >作者：郭茂杰
#       >邮箱：guomaojie@outlook.com
#       >时间：2020年08月14日 15时01分24秒
#*********************************************************************************
#!/bin/bash
echo 删除编译出的文件
rm -rf *.o run
echo 编译文件
gcc -o run increment.c negate.c main.c
echo 运行文件
echo ====================
echo
./run