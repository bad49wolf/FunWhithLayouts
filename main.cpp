#include "hpp/dialog1.h"
#include "hpp/dialog2.h"
#include "hpp/dialog3.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
    Dialog3 x1;
    Dialog2 x2;
    Dialog1 x3;
    x1.show();
    x3.show();
    x2.show();
  return app.exec();
}
