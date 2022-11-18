// Object: UISoldierArchetypeCharacteristicInfo
// ClassId: 5523
// RuntimeId: 3393
// TypeInfo: 0x0000000144D99E10
#include "../Core/DataContainer.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISoldierArchetypeCharacteristicInfo : public Core::DataContainer {
        UIIncubatorShared::LocalizedStringId NameSid; // 0x18
        Int32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UISoldierArchetypeCharacteristicInfo) == 0x28);
}
#pragma pack(pop)