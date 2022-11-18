// Object: BomberWeaponData
// ClassId: 5208
// RuntimeId: 34271
// TypeInfo: 0x0000000144D3F850
#include "../CasablancaShared/LockingWeaponData.h"
#include "../Global/Float32.h"
#include "../Entity/PrefabBlueprint.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BomberWeaponData : public CasablancaShared::LockingWeaponData {
        Float32 MaxPitchAngle; // 0x48
        Float32 MinPitchAngle; // 0x4C
        Entity::PrefabBlueprint MapMarkerPrefabBlueprint; // 0x50
    }; // 0x58
    static_assert(sizeof(BomberWeaponData) == 0x58);
}
#pragma pack(pop)