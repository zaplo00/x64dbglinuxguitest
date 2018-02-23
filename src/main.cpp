#include "src/headers/mainwindow.h"
#include "headers/types.h"

int main(int argc, char **argv) {
   qRegisterMetaType<dsint>("dsint");
   qRegisterMetaType<duint>("duint");
   qRegisterMetaType<byte_t>("byte_t");

   return 0;
}
