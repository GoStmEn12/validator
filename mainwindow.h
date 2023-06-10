#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QRegularExpressionValidator>
#include <QRegularExpressionMatch>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class PasswordValidator
{
     QString str = "[A-Za-z]{2}[0-9]{2}[0-9]{6}[0-9]{19}";
       QRegularExpression reg1=QRegularExpression(str);
public:

    virtual bool isValid(QString somestring)
    {
        QRegularExpressionMatch regmatch1 = reg1.match(somestring);
        bool ismatch1 = regmatch1.hasMatch() ;
        if  (ismatch1==true && somestring.size()<=29)
            return true;
        else
            return false;
    }
};

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
