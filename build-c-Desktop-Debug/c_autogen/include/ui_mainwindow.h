/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *clockLayout;
    QPushButton *clockInButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *clockOutButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *monLayout;
    QLabel *monLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *monInLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *monOutLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *tueLayout;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *wedLayout;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *thuLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *friLayout;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_15;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(370, 270);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 201, 41));
        clockLayout = new QHBoxLayout(horizontalLayoutWidget);
        clockLayout->setObjectName(QString::fromUtf8("clockLayout"));
        clockLayout->setContentsMargins(0, 0, 0, 0);
        clockInButton = new QPushButton(horizontalLayoutWidget);
        clockInButton->setObjectName(QString::fromUtf8("clockInButton"));

        clockLayout->addWidget(clockInButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        clockLayout->addItem(horizontalSpacer);

        clockOutButton = new QPushButton(horizontalLayoutWidget);
        clockOutButton->setObjectName(QString::fromUtf8("clockOutButton"));

        clockLayout->addWidget(clockOutButton);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 60, 351, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        monLayout = new QHBoxLayout();
        monLayout->setObjectName(QString::fromUtf8("monLayout"));
        monLabel = new QLabel(verticalLayoutWidget);
        monLabel->setObjectName(QString::fromUtf8("monLabel"));
        monLabel->setMinimumSize(QSize(40, 0));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        monLabel->setFont(font);

        monLayout->addWidget(monLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        monLayout->addItem(horizontalSpacer_2);

        monInLabel = new QLabel(verticalLayoutWidget);
        monInLabel->setObjectName(QString::fromUtf8("monInLabel"));
        monInLabel->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setItalic(true);
        monInLabel->setFont(font1);
        monInLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));
        monInLabel->setAlignment(Qt::AlignCenter);

        monLayout->addWidget(monInLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        monLayout->addItem(horizontalSpacer_3);

        monOutLabel = new QLabel(verticalLayoutWidget);
        monOutLabel->setObjectName(QString::fromUtf8("monOutLabel"));
        monOutLabel->setMinimumSize(QSize(100, 0));
        monOutLabel->setFont(font1);
        monOutLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));
        monOutLabel->setAlignment(Qt::AlignCenter);

        monLayout->addWidget(monOutLabel);


        verticalLayout->addLayout(monLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tueLayout = new QHBoxLayout();
        tueLayout->setObjectName(QString::fromUtf8("tueLayout"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(40, 0));
        label_7->setFont(font);

        tueLayout->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        tueLayout->addItem(horizontalSpacer_4);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);

        tueLayout->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        tueLayout->addItem(horizontalSpacer_5);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);

        tueLayout->addWidget(label_9);


        verticalLayout->addLayout(tueLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        wedLayout = new QHBoxLayout();
        wedLayout->setObjectName(QString::fromUtf8("wedLayout"));
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(40, 0));
        label_10->setFont(font);

        wedLayout->addWidget(label_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        wedLayout->addItem(horizontalSpacer_7);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignCenter);

        wedLayout->addWidget(label_11);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        wedLayout->addItem(horizontalSpacer_6);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_12->setAlignment(Qt::AlignCenter);

        wedLayout->addWidget(label_12);


        verticalLayout->addLayout(wedLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        thuLayout = new QHBoxLayout();
        thuLayout->setObjectName(QString::fromUtf8("thuLayout"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setFont(font);

        thuLayout->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        thuLayout->addItem(horizontalSpacer_8);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        thuLayout->addWidget(label_5);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        thuLayout->addItem(horizontalSpacer_9);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);

        thuLayout->addWidget(label_6);


        verticalLayout->addLayout(thuLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        friLayout = new QHBoxLayout();
        friLayout->setObjectName(QString::fromUtf8("friLayout"));
        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(40, 0));
        label_13->setFont(font);

        friLayout->addWidget(label_13);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        friLayout->addItem(horizontalSpacer_10);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_14->setAlignment(Qt::AlignCenter);

        friLayout->addWidget(label_14);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        friLayout->addItem(horizontalSpacer_11);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 0));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_15->setAlignment(Qt::AlignCenter);

        friLayout->addWidget(label_15);


        verticalLayout->addLayout(friLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 370, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        clockInButton->setText(QApplication::translate("MainWindow", "ClockIn", nullptr));
        clockOutButton->setText(QApplication::translate("MainWindow", "ClockOut", nullptr));
        monLabel->setText(QApplication::translate("MainWindow", "Mon", nullptr));
        monInLabel->setText(QString());
        monOutLabel->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Tue ", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Wed", nullptr));
        label_11->setText(QString());
        label_12->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Thu", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Fri", nullptr));
        label_14->setText(QString());
        label_15->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
