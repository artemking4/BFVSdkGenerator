// Object: BFSPIconSettingsEntityData
// ClassId: 2118
// RuntimeId: 4360
// TypeInfo: 0x0000000144D40D50
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFSPIconSettingsEntityData : public Entity::EntityData {
        Float32 InworldDropDistance; // 0x20
        Float32 MinimapDropDistance; // 0x24
        Float32 MinimapIconScale; // 0x28
        Float32 MinimapIconAlpha; // 0x2C
        Int32 MinimapStickMargin; // 0x30
        Float32 InworldIconScale; // 0x34
        Float32 InworldIconAlpha; // 0x38
        char pad_0x3C[0x4];
        CString DropWeaponIcon; // 0x40
        CString DropAmmoIcon; // 0x48
        Boolean ShowDropInworld; // 0x50
        Boolean ShowDropMinimap; // 0x51
        char pad_0x52[0x6];
    }; // 0x58
    static_assert(sizeof(BFSPIconSettingsEntityData) == 0x58);
}
#pragma pack(pop)