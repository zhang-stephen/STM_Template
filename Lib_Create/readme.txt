*本文件是STM32F4xx系列单片机官方标准库生成lib文件的说明
*EXAMPLE
*建议将本文件最大化后查看

目录树
LIB_CREATE
    |----OBJ
    |----STDPERIPH

STM32F4xx_StdPeriph.lib

*注意
    生成文件时，除需包含各个.c文件所需头文件的同时，还需要以下头文件
        1.core_cm4.h
        2.core_cmFunc.h
        3.core_cmInstr.h
        4.core_cmSimd.h
        4.stm32f4_conf.h
        6.stm32f4xx_it.h / stm32f4xx_it.c
        7.stm32f4xx.h
        8.system_stm32f4xx.h / system_stm32f4xx.c
    其他方面与正常的STM32F4开发工程无异
        在项目配置中，“output”选项卡需勾选 “Create Library File”

版本 v1.0.3
时间 2017.03.18
作者 长江大学电子信息学院 张璞
邮箱 yicheng2632825899@gmail.com