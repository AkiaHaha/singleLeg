/********************************************************************************
** Form generated from reading UI file 'plot.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_H
#define UI_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotWindow
{
public:
    QAction *act_imu;
    QAction *act_position;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PlotWindow)
    {
        if (PlotWindow->objectName().isEmpty())
            PlotWindow->setObjectName(QStringLiteral("PlotWindow"));
        PlotWindow->resize(637, 573);
        act_imu = new QAction(PlotWindow);
        act_imu->setObjectName(QStringLiteral("act_imu"));
        act_imu->setCheckable(true);
        act_position = new QAction(PlotWindow);
        act_position->setObjectName(QStringLiteral("act_position"));
        act_position->setCheckable(true);
        centralWidget = new QWidget(PlotWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PlotWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PlotWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 637, 22));
        PlotWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PlotWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PlotWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PlotWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PlotWindow->setStatusBar(statusBar);

        mainToolBar->addAction(act_imu);
        mainToolBar->addAction(act_position);

        retranslateUi(PlotWindow);

        QMetaObject::connectSlotsByName(PlotWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlotWindow)
    {
        PlotWindow->setWindowTitle(QApplication::translate("PlotWindow", "Axis Tags Example", nullptr));
        act_imu->setText(QApplication::translate("PlotWindow", "IMU", nullptr));
#ifndef QT_NO_TOOLTIP
        act_imu->setToolTip(QApplication::translate("PlotWindow", "IMU", nullptr));
#endif // QT_NO_TOOLTIP
        act_position->setText(QApplication::translate("PlotWindow", "pos", nullptr));
#ifndef QT_NO_TOOLTIP
        act_position->setToolTip(QApplication::translate("PlotWindow", "pos", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PlotWindow: public Ui_PlotWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_H
