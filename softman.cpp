#include "softman.h"
#include "ui_softman.h"

SoftMan::SoftMan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SoftMan)
{
    ui->setupUi(this);
    daemon = PackageKit::Daemon::global();

}

SoftMan::~SoftMan()
{
    delete ui;
}
