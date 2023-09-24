#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<iostream>
#include<string>
#include<QSpinBox>
#include<QPlainTextEdit>
#include<QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void vaciar();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_verticalSlider_valueChanged(int value);

    void on_verticalSlider_2_valueChanged(int value);

    void on_verticalSlider_3_valueChanged(int value);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_plainTextEdit_textChanged();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

class Neurona
{
public:
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;

    Neurona();
    Neurona *sig;
    Neurona(int,float,int,int,int,int,int,Neurona*);
};

class Administrar
{
public:
    Neurona *h;
    Administrar()
    {
        h=nullptr;
    }
    Administrar(Neurona*ptr)
    {
        h=ptr;
    }
    void agregrarInicio(int,float,int,int,int,int,int);
    void agregarFinal(int,float,int,int,int,int,int);
    void mostrar();
};

#endif // MAINWINDOW_H
