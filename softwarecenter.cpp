#include "softwarecenter.h"
#include "ui_softwarecenter.h"

#include <QLabel>
#include <QMessageBox>

#include "softman.h"

SoftwareCenter::SoftwareCenter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SoftwareCenter)
{
    ui->setupUi(this);
    daemon = PackageKit::Daemon::global();
    QLabel *backend = new QLabel(ui->statusBar);
    backend->setText(daemon->backendName());
    ui->statusBar->addWidget(backend);
    ui->centralWidget->addItem(new QListWidgetItem(tr("Install a new software")));
    ui->centralWidget->addItem(new QListWidgetItem(tr("Software Management")));
}

SoftwareCenter::~SoftwareCenter()
{
    delete ui;
}

void SoftwareCenter::on_centralWidget_activated(const QModelIndex &index)
{
    if(ui->centralWidget->item(index.row())->text() == tr("Install a new software"))
    {
        QMessageBox::information(this,"","New software",QMessageBox::Ok);
    }
    if(ui->centralWidget->item(index.row())->text() == tr("Software Management"))
    {
        //QMessageBox::information(this,"","New software",QMessageBox::Ok);
        SoftMan *sm = new SoftMan();
        //this->hide();
        sm->setModal(true);
        sm->show();
        connect(sm,SIGNAL(destroyed()),this,SLOT(show()));
        //this->show();
    }
}
