# Httpserver
[项目描述与展示](https://www.bilibili.com/video/BV1qT3izCEUz/?spm_id_from=333.1387.homepage.video_card.click)<br>
本项目是一个基于多Reactor模式的多线程HTTP服务器，用事件驱动 + 线程池架构，支持浏览器请求服务器的静态资源。主线程负责监听连接，通过轮询算法将新连接分配给子线程的 EventLoop 处理，子线程使用 epoll监听I/O事件，解析HTTP请求（请求行、请求头），根据URL映射本地文件并构造响应（200 OK 或 404 Not Found），通过 sendfile 高效传输文件内容，同时通过mutex和cond实现线程间同步，避免竞争，确保高并发和低延迟。
