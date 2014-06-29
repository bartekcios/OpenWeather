#include "weatherservice.h"
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

WeatherService::WeatherService(QObject *parent) :
    QObject(parent)
{
}

double WeatherService::currentTemp(int cityId)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/weather?id=";
    url += QString::number(cityId);
    url += "&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    double result = 24;
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showcurrTemp(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "currentTemp", Q_RETURN_ARG(double, result), Q_ARG(int, cityId));

    //exit(0);
    return result;
}

void WeatherService::showcurrTemp( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "temperature")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("value"))
                        {
                            QString attribute_value = attr.value().toString();
                            double currTemp = attribute_value.toDouble() - 272.15;
                            cout << currTemp << endl;
                        }
                   }
               }
           }
      }
  }
  //exit(0);
  return;
}

double WeatherService::currentPressure(int cityId)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/weather?id=";
    url += QString::number(cityId);
    url += "&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    double result = 1054;
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showcurrPressure(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "currentPressure", Q_RETURN_ARG(double, result), Q_ARG(int, cityId));

    //exit(0);
    return result;
}

void WeatherService::showcurrPressure( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "pressure")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("value"))
                        {
                            QString attribute_value = attr.value().toString();
                            double currPressure = attribute_value.toDouble();
                            cout << currPressure << endl;
                        }
                    }
               }
           }
     }
  }
  //exit(0);
  return;
}

QString WeatherService::currentCondition(int cityId)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/weather?id=";
    url += QString::number(cityId);
    url += "&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    QString result = "Sky is Clear";
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showcurrCondition(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "currentCondition", Q_RETURN_ARG(QString, result), Q_ARG(int, cityId));

    //exit(0);
    return result;
}

void WeatherService::showcurrCondition( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "weather")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("value"))
                        {
                            QString attribute_value = attr.value().toString();
                            QString currCondition = attribute_value;
                            cout << currCondition.toStdString() << endl;
                        }
                    }
               }
           }
     }
  }
  //exit(0);
  return;
}

QList<QString> WeatherService::searchCity(QString name)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/find?q=";
    url += name;
    url += "&type=like&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    QList<QString> result;
    result.append("one");
    result.append("two");
    result.append("three");
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showsearchCityName(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "searchCity", Q_RETURN_ARG(QList<QString>, result), Q_ARG(QString, name));

    //exit(0);
    return result;
}

void WeatherService::showsearchCityName( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "city")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("name"))
                        {
                            QString attribute_value = attr.value().toString();
                            QString city = attribute_value;
                            cout << city.toStdString() << endl;
                        }
                    }
               }
           }
     }
  }
  //exit(0);
  return;
}


QList<QString> WeatherService::searchCity(double lon, double lat)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/weather?lat=";
    url += QString::number(lat);
    url += "&lon=";
    url += QString::number(lon);
    url += "&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    QList<QString> result;
    result.append("one");
    result.append("two");
    result.append("three");
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showsearchCityCoordinates(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "searchCity", Q_RETURN_ARG(QList<QString>, result), Q_ARG(double, lon), Q_ARG(double, lat));

    //exit(0);
    return result;
}

void WeatherService::showsearchCityCoordinates( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "city")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("name"))
                        {
                            QString attribute_value = attr.value().toString();
                            QString city = attribute_value;
                            cout << city.toStdString() << endl;
                        }
                    }
               }
           }
     }
  }
  //exit(0);
  return;
}

QList<double> WeatherService::forecastTemp(int cityId)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/forecast?id=";
    url += QString::number(cityId);
    url += "&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    QList<double> result;
    result.append(1.0);
    result.append(2.0);
    result.append(3.0);
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showforecastTemp(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "forecastTemp", Q_RETURN_ARG(QList<double>, result), Q_ARG(int, cityId));

    //exit(0);
    return result;
}

void WeatherService::showforecastTemp( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "temperature")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("value"))
                        {
                            QString attribute_value = attr.value().toString();
                            double temp = attribute_value.toDouble();
                            cout << temp << endl;
                        }
                    }
               }
           }
     }
  }
  //exit(0);
  return;
}

QList<double> WeatherService::forecastPressure(int cityId)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/forecast?id=";
    url += QString::number(cityId);
    url += "&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    QList<double> result;
    result.append(1.0);
    result.append(2.0);
    result.append(3.0);
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showforecastPressure(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "forecastPressure", Q_RETURN_ARG(QList<double>, result), Q_ARG(int, cityId));

    //exit(0);
    return result;
}

void WeatherService::showforecastPressure( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "pressure")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("value"))
                        {
                            QString attribute_value = attr.value().toString();
                            double pressure = attribute_value.toDouble();
                            cout << pressure << endl;
                        }
                    }
               }
           }
     }
  }
  //exit(0);
  return;
}

QList<QString> WeatherService::forecastCondition(int cityId)
{
    XML = NULL;
    QString url = "http://api.openweathermap.org/data/2.5/forecast?id=";
    url += QString::number(cityId);
    url += "&mode=xml";
    cout << "link: " << url.toStdString() << endl;

    //-----------------------------
    QList<QString> result;
    result.append("first");
    result.append("second");
    result.append("third");
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(showforecastCondition(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl(url)));
    QMetaObject::invokeMethod(parent(), "forecastCondition", Q_RETURN_ARG(QList<QString>, result), Q_ARG(int, cityId));

    //exit(0);
    return result;
}

void WeatherService::showforecastCondition( QNetworkReply * reply)
{

  QByteArray ArrReply = reply->readAll();

  XML = new QXmlStreamReader(ArrReply);

  if(XML)
  {
    while (!XML->atEnd())
    {
           if (XML->readNextStartElement())
           {
               if(XML->name().toString() == "symbol")
               {
                   foreach(const QXmlStreamAttribute &attr, XML->attributes())
                   {
                        if (attr.name().toString() == QLatin1String("name"))
                        {
                            QString attribute_value = attr.value().toString();
                            QString condition = attribute_value;
                            cout << condition.toStdString() << endl;
                        }
                    }
               }
           }
     }
  }
  //exit(0);
  return;
}
