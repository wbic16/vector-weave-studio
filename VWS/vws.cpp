#include "vws.h"
#include "./ui_vectorweavestudio.h"

VectorWeaveStudio::VectorWeaveStudio(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VectorWeaveStudio)
{
    ui->setupUi(this);
}

VectorWeaveStudio::~VectorWeaveStudio()
{
    delete ui;
}
