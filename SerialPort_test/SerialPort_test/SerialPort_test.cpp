#include "SerialPort_test.h"
#include "CalibrationProcess.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QLabel>
#include <QString>
#include <QRadioButton>
#include <QTimer>
#include <vector>
#include <QThread>
#include <QCoreApplication>
#include <QtConcurrent/QtConcurrent>
#include <qjsondocument.h>
#include <QJsonDocument>
#include <QFileDialog>


QSerialPort serial;

bool SendPosition = false;

bool IsPortActive = false;

bool nextstep = true;

QByteArray Data;

SerialPort_test::SerialPort_test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	StatusLabel = QMainWindow::findChild<QLabel*>("statusLabel");
	Start_button = QMainWindow::findChild<QPushButton*>("StartButton");
	Break_button = QMainWindow::findChild<QPushButton*>("BreakButton");
	ApplySettings_button1 = QMainWindow::findChild<QPushButton*>("ApplySetting1");
	ReceiveData = QMainWindow::findChild<QLabel*>("ReceiveDataLabel");
	Receive = QMainWindow::findChild<QPlainTextEdit*>("plainTextEdit");
	TargetPosition1 = QMainWindow::findChild<QSpinBox*>("TargetPositionSpinBox1");
	TargetPosition2 = QMainWindow::findChild<QSpinBox*>("TargetPositionSpinBox2");
	TargetPosition3 = QMainWindow::findChild<QSpinBox*>("TargetPositionSpinBox3");
	Speed = QMainWindow::findChild<QSpinBox*>("spinBoxSpeed1");
	Steps = QMainWindow::findChild<QSpinBox*>("spinBoxStepSize1");
	SpeedLabel = QMainWindow::findChild<QLabel*>("label3");
	StepsLabel = QMainWindow::findChild<QLabel*>("StepSizelabel");
	ControlPositionFromPC = QMainWindow::findChild<QCheckBox*>("ControlPositionFromPCcheckBox");
	DriversWidget = QMainWindow::findChild<QTabWidget*>("DriversWidget");
	LoadFileButton = QMainWindow::findChild<QPushButton*>("LoadFileButton");

	RunVector_button = QMainWindow::findChild<QPushButton*>("RunVectorButton");
	NextPositionButton = QMainWindow::findChild<QPushButton*>("NextPositionButton");

	Timer1 = new QTimer(this);

	//m_button = ui.pushButton;
	//m_button->setObjectName("Send_Button");

	connect(Start_button, SIGNAL(released()), this, SLOT(StartButtonSlot()));
	connect(Break_button, SIGNAL(released()), this, SLOT(BreakButtonSlot()));
	connect(ApplySettings_button1, SIGNAL(released()), this, SLOT(ApplySettingsButtonSlot()));
	connect(RunVector_button, SIGNAL(released()), this, SLOT(RunVectorButtonSlot()));
	connect(RunVector_button, SIGNAL(released()), this, SLOT(NextPositionButtonSlot()));
	connect(LoadFileButton, SIGNAL(released()), this, SLOT(LoadFileButtonSlot()));
	//connect(SerialPort, SIGNAL(readyRead()), SLOT(SerialPortSlot()));

	connect(Timer1, SIGNAL(timeout()), this, SLOT(Timer1Slot()));
	Timer1->start(2000);

	//ui.label->setText("Hello :)");

	//ui.label.setText("Hello");



	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {

		serial.setPort(info);

		serial.setBaudRate(QSerialPort::Baud38400);
		/*serial.setDataBits(QSerialPort::Data8);
		serial.setFlowControl(QSerialPort::NoFlowControl);
		serial.setParity(QSerialPort::NoParity); */

		if (serial.open(QIODevice::ReadWrite))
		{
			IsPortActive = true;
			StatusLabel->setText("Connected");
		}
		else
		{
			IsPortActive = false;
			StatusLabel->setText("Not connected");
		}
	}

}


//		Prompt:  P Driver_ID Action Data(Optional) K
void SerialPort_test::StartButtonSlot()
{
	for (int i=0; i<3; i++)
	{
		QString data = "P";

		if (i == 0)
			data += "1";
		if (i == 1)
			data += "2";
		if (i == 2)
			data += "3";

		if (ControlPositionFromPC->isChecked())
		{
			data += "G";
			if(i==0)
				data += QString::number(TargetPosition1->value());

			if (i == 1)
				data += QString::number(TargetPosition2->value());

			if (i == 2)
				data += QString::number(TargetPosition3->value());
			SendPosition = true;
		}
		else
		{
			data += "U";
			SendPosition = false;
		}

		data += "K";


		Receive->setPlainText(data);

		serial.write(data.toStdString().c_str(), data.size());
		serial.flush();
		QThread::msleep(1000);
		serial.waitForBytesWritten(200);

	}


	/*	int i = 1;

			data += "P";

			if (i == 0)
				data += "1";
			if (i == 1)
				data += "2";
			if (i == 2)
				data += "3";

			if (ControlPositionFromPC->isChecked())
			{
				data += "G";
				data += QString::number(TargetPosition1->value());
				SendPosition = true;
			}
			else
			{
				data += "U";
				SendPosition = false;
			}

			data += "K";


			Receive->setPlainText(data);

			serial.write(data.toStdString().c_str(), data.size());

			_sleep(1000); */
	
	//m_button->setEnabled(false);


	/*if (serial.waitForReadyRead(Speed->value() * Steps->value() * 2000))
	{
		QByteArray data_receive = serial.readAll();

		QString r = QString::fromUtf8(data_receive);
		Receive->setPlainText(r);

	} */
	

	
	//QString r = QString::fromStdString(data_receive.toStdString());

	

}
//		Prompt:  P 1 Speed Steps K
void SerialPort_test::BreakButtonSlot()
{
	Receive->setPlainText("Break process");


	

	/*data += QString::number(Speed->value());
	data += QString::number(Steps->value());
	data += "K";  */
 
	
	QString data = "B";
	serial.write(data.toStdString().c_str(), data.size());


	//l_button->setEnabled(false);

	/*if (serial.waitForReadyRead(500))
	{
		QByteArray data_receive = serial.readAll();

		QString r = QString::fromUtf8(data_receive);
		Receive->setPlainText(r);

	}  */
}

