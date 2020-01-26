/********************************************************************************
** Form generated from reading UI file 'SerialPort_test.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORT_TEST_H
#define UI_SERIALPORT_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialPort_testClass
{
public:
    QWidget *centralWidget;
    QLabel *statusLabel;
    QPushButton *StartButton;
    QLabel *label1;
    QPlainTextEdit *plainTextEdit;
    QLabel *ReceiveDataLabel;
    QPushButton *BreakButton;
    QLabel *ControlProcesslabel;
    QTabWidget *DriversWidget;
    QWidget *Driver1;
    QPushButton *ApplySetting1;
    QLabel *StepSizelabel;
    QSpinBox *spinBoxSpeed1;
    QSpinBox *spinBoxStepSize1;
    QLabel *label3;
    QSpinBox *TargetPositionSpinBox1;
    QLabel *TargetPositionLabel_2;
    QWidget *Driver2;
    QPushButton *ApplySetting_2;
    QLabel *StepSizelabel_2;
    QSpinBox *spinBoxStepSize_2;
    QSpinBox *spinBoxSpeed_2;
    QLabel *label3_2;
    QLabel *TargetPositionLabel;
    QSpinBox *TargetPositionSpinBox2;
    QWidget *Driver3;
    QPushButton *ApplySetting_3;
    QLabel *StepSizelabel_3;
    QSpinBox *spinBoxStepSize_3;
    QSpinBox *spinBoxSpeed_3;
    QLabel *label3_3;
    QLabel *TargetPositionLabel_3;
    QSpinBox *TargetPositionSpinBox3;
    QCheckBox *ControlPositionFromPCcheckBox;
    QPushButton *RunVectorButton;
    QPushButton *NextPositionButton;
    QPushButton *LoadFileButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SerialPort_testClass)
    {
        if (SerialPort_testClass->objectName().isEmpty())
            SerialPort_testClass->setObjectName(QString::fromUtf8("SerialPort_testClass"));
        SerialPort_testClass->setEnabled(true);
        SerialPort_testClass->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SerialPort_testClass->sizePolicy().hasHeightForWidth());
        SerialPort_testClass->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SerialPort_testClass->setWindowIcon(icon);
        centralWidget = new QWidget(SerialPort_testClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(60, 10, 91, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        statusLabel->setFont(font);
        statusLabel->setAutoFillBackground(false);
        statusLabel->setAlignment(Qt::AlignCenter);
        statusLabel->setWordWrap(false);
        StartButton = new QPushButton(centralWidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setEnabled(false);
        StartButton->setGeometry(QRect(450, 90, 75, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setKerning(true);
        StartButton->setFont(font1);
        StartButton->setFocusPolicy(Qt::NoFocus);
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(10, 10, 41, 16));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setGeometry(QRect(30, 80, 104, 71));
        ReceiveDataLabel = new QLabel(centralWidget);
        ReceiveDataLabel->setObjectName(QString::fromUtf8("ReceiveDataLabel"));
        ReceiveDataLabel->setEnabled(false);
        ReceiveDataLabel->setGeometry(QRect(30, 60, 71, 16));
        BreakButton = new QPushButton(centralWidget);
        BreakButton->setObjectName(QString::fromUtf8("BreakButton"));
        BreakButton->setEnabled(false);
        BreakButton->setGeometry(QRect(450, 130, 75, 23));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        BreakButton->setFont(font2);
        ControlProcesslabel = new QLabel(centralWidget);
        ControlProcesslabel->setObjectName(QString::fromUtf8("ControlProcesslabel"));
        ControlProcesslabel->setGeometry(QRect(450, 50, 81, 20));
        DriversWidget = new QTabWidget(centralWidget);
        DriversWidget->setObjectName(QString::fromUtf8("DriversWidget"));
        DriversWidget->setGeometry(QRect(200, 50, 201, 251));
        DriversWidget->setMovable(true);
        Driver1 = new QWidget();
        Driver1->setObjectName(QString::fromUtf8("Driver1"));
        ApplySetting1 = new QPushButton(Driver1);
        ApplySetting1->setObjectName(QString::fromUtf8("ApplySetting1"));
        ApplySetting1->setGeometry(QRect(50, 100, 91, 23));
        ApplySetting1->setFlat(false);
        StepSizelabel = new QLabel(Driver1);
        StepSizelabel->setObjectName(QString::fromUtf8("StepSizelabel"));
        StepSizelabel->setEnabled(true);
        StepSizelabel->setGeometry(QRect(46, 70, 47, 13));
        spinBoxSpeed1 = new QSpinBox(Driver1);
        spinBoxSpeed1->setObjectName(QString::fromUtf8("spinBoxSpeed1"));
        spinBoxSpeed1->setEnabled(true);
        spinBoxSpeed1->setGeometry(QRect(106, 21, 42, 31));
        spinBoxSpeed1->setMinimum(1);
        spinBoxSpeed1->setMaximum(5);
        spinBoxSpeed1->setValue(1);
        spinBoxSpeed1->setDisplayIntegerBase(10);
        spinBoxStepSize1 = new QSpinBox(Driver1);
        spinBoxStepSize1->setObjectName(QString::fromUtf8("spinBoxStepSize1"));
        spinBoxStepSize1->setEnabled(true);
        spinBoxStepSize1->setGeometry(QRect(106, 61, 42, 31));
        spinBoxStepSize1->setMinimum(0);
        spinBoxStepSize1->setMaximum(4);
        spinBoxStepSize1->setValue(1);
        label3 = new QLabel(Driver1);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setEnabled(true);
        label3->setGeometry(QRect(46, 30, 47, 13));
        TargetPositionSpinBox1 = new QSpinBox(Driver1);
        TargetPositionSpinBox1->setObjectName(QString::fromUtf8("TargetPositionSpinBox1"));
        TargetPositionSpinBox1->setGeometry(QRect(110, 160, 42, 31));
        TargetPositionSpinBox1->setMaximum(500);
        TargetPositionLabel_2 = new QLabel(Driver1);
        TargetPositionLabel_2->setObjectName(QString::fromUtf8("TargetPositionLabel_2"));
        TargetPositionLabel_2->setGeometry(QRect(10, 160, 91, 20));
        DriversWidget->addTab(Driver1, QString());
        Driver2 = new QWidget();
        Driver2->setObjectName(QString::fromUtf8("Driver2"));
        ApplySetting_2 = new QPushButton(Driver2);
        ApplySetting_2->setObjectName(QString::fromUtf8("ApplySetting_2"));
        ApplySetting_2->setGeometry(QRect(50, 100, 91, 23));
        ApplySetting_2->setFlat(false);
        StepSizelabel_2 = new QLabel(Driver2);
        StepSizelabel_2->setObjectName(QString::fromUtf8("StepSizelabel_2"));
        StepSizelabel_2->setEnabled(true);
        StepSizelabel_2->setGeometry(QRect(46, 70, 47, 13));
        spinBoxStepSize_2 = new QSpinBox(Driver2);
        spinBoxStepSize_2->setObjectName(QString::fromUtf8("spinBoxStepSize_2"));
        spinBoxStepSize_2->setEnabled(true);
        spinBoxStepSize_2->setGeometry(QRect(106, 61, 42, 31));
        spinBoxStepSize_2->setMinimum(0);
        spinBoxStepSize_2->setMaximum(4);
        spinBoxStepSize_2->setValue(1);
        spinBoxSpeed_2 = new QSpinBox(Driver2);
        spinBoxSpeed_2->setObjectName(QString::fromUtf8("spinBoxSpeed_2"));
        spinBoxSpeed_2->setEnabled(true);
        spinBoxSpeed_2->setGeometry(QRect(106, 21, 42, 31));
        spinBoxSpeed_2->setMinimum(1);
        spinBoxSpeed_2->setMaximum(5);
        spinBoxSpeed_2->setValue(1);
        spinBoxSpeed_2->setDisplayIntegerBase(10);
        label3_2 = new QLabel(Driver2);
        label3_2->setObjectName(QString::fromUtf8("label3_2"));
        label3_2->setEnabled(true);
        label3_2->setGeometry(QRect(46, 30, 47, 13));
        TargetPositionLabel = new QLabel(Driver2);
        TargetPositionLabel->setObjectName(QString::fromUtf8("TargetPositionLabel"));
        TargetPositionLabel->setGeometry(QRect(10, 160, 91, 20));
        TargetPositionSpinBox2 = new QSpinBox(Driver2);
        TargetPositionSpinBox2->setObjectName(QString::fromUtf8("TargetPositionSpinBox2"));
        TargetPositionSpinBox2->setGeometry(QRect(110, 160, 42, 31));
        TargetPositionSpinBox2->setMaximum(500);
        DriversWidget->addTab(Driver2, QString());
        Driver3 = new QWidget();
        Driver3->setObjectName(QString::fromUtf8("Driver3"));
        ApplySetting_3 = new QPushButton(Driver3);
        ApplySetting_3->setObjectName(QString::fromUtf8("ApplySetting_3"));
        ApplySetting_3->setGeometry(QRect(50, 100, 91, 23));
        ApplySetting_3->setFlat(false);
        StepSizelabel_3 = new QLabel(Driver3);
        StepSizelabel_3->setObjectName(QString::fromUtf8("StepSizelabel_3"));
        StepSizelabel_3->setEnabled(true);
        StepSizelabel_3->setGeometry(QRect(46, 70, 47, 13));
        spinBoxStepSize_3 = new QSpinBox(Driver3);
        spinBoxStepSize_3->setObjectName(QString::fromUtf8("spinBoxStepSize_3"));
        spinBoxStepSize_3->setEnabled(true);
        spinBoxStepSize_3->setGeometry(QRect(106, 61, 42, 31));
        spinBoxStepSize_3->setMinimum(0);
        spinBoxStepSize_3->setMaximum(4);
        spinBoxStepSize_3->setValue(1);
        spinBoxSpeed_3 = new QSpinBox(Driver3);
        spinBoxSpeed_3->setObjectName(QString::fromUtf8("spinBoxSpeed_3"));
        spinBoxSpeed_3->setEnabled(true);
        spinBoxSpeed_3->setGeometry(QRect(106, 21, 42, 31));
        spinBoxSpeed_3->setMinimum(1);
        spinBoxSpeed_3->setMaximum(5);
        spinBoxSpeed_3->setValue(1);
        spinBoxSpeed_3->setDisplayIntegerBase(10);
        label3_3 = new QLabel(Driver3);
        label3_3->setObjectName(QString::fromUtf8("label3_3"));
        label3_3->setEnabled(true);
        label3_3->setGeometry(QRect(46, 30, 47, 13));
        TargetPositionLabel_3 = new QLabel(Driver3);
        TargetPositionLabel_3->setObjectName(QString::fromUtf8("TargetPositionLabel_3"));
        TargetPositionLabel_3->setGeometry(QRect(10, 160, 91, 20));
        TargetPositionSpinBox3 = new QSpinBox(Driver3);
        TargetPositionSpinBox3->setObjectName(QString::fromUtf8("TargetPositionSpinBox3"));
        TargetPositionSpinBox3->setGeometry(QRect(110, 160, 42, 31));
        TargetPositionSpinBox3->setMaximum(500);
        DriversWidget->addTab(Driver3, QString());
        ControlPositionFromPCcheckBox = new QCheckBox(centralWidget);
        ControlPositionFromPCcheckBox->setObjectName(QString::fromUtf8("ControlPositionFromPCcheckBox"));
        ControlPositionFromPCcheckBox->setGeometry(QRect(430, 210, 131, 17));
        ControlPositionFromPCcheckBox->setCheckable(true);
        ControlPositionFromPCcheckBox->setChecked(false);
        ControlPositionFromPCcheckBox->setAutoExclusive(true);
        ControlPositionFromPCcheckBox->setTristate(false);
        RunVectorButton = new QPushButton(centralWidget);
        RunVectorButton->setObjectName(QString::fromUtf8("RunVectorButton"));
        RunVectorButton->setGeometry(QRect(60, 260, 75, 23));
        NextPositionButton = new QPushButton(centralWidget);
        NextPositionButton->setObjectName(QString::fromUtf8("NextPositionButton"));
        NextPositionButton->setGeometry(QRect(60, 320, 75, 23));
        LoadFileButton = new QPushButton(centralWidget);
        LoadFileButton->setObjectName(QString::fromUtf8("LoadFileButton"));
        LoadFileButton->setGeometry(QRect(60, 200, 75, 23));
        SerialPort_testClass->setCentralWidget(centralWidget);
        StartButton->raise();
        label1->raise();
        plainTextEdit->raise();
        ReceiveDataLabel->raise();
        BreakButton->raise();
        ControlProcesslabel->raise();
        DriversWidget->raise();
        ControlPositionFromPCcheckBox->raise();
        statusLabel->raise();
        RunVectorButton->raise();
        NextPositionButton->raise();
        LoadFileButton->raise();
        statusBar = new QStatusBar(SerialPort_testClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SerialPort_testClass->setStatusBar(statusBar);

        retranslateUi(SerialPort_testClass);

        DriversWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SerialPort_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *SerialPort_testClass)
    {
        SerialPort_testClass->setWindowTitle(QApplication::translate("SerialPort_testClass", "Calibrator App", nullptr));
        statusLabel->setText(QApplication::translate("SerialPort_testClass", "Label", nullptr));
        StartButton->setText(QApplication::translate("SerialPort_testClass", "Start", nullptr));
        label1->setText(QApplication::translate("SerialPort_testClass", "Status:", nullptr));
        ReceiveDataLabel->setText(QApplication::translate("SerialPort_testClass", "Receive data:", nullptr));
        BreakButton->setText(QApplication::translate("SerialPort_testClass", "Break", nullptr));
        ControlProcesslabel->setText(QApplication::translate("SerialPort_testClass", "Control process:", nullptr));
        ApplySetting1->setText(QApplication::translate("SerialPort_testClass", "Apply settings", nullptr));
        StepSizelabel->setText(QApplication::translate("SerialPort_testClass", "Step Size:", nullptr));
        label3->setText(QApplication::translate("SerialPort_testClass", "Speed:", nullptr));
        TargetPositionLabel_2->setText(QApplication::translate("SerialPort_testClass", "Target position:", nullptr));
        DriversWidget->setTabText(DriversWidget->indexOf(Driver1), QApplication::translate("SerialPort_testClass", "Driver 1", nullptr));
        ApplySetting_2->setText(QApplication::translate("SerialPort_testClass", "Apply settings", nullptr));
        StepSizelabel_2->setText(QApplication::translate("SerialPort_testClass", "Step Size:", nullptr));
        label3_2->setText(QApplication::translate("SerialPort_testClass", "Speed:", nullptr));
        TargetPositionLabel->setText(QApplication::translate("SerialPort_testClass", "Target position:", nullptr));
        DriversWidget->setTabText(DriversWidget->indexOf(Driver2), QApplication::translate("SerialPort_testClass", "Driver 2", nullptr));
        ApplySetting_3->setText(QApplication::translate("SerialPort_testClass", "Apply settings", nullptr));
        StepSizelabel_3->setText(QApplication::translate("SerialPort_testClass", "Step Size:", nullptr));
        label3_3->setText(QApplication::translate("SerialPort_testClass", "Speed:", nullptr));
        TargetPositionLabel_3->setText(QApplication::translate("SerialPort_testClass", "Target position:", nullptr));
        DriversWidget->setTabText(DriversWidget->indexOf(Driver3), QApplication::translate("SerialPort_testClass", "Driver 3", nullptr));
        ControlPositionFromPCcheckBox->setText(QApplication::translate("SerialPort_testClass", "Set position from PC", nullptr));
        RunVectorButton->setText(QApplication::translate("SerialPort_testClass", "Run Vector ", nullptr));
        NextPositionButton->setText(QApplication::translate("SerialPort_testClass", "Next Position", nullptr));
        LoadFileButton->setText(QApplication::translate("SerialPort_testClass", "Load from file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialPort_testClass: public Ui_SerialPort_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORT_TEST_H
