// Object: ClassicBoostData
// ClassId: 1296
// RuntimeId: 38382
// TypeInfo: 0x0000000144D651F0
#include "../CasablancaShared/CatalogBoostBaseData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClassicBoostData : public CasablancaShared::CatalogBoostBaseData {
        Uint32 Duration; // 0x68
        Boolean DrainWhileDead; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(ClassicBoostData) == 0x70);
}
#pragma pack(pop)