/**
 * @file mainwindow.h
 * Create window and UI.
 * Widget is a field with a physical quantity graph.
 * Used "Roboto" font.
 * Slider style is Google Material.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 09.05.2017
 * @version 1.0
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QDialog>
#include <QGraphicsScene>
#include "Graphic_widget/GraphWidget.h"
#include "Physical_engine/PhysicalEngine.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{

    Q_OBJECT

    public:

        explicit MainWindow (QWidget* parent = 0);
        PhysicalEngine engine;
        ~MainWindow ();

    private slots:

        void setFormWidgets ();
        void startButtonEnable ();
        void on_startButton_clicked();
        void updateInformation (float curTime, float speedX, float speedY,
                                float coordX, float coordY, float energyX, float energyY);

    signals:

        void signalAlpha  (float x);
        void signalSpeed  (float x);
        void signalWeight (float x);

    private:

        void setCustomFont  ();
        void setWindowColor ();

        void initializationOfControl ();
        void connectToPhysicalEngine ();

        void enableElements(bool status);

        Ui::MainWindow* ui_;
        QSignalMapper* signMap_;

};

#endif // MAINWINDOW_H
