#include "weatherclient.h"
#include <iostream>


using namespace std;

WeatherClient::WeatherClient(QObject *parent) :
    QObject(parent)
{
    Interface = new WeatherIf("foo.bar.weather", "/", QDBusConnection::sessionBus(), 0);

    return;
}

void WeatherClient::Menu()
{
    cout << "Witamy w kliencie, prosze wybrac jedna z opcji:" << endl;
    cout << "1 Lista miast wg nazwy" << endl;
    cout << "2 Lista miast wg wspolrzednych" << endl;
    cout << "3 Aktualna temperatura" << endl;
    cout << "4 Aktualne cisnienie" << endl;
    cout << "5 Aktualny stan" << endl;
    cout << "6 Prognoza dla temperatury" << endl;
    cout << "7 Prognoza dla cisnienia" << endl;
    cout << "8 Prognoza dla stanu" << endl;
    int option = 0;
    cin >> option;
    switch( option )
    {
    case 1:
        GetSearchCityName();
        break;

    case 2:
        GetSearchCityCoordinates();
        break;

    case 3:
        GetCurrentTemp();
        break;

    case 4:
        GetCurrentPressure();
        break;

    case 5:
        GetCurrentCondition();
        break;

    case 6:
        GetForecastTemp();
        break;

    case 7:
        GetForecastPressure();
        break;

    case 8:
        GetForecastCondition();
        break;

    default:
        cout << "Niepoprawny wybor, wychodze" << endl;
        exit(0);
        break;
    }
    return;
}

void WeatherClient::GetSearchCityName()
{
    QObject::connect(Interface, SIGNAL(searchCity(QString)), this, SLOT(searchCity(QString)));
    cout << "Prosze podac nazwe miasta" << endl;
    string sname;
    cin >> sname;
    QString name = QString::fromStdString(sname);
    QDBusReply< QList<QString> > reply = Interface->call("searchCity", name);

    if(reply.isValid())
    {
        cout << "lista" << endl;
        //cout << reply.value() << endl;
    }

    return;
}

void WeatherClient::GetSearchCityCoordinates()
{
    QObject::connect(Interface, SIGNAL(searchCity(double, double)), this, SLOT(searchCity(double, double)));
    double lon, lat;
    cout << "Prosze podac pierwsza wspolrzedna miasta" << endl;
    cin >> lon;
    cout << "Prosze podac druga wspolrzedna miasta" << endl;
    cin >> lat;

    QDBusReply< QList<QString> > reply = Interface->call("searchCity", lon, lat);

    if(reply.isValid())
    {
        cout << "lista" << endl;
        //cout << reply.value() << endl;
    }

    return;
}

void WeatherClient::GetCurrentTemp()
{
    QObject::connect(Interface, SIGNAL(currentTemp(int)), this, SLOT(currentTemp(int)));
    cout << "Prosze podac id miasta" << endl;
    int id;
    cin >> id;
    QDBusReply<double> reply = Interface->call("currentTemp", id);

    if(reply.isValid())
    {
        cout << reply.value() << endl;
    }


    return;
}

void WeatherClient::GetCurrentPressure()
{
    QObject::connect(Interface, SIGNAL(currentPressure(int)), this, SLOT(currentPressure(int)));
    cout << "Prosze podac id miasta" << endl;
    int id;
    cin >> id;
    QDBusReply<double> reply = Interface->call("currentPressure", id);

    if(reply.isValid())
    {
        cout << reply.value() << endl;
    }


    return;
}

void WeatherClient::GetCurrentCondition()
{
    QObject::connect(Interface, SIGNAL(currentCondition(int)), this, SLOT(currentCondition(int)));
    cout << "Prosze podac id miasta " << endl;
    int id;
    cin >> id;
    QDBusReply<QString> reply = Interface->call("currentCondition", id);

    if(reply.isValid())
    {
        cout << reply.value().toStdString() << endl;
    }


    return;
}

void WeatherClient::GetForecastTemp()
{
    QObject::connect(Interface, SIGNAL(forecastTemp(int)), this, SLOT(forecastTemp(int)));
    cout << "Prosze podac id miasta " << endl;
    int id;
    cin >> id;
    QDBusReply<double> reply = Interface->call("forecastTemp", id);

    if(reply.isValid())
    {
        cout << reply.value() << endl;
    }


    return;
}

void WeatherClient::GetForecastPressure()
{
    QObject::connect(Interface, SIGNAL(forecastPressure(int)), this, SLOT(forecastPressure(int)));
    cout << "Prosze podac id miasta " << endl;
    int id;
    cin >> id;
    QDBusReply<double> reply = Interface->call("forecastPressure", id);

    if(reply.isValid())
    {
        cout << reply.value() << endl;
    }


    return;
}

void WeatherClient::GetForecastCondition()
{
    QObject::connect(Interface, SIGNAL(forecastCondition(int)), this, SLOT(forecastCondition(int)));
    cout << "Prosze podac id miasta " << endl;
    int id;
    cin >> id;
    QDBusReply<QString> reply = Interface->call("forecastCondition", id);

    if(reply.isValid())
    {
        cout << reply.value().toStdString() << endl;
    }


    return;
}
