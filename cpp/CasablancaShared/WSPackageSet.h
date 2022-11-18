// Object: WSPackageSet
// ClassId: 5344
// RuntimeId: 16464
// TypeInfo: 0x0000000144CFAED0
#include "../CasablancaShared/WSNodeBase.h"
#include "../CasablancaShared/WSPackage.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSPackageSet : public CasablancaShared::WSNodeBase {
        Array<CasablancaShared::WSPackage> Packages; // 0x28
        Array<CString> EnabledForGameModes; // 0x30
        Boolean EnabledForAllGameModes; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(WSPackageSet) == 0x40);
}
#pragma pack(pop)