void SerialPort_test::ApplySettingsButtonSlot()
{
	Receive->setPlainText("Apply Settings");

	QString data = "P1S";

	data += QString::number(Speed->value());
	data += QString::number(Steps->value());
	data += "K";


	Receive->setPlainText(data);

	serial.write(data.toStdString().c_str(), data.size());
	
	/*if (serial.waitForReadyRead(10000))
	{
		QByteArray data_receive = serial.readAll();

		QString r = QString::fromUtf8(data_receive);
		Receive->setPlainText(r);
	} */

}

void SerialPort_test::Timer1Slot()
{
	if (IsPortActive)
	{
		QString data = "PAYCK";
		serial.write(data.toStdString().c_str(), data.size());

		DriversWidget->setEnabled(true);
		Start_button->setEnabled(true);
		//ApplySettings_button1->setEnabled(true);
		ReceiveData->setEnabled(true);
		Receive->setEnabled(true);
		//Speed->setEnabled(true);
		//SpeedLabel->setEnabled(true);
		//Steps->setEnabled(true);
		//StepsLabel->setEnabled(true);
		Break_button->setEnabled(true);
	}
	else
	{
		DriversWidget->setEnabled(false);

		Start_button->setEnabled(false);
		//ApplySettings_button1->setEnabled(false);
		ReceiveData->setEnabled(false);
		Receive->setEnabled(false);
		//Speed->setEnabled(false);
		//SpeedLabel->setEnabled(false);
		//Steps->setEnabled(false);
		//StepsLabel->setEnabled(false);
		Break_button->setEnabled(false);
	}
	

	if (serial.isOpen() && serial.waitForReadyRead(500) && IsPortActive) 
	{
		QByteArray requestData = serial.readAll();

		if(requestData == "PLK")
			StatusLabel->setText("Connected");
	}
	else
	{
		StatusLabel->setText("Not connected");
		serial.close();
		IsPortActive = false;
	}

	if (!IsPortActive)
	{
		foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {

			serial.setPort(info);

			serial.setBaudRate(QSerialPort::Baud38400);
			/*serial.setDataBits(QSerialPort::Data8);
			serial.setFlowControl(QSerialPort::NoFlowControl);
			serial.setParity(QSerialPort::NoParity); */

			if (serial.open(QIODevice::ReadWrite))
			{
				IsPortActive = true;
				StatusLabel->setText("Connected");
			}
			else
			{
				IsPortActive = false;
				StatusLabel->setText("Not connected");
			}
		}
	}
}

void SendBreak()
{
	_sleep(1000);
	QString data = "B";
	serial.write(data.toStdString().c_str(), data.size());
	_sleep(5000);
}

void UseVector()
{
	std::vector<int> Positions;
	std::vector<int> Positions2;
	std::vector<int> Positions3;

	for (int i = 5; i < 450; i+=5)
	{
		Positions.push_back(i);
	}

	for (int i = 20; i < 450; i += 35)
	{
		Positions2.push_back(i);
	}
	
	for (int i = 5; i < 450; i += 55)
	{
		Positions3.push_back(i);
	}


	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			QString data = "P";

			if (j == 0)
			{
				data += "1G";
				data += QString::number(Positions.at(i));
			}

			if (j == 1)
			{
				data += "2G";
				data += QString::number(Positions2.at(i));
			}

			if (j == 2)
			{
				data += "3G";
				data += QString::number(Positions3.at(i));
			}

			data += "K";

			serial.write(data.toStdString().c_str(), data.size());
			serial.flush();
			QThread::msleep(1000);
			serial.waitForBytesWritten(1000);

			QThread::msleep(1700);
		}

		while (1)
		{
			if (serial.isOpen() && serial.waitForReadyRead(50))
			{
				QByteArray requestData = serial.readAll();

				if (requestData == "IAD") // I Am Done
					break;
			}
		}

		QThread::msleep(4000);

	}
			
}

void SerialPort_test::RunVectorButtonSlot()
{
	//QFuture<void> future = QtConcurrent::run(UseVector);  // Thread 1

	//future.waitForFinished();
	UseVector();

	//CalibrationProcess::SetPositions(serial);
}


void SerialPort_test::NextPositionButtonSlot()
{
	QString data = "B";
	serial.write(data.toStdString().c_str(), data.size());


	if(!nextstep)
		nextstep = true;
}

void SerialPort_test::LoadFileButtonSlot()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Json file"), "", tr("Json Files (*.json)"));

	CalibrationProcess::ReadFromFile(fileName);
}




