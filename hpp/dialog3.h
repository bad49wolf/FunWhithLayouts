#include <QWidget>
#include <QGridLayout>
#include <QLCDNumber>
#include <QPushButton>
#include <QVBoxLayout>
#include <QApplication>
class Dialog3 : public QWidget {

  public:
 Dialog3(QWidget *parent= nullptr);
   void createWidgets();
   void placeWidgets();
   void makeConnections();
private:
    QGridLayout *grid_layout;
    QVBoxLayout* layout ;
    QVector<QString> nums;
    QLCDNumber* lcd;

};

