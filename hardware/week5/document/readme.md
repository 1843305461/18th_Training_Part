**1.** **电路板焊接**

我们知道，如果不进行SMT贴片的话，发给厂家打出来的板子只是一块空板子，上面只有焊盘和布线，是没有电子元器件的，如图所示：

![img](file:///C:/Users/184330~1/AppData/Local/Temp/msohtmlclip1/01/clip_image002.jpg)

而我们需要手动把那些电子元器件（如电阻、电容、芯片等）焊接上去，即通过烙铁融化焊锡丝，将元器件的电极或引脚与板子上的焊盘进行连接，焊完冷却后，器件就固定在了板子上，并且完成了电气连接。焊完后的板子是这样的：

![img](file:///C:/Users/184330~1/AppData/Local/Temp/msohtmlclip1/01/clip_image004.jpg)

  找到差别了吧，就是把元器件通过焊接固定在板子上的过程。

  实验室的电烙铁如下：

 ![img](file:///C:/Users/184330~1/AppData/Local/Temp/msohtmlclip1/01/clip_image006.jpg)

（1）基本操作步骤

烙铁焊接的具体操作步骤可分为五步，称为五步工程法，要获得良好的焊接质量必须严格操作。

准备施焊 ：准备好焊锡丝和烙铁。此时特别强调的施烙铁头部要保持干净，即可以沾上焊锡(俗称吃锡)。

加热焊件 ：将烙铁接触焊接点，注意首先要保持烙铁加热焊件各部分，例如印制板上引线和焊盘都使之受热，其次要注意让烙铁头的扁平部分(较大部分)接触热容量较大的焊件，烙铁头的侧面或边缘部分接触热容量较小的焊件，以保持焊件均匀受热。

熔化焊料 ：当焊件加热到能熔化焊料的温度后将焊丝置于焊点，焊料开始熔化并润湿焊点。

移开焊锡 ：当熔化一定量的焊锡后将焊锡丝移开。

移开烙铁：当焊锡完全润湿焊点后移开烙铁，注意移开烙铁的方向应该是大致45°的方向。

按上述步骤进行焊接是获得良好焊点的关键之一。在实际生产中，最容易出现的一种违反操作步骤的做法就是烙铁头不是先与被焊件接触，而是先与焊锡丝接触，熔化的焊锡滴落在尚末预热的被焊部位，这样很容易产生焊点虚焊，所以烙铁头必须与被焊件接触，对被焊件进行预热是防止产生虚焊的重要手段。

（2）手工焊接的注意事项

手工锡焊接技术是一项基本功，就是在大规模生产的情况下，维护和维修也必须使用手工焊接。因此，必须通过学习和实践操作练习才能熟练掌握。注意事项如下：

1.手握铬铁的正确操作姿势

手握铬铁的姿势掌握正确的操作姿势，可以保证操作者的身心健康，减轻劳动伤害。为减少焊剂加热时挥发出的化学物质对人的危害，减少有害气体的吸入量，一般情况下，烙铁到鼻子的距离应该不少于 20cm ，通常以 30cm 为宜。

反握法的动作稳定，长时间操作不易疲劳，适于大功率烙铁的操作；正握法适于小功率烙铁或带弯头电烙铁的操作；一般在操作台上焊接印制板等焊件时，多采用握笔法。

2.焊锡丝的正确操作姿势

由于焊锡丝中含有一定比例的铅，而铅是对人体有害的一种重金属，因此操作时应该戴手套或在操作后洗手，避免食入铅尘。

电烙铁使用以后，一定要稳妥地插放在烙铁架上，并注意导线等其他杂物不要碰到烙铁头，以免烫伤导线，造成漏电等事故。

详细教程参考哔站视频[01 焊接前工具准备_哔哩哔哩_bilibili](https://www.bilibili.com/video/BV1Tt411V7i7?p=1&vd_source=b0c45fbe01497621cd7964916a747a9b)及document中的《焊接其实很简单-焊接基础指南》。

哔站视频很详细，手把手教学，大家可以在week5和week6这两周来体育中心进行焊接练习，可以找自己的组长或者车队其他大佬现场演示教学焊接过程及注意事项。

（3）此次驱动板焊接的顺序及注意事项

一定要记得先焊电源部分，即LDO稳压电路和开关电源升压电路，先不要焊后边的H桥部分，把稳压和升压部分焊完后，先上电测试一下此部分是否工作正常，即输出电压是否符合预期，如果输出电压不对，先进行此部分的调试查错，此部分焊接完测试没问题后，再继续焊接剩下部分。

为了焊接操作的方便，一般先焊芯片，后焊其周围的电阻电容等，最后焊插针等。此外就是最好分模块焊接，就是前面提到的焊一部分测试一部分。

这个过程最好在组长的指导与看护下完成，另外焊接过程一定一定一定要注意安全！！！烙铁不要乱放，用完及时拔电，不要烫到其他东西，更不要烫到自己！

**2.** **电路板调试**

此次驱动板的调试主要用到万用表，信号发生器（用于产生PWM），示波器。

万用表想必大家都接触过，或者了解过，就是下面这个东西：

![img](file:///C:/Users/184330~1/AppData/Local/Temp/msohtmlclip1/01/clip_image008.jpg)

此次练习我们主要用它的直流电压档和通断档。直流电压档不必多说，就是测量两个表笔触点间的电压；通断档用于测量两个表笔触点间是否短路，即当测量到两个触点间阻值过小时，万用表会鸣叫，通常用于检测该进行电气连接的地方是否已经成功连接上，以及本不该连接的两处是否发生了短路；有时也会用到电阻档，用于测量电阻阻值等。其使用方法可以参考哔站视频：[万用表怎么使用，数字万用表新手入门教程，各个功能详细讲解演示_哔哩哔哩_bilibili](https://www.bilibili.com/video/BV16g4y1B7Td/?spm_id_from=333.1007.top_right_bar_window_custom_collection.content.click&vd_source=b0c45fbe01497621cd7964916a747a9b)，也可以来实验室进行学习和使用。

信号发生器在此次练习中主要用于产生PWM，PWM的原理在前几周的教学内容中有提到，车队的信号发生器如下：

![img](file:///C:/Users/184330~1/AppData/Local/Temp/msohtmlclip1/01/clip_image010.jpg)

可以调节方波的占空比和频率等，具体使用方法可以到实验室来进行学习。

示波器在此次练习中也可能会用到，用于检测PWM波等，车队的示波器如下：

![img](file:///C:/Users/184330~1/AppData/Local/Temp/msohtmlclip1/01/clip_image012.jpg)

具体使用方法可以到实验室来进行学习。

这周的任务主要是焊板子和调板子，大家一定要来实验室动手操作，一定要注意安全。