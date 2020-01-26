#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SerialPort_test.h"
#include <QPushButton>
#include <QSpinBox>
#include <QPlainTextEdit>
#include <QCheckBox>

class SerialPort_test : public QMainWindow
{
	Q_OBJECT

public:
	SerialPort_test(QWidget *parent = Q_NULLPTR);

private:
	Ui::SerialPort_testClass ui;

private slots:
	void StartButtonSlot();

private slots:
	void BreakButtonSlot();

private slots:
	void ApplySettingsButtonSlot();

private slots:
	void RunVectorButtonSlot();

private slots:
	void Timer1Slot();

private slots:
	void NextPositionButtonSlot();

private slots:
	void LoadFileButtonSlot();

//private slots:
//	void SerialPortSlot();


private :
	QPushButton *Start_button, *Break_button, *ApplySettings_button1, *RunVector_button, *NextPositionButton, *LoadFileButton;
	QLabel *ReceiveData, *SpeedLabel, *StepsLabel, *StatusLabel;
	QSpinBox *Speed, *Steps, *StepSize, *TargetPosition1, *TargetPosition2, *TargetPosition3;
	QPlainTextEdit *Receive;
	QTabWidget *DriversWidget;
	QCheckBox *ControlPositionFromPC;
	QTimer *Timer1;
	//QSerialPort *SerialPort;
};
