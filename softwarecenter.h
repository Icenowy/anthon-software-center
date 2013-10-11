#ifndef SOFTWARECENTER_H
#define SOFTWARECENTER_H

#include <QMainWindow>
#include <PackageKit/packagekit-qt2/Daemon>
#include <QModelIndex>

namespace Ui {
class SoftwareCenter;
}

class SoftwareCenter : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit SoftwareCenter(QWidget *parent = 0);
    ~SoftwareCenter();
    
private slots:
    void on_centralWidget_activated(const QModelIndex &index);

private:
    Ui::SoftwareCenter *ui;
    PackageKit::Daemon *daemon;
};

#endif // SOFTWARECENTER_H
