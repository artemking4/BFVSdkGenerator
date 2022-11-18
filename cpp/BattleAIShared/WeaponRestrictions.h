// Object: WeaponRestrictions
// ClassId: 5696
// RuntimeId: 45924
// TypeInfo: 0x0000000144C07060
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class WeaponRestrictions : public Core::DataContainer {
        Float32 FireDelayMin; // 0x18
        Float32 FireDelayMax; // 0x1C
    }; // 0x20
    static_assert(sizeof(WeaponRestrictions) == 0x20);
}
#pragma pack(pop)