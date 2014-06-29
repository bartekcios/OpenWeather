#include <QCoreApplication>
#include "weatherclient.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherClient *client = new WeatherClient;
    client->Menu();
    exit(0);
    return a.exec();
}
