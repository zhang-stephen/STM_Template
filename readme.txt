*本文件是STM32F407ZGTx开发模板的说明文件

该模板共五部分
    1.Lib_Create
    2.Template_DSP
    3.Template_DSP_LIB
    4.Template_STD
    5.Template_STD_LIB

更新说明
    1.将官方标准固件库编译为lib文件并分别创建对应的工程模板
    2.将所有Template的入口文件名修改为 Template
    3.修改了原有说明文件的谬误

使用lib文件的好处
    1.大幅度加快编译速度
    2.lib为二进制文件，有利于源码保密
使用lib文件的弊端
    1.无法直接查看源文件的函数算法，对初学者不友好
    2.加大了工程模板的体积
    3.将源文件编译为lib文件时，及其占用PC资源

版本 v4.1.0
时间 2017.03.18
作者 长江大学电子信息学院 张璞
邮箱 yicheng2632825899@gmail.com

上传GitHub说明
    1.上传时有意忽略了lib文件和MDK配置文件
    2.需要lib文件的话，可以通过Lib_Create文件夹重编译后生成lib文件，具体步骤请参见该文件夹下的readme.txt