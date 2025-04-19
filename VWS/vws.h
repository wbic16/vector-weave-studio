#ifndef VWS_H
#define VWS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class VectorWeaveStudio;
}
QT_END_NAMESPACE

class VectorWeaveStudio : public QMainWindow
{
    Q_OBJECT

public:
    VectorWeaveStudio(QWidget *parent = nullptr);
    ~VectorWeaveStudio();

private:
    Ui::VectorWeaveStudio *ui;
};
#endif // VWS_H
