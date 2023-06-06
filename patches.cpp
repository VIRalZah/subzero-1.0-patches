#include <includes.h>

__attribute__((constructor))
void hyperdahs()
{
  PatchManager pm;
	pm.addPatch("libcocos2dcpp.so", 0x2CDB14, "A7"); //levelPage count
	pm.addPatch("libcocos2dcpp.so", 0x21E5F2, "0B"); //remove anti-cheat
  pm.Modify();
}
