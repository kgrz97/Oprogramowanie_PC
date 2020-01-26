#include "CalibrationProcess.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QLabel>
#include <QString>
#include <QRadioButton>
#include <QTimer>
#include <QVector>
#include <QThread>
#include <QCoreApplication>
#include <QtConcurrent/QtConcurrent>
#include <qjsondocument.h>
#include <QJsonDocument>



CalibrationProcess::CalibrationProcess()
{
	Speed = 4.0;
	StepSize = 1;
	isConnected = false;
	//Positions1_Vector = { 0 };
	//Positions2_Vector = { 0 };
	//Positions3_Vector = { 0 };
}

void CalibrationProcess::CheckConnection()
{
}

void CalibrationProcess::ReadFromFile(QString fileName)
{
	QFile file;
	QJsonParseError parseErr;
	QJsonDocument doc;

	file.setFileName(fileName);

	file.open(QIODevice::ReadOnly | QIODevice::Text);
	QJsonDocument d = QJsonDocument::fromJson(file.readAll(), &parseErr);
	file.close();


	QJsonObject sett2 = d.object();
	QJsonValue value = sett2.value(QString("Positions1"));

	QJsonArray array = value.toArray();

	for (int i = 0; i < array.size(); i++)
	{
		int j = array[i].toString().toInt();
	//	Positions1_Vector[i] = j;
	}
		
		
	



	QJsonValue value2 = sett2.value(QString("Positions2"));

	QJsonArray array2 = value2.toArray();

	for (int i = 0; i < array2.size(); i++)
	{
		int j = array2[i].toString().toInt();
		//Positions2_Vector.push_back(j);
	}
	


	QJsonValue value3 = sett2.value(QString("Positions3"));

	QJsonArray array3 = value3.toArray();

	for (int i = 0; i < array3.size(); i++)
	{
		int j = array3[i].toString().toInt();
	//	Positions3_Vector.push_back(j);
	}
		

	qDebug() << parseErr.errorString();
}

void CalibrationProcess::SetPositions(QSerialPort serial)
{
	
}

CalibrationProcess::~CalibrationProcess()
{
}
