#ifndef WEATHERSERVICE_H
#define WEATHERSERVICE_H
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QObject>

class WeatherService : public QObject
{
    Q_OBJECT
public:
    QXmlStreamReader *XML;                          //pointer to XML
    bool isReady;                                   //is XML file downloaded
    explicit WeatherService(QObject *parent = 0);

public slots:
    void showcurrTemp( QNetworkReply * reply);
    void showcurrPressure( QNetworkReply * reply);
    void showcurrCondition( QNetworkReply * reply);
    void showsearchCityName( QNetworkReply * reply);
    void showsearchCityCoordinates( QNetworkReply * reply);
    void showforecastTemp( QNetworkReply * reply);
    void showforecastPressure( QNetworkReply * reply);
    void showforecastCondition( QNetworkReply * reply);

public Q_SLOTS: // METHODS
    double currentTemp(int cityId);
    double currentPressure(int cityId);
    QString currentCondition(int cityId);
    QList<QString> searchCity(QString name);
    QList<QString> searchCity(double lon, double lat);
    QList<double> forecastTemp(int cityId);
    QList<double> forecastPressure(int cityId);
    QList<QString> forecastCondition(int cityId);
};

#endif // WEATHERSERVICE_H
