# 记录Visual Studio Code的一次安装和配置使用

1. 安装
- 我的发行版是Arch，可通过AUR或者官方源下载

    `sudo pacman -S visual-studio-code-bin`
2. 使用
    1. 安装好以后打开即用
3. 配置
    1. 首先设置中文，在插件商店中搜索Chinese即可
    2. 选择适用的语言选项如C/C++、Java、Python、Golang等

### C/C++的示例
1. 插件商店中安装C/C++插件
2. 创建一个文件夹（因为VS Code是在一个文件里工作的，文件夹里包含调试配置）
3. 按`F5`开启Debug，`Ctrl+F5`不开启Debug
4. 第一次将创建一个 _launch.json_ 的配置文件，配置好以后保存关闭，一般都是默认配置好了
5. 如果没有开启任务再次按下`F5`，将创建一个 _tasks.json_ 文件，配置好以后保存关闭，一般都是默认配置好了
6. 再次按下`F5`开启调试这时应该运行成功
7. 如果没有成功则根据弹出的提示进行操作（如调试器gdb启动失败，可能是没有安装）

### json文件作用描述

文件 | 作用
:- | :-
launch.json | 启动任务的配置
tasks.json | 进行编译来生成任务的配置
c_cpp_properties.json | 设置头文件路径、设置使用编译器路径、语言标准、表示编译器模式

### 微软开源字体Cascadia-Code安装

1. 直接` **Pacman**` 安装即可，包的名称是`ttf-cascadia-code`
2. 打开VS Code设置连字功能，添加控制字体`Cascadia Code`即可，用单引号引住
