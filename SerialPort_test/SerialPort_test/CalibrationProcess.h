#pragma once

#include <QVector>
#include <QString>
#include <QSerialPort>


class CalibrationProcess
{
public:

	double Speed;
	int StepSize;
	//static QVector<int> Positions1_Vector;
	//static QVector<int> Positions2_Vector;
	//static QVector<int> Positions3_Vector;
	bool isConnected;


	CalibrationProcess();


	void CheckConnection();
	static void ReadFromFile(QString fileName);
	void SetSpeed(double NewSpeed);
	void SetStepSize(int NewStepSize);
	static void SetPositions(QSerialPort serial);


	~CalibrationProcess();
};

