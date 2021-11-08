#include <QWidget>
#include <QLineEdit>
#include <QFormLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLayoutItem>
#include<QApplication>
class Dialog1: public QWidget
{
public:
   explicit Dialog1(QWidget *parent = nullptr);
    void createWidgets();
    void placeWidgets();
     void makeConnections();
private:
    QLineEdit* name ;
    QPushButton* search;
    QPushButton* close;
    QCheckBox* match;
    QCheckBox* search_b;
};
