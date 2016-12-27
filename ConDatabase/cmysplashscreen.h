/****************************************************************************
**
** Copyright (C) 2016 Alone95
** Version	: 0.1.0
** Author	: Alone95
** Website	: https://github.com/Alone95
**
****************************************************************************/
#ifndef CMYSPLASHSCREEN_H
#define CMYSPLASHSCREEN_H

#include <QSplashScreen>
#include <QPixmap>
#include <QProgressBar>
#include <QList>
#include <QtGlobal>

class CMySplashScreen: public QSplashScreen
{
     Q_OBJECT

public:
     CMySplashScreen(QPixmap& pixmap,int time);
     ~CMySplashScreen();

private:
     //进度条
     QProgressBar *ProgressBar;
     //随机数列表
     QList<int> numbersList;
     //启动界面停留的时间
     int elapseTime;

private:
     void setProgress();
     void generateAscendRandomNumber();

private slots:
     void slotUpdateProgress();
};

#endif // CMYSPLASHSCREEN_H
