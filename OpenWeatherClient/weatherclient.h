#ifndef WEATHERCLIENT_H
#define WEATHERCLIENT_H
#include "weatherif.h"
#include <QObject>
#include <QDBusPendingReply>
#include <QDBusInterface>
class WeatherClient : public QObject
{
    Q_OBJECT
public:
    void Menu();
    void GetSearchCityName();
    void GetSearchCityCoordinates();
    void GetCurrentTemp();
    void GetCurrentPressure();
    void GetCurrentCondition();
    void GetForecastTemp();
    void GetForecastPressure();
    void GetForecastCondition();
    explicit WeatherClient(QObject *parent = 0);
    WeatherIf *Interface;
signals:
public Q_SLOTS: // METHODS
    inline int currentTemp(int _t1)
    {
        int a = 5;
        return a;
    }
    inline int currentPressure(int _t1)
    {
        int a = 5;
        return a;
    }
    inline int currentCondition(int _t1)
    {
        int a = 5;
        return a;
    }
    inline int searchCity(QString _t1)
    {
        int a = 5;
        return a;
    }
    inline int searchCity(double lon, double lat)
    {
        int a = 5;
        return a;
    }
    inline int forecastTemp(int cityId)
    {
        int a = 5;
        return a;
    }
    inline int forecastPressure(int cityId)
    {
        int a = 5;
        return a;
    }
    inline int forecastCondition(int cityId)
    {
        int a = 5;
        return a;
    }
public slots:
Q_SIGNALS: // SIGNALS
    //void currentTemp(int _t1);
};

#endif // WEATHERCLIENT_H
