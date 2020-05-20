#include "dialog.h"
#include "ui_dialog.h"

const static double PI=3.1416;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->radiusLineWdit->text();
    int valueInt=valueStr.toInt((&ok));
    double area=valueInt*valueInt*PI;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}

void Dialog::on_radiusLineWdit_textChanged(const QString &arg1)
{
    bool ok;
    QString tempStr;
    QString valueStr=ui->radiusLineWdit->text();
    int valueInt=valueStr.toInt((&ok));
    double area=valueInt*valueInt*PI;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}
