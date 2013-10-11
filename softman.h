#ifndef SOFTMAN_H
#define SOFTMAN_H

#include <QDialog>
#include <PackageKit/packagekit-qt2/Daemon>
#include <QModelIndex>

namespace Ui {
class SoftMan;
}

class SoftMan : public QDialog
{
    Q_OBJECT
    
public:
    explicit SoftMan(QWidget *parent = 0);
    ~SoftMan();
    
private:
    Ui::SoftMan *ui;
    PackageKit::Daemon *daemon;
};

#endif // SOFTMAN_H
