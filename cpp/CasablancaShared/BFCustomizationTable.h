// Object: BFCustomizationTable
// ClassId: 1192
// RuntimeId: 29632
// TypeInfo: 0x0000000144D4CA70
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFCustomizationUnlockParts.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFCustomizationTable : public Core::DataContainer {
        Array<CasablancaShared::BFCustomizationUnlockParts> UnlockParts; // 0x18
    }; // 0x20
    static_assert(sizeof(BFCustomizationTable) == 0x20);
}
#pragma pack(pop)