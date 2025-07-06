#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "TcpServer.h"

int main()
{

    unsigned short port = 10000;
    chdir("/root/Project/Resource");

    // 启动服务器
    TcpServer *server = new TcpServer(port, 4);
    server->run();

    return 0;
}