#include <QCoreApplication>
#include "weatherifadaptor.h"
#include "weatherservice.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherService* service = new WeatherService;
    new WeatherIfAdaptor(service);

    cout << "Utworzono obiekty" << endl;

    QDBusConnection connection = QDBusConnection::sessionBus();
    bool ret = connection.registerService("foo.bar.weather");
    ret = connection.registerObject("/", service);

    cout << "Rozpoczeto prace" << endl;

    //exit(0);

    return a.exec();
}
