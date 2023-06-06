#include <includes.h>

__attribute__((constructor))
void hyperdahs()
{
  PatchManager pm;
  pm.addPatch("libcocos2dcpp.so", 0x2CDB14, "A7"); //levelPage count
  pm.addPatch("libcocos2dcpp.so", 0x21E5F2, "0B"); //remove levelComplete anti-cheat
  pm.addPatch("libcocos2dcpp.so", 0x228D2D, "E0"); //icon hack
  pm.addPatch("libcocos2dcpp.so", 0x227E9C, "FF"); //color hack
  pm.Modify();
}
