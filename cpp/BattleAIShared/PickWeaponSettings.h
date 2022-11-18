// Object: PickWeaponSettings
// ClassId: 4421
// RuntimeId: 47814
// TypeInfo: 0x0000000144C11680
#include "../Core/DataContainer.h"
#include "../BattleAIShared/SlotRange.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class PickWeaponSettings : public Core::DataContainer {
        Array<BattleAIShared::SlotRange> Slots; // 0x18
    }; // 0x20
    static_assert(sizeof(PickWeaponSettings) == 0x20);
}
#pragma pack(pop)