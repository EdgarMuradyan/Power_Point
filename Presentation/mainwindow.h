#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsScene>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

        void on_lineButton_clicked();

        void on_clearaButton_clicked();

        void on_rectangelButton_clicked();

        void on_testButton_clicked();

        void on_pushButton_clicked();

private:

    Ui::MainWindow *ui;
    QGraphicsScene *scene;
};


#endif // MAINWINDOW_H
