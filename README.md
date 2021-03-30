# OpencvCar 
IDE：vc6.0  opencv1.0 

Description:打开车牌图片，能进行定位，车牌分割，字符分割，字符识别。

## Run Step 
在程序界面里： 依次又打开图片，图像二值化，车牌定位，字符分割，字符识别按钮。
按钮点击顺序是：打开图片，图像二值化，车牌定位，字符分割，字符识别。
操作完就可以看到结果。只要图片大小合适（不能太大），一般都能较准确的结果。车牌定位识别那块有详细注释。

## Developing environment：
1、install opencv1.0：
http://xz1.cr173.com/soft/opencv.zip

2、vc++ 6.0 add these libs：
C:\Program Files (x86)\OpenCV\lib
C:\PROGRAM FILES (X86)\OPENCV\CV\INCLUDE
C:\PROGRAM FILES (X86)\OPENCV\CXCORE\INCLUDE
C:\PROGRAM FILES (X86)\OPENCV\OTHERLIBS\HIGHGUI

3、You need *cv100.dll,cxcore100.dll,highgui100.dll,libguide40.dll* when you are running *.exe.

四个dll文件在Debug文件夹已经有了。这四个在opencv的文件夹也有，但是需要添加环境的系统变量。
测试方便请放在所需的Debug或者Realse文件夹。
 
