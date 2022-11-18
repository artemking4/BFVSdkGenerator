// Object: CustomizationTable
// ClassId: 1488
// RuntimeId: 38524
// TypeInfo: 0x0000000144E815C0
#include "../Core/DataContainer.h"
#include "../GameShared/CustomizationUnlockParts.h"

#pragma pack(push, 8)
namespace GameShared {
    class CustomizationTable : public Core::DataContainer {
        Array<GameShared::CustomizationUnlockParts> UnlockParts; // 0x18
    }; // 0x20
    static_assert(sizeof(CustomizationTable) == 0x20);
}
#pragma pack(pop)