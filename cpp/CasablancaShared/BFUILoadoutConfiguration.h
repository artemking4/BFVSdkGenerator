// Object: BFUILoadoutConfiguration
// ClassId: 179
// RuntimeId: 44699
// TypeInfo: 0x0000000144D4C8F0
#include "../Core/Asset.h"
#include "../CasablancaShared/BFUICustomizationSlotDescription.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILoadoutConfiguration : public Core::Asset {
        Array<CasablancaShared::BFUICustomizationSlotDescription> Slots; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUILoadoutConfiguration) == 0x28);
}
#pragma pack(pop)