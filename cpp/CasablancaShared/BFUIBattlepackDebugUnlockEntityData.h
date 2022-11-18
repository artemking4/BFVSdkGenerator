// Object: BFUIBattlepackDebugUnlockEntityData
// ClassId: 2154
// RuntimeId: 37047
// TypeInfo: 0x0000000144D307A0
#include "../Entity/EntityData.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../CasablancaShared/VeniceVehicleCustomizationAsset.h"
#include "../CasablancaShared/BattlepackItemType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBattlepackDebugUnlockEntityData : public Entity::EntityData {
        GameShared::UnlockAssetBase Unlock; // 0x20
        CasablancaShared::VeniceVehicleCustomizationAsset Vehicle; // 0x28
        CasablancaShared::BattlepackItemType ItemType; // 0x30
        char pad_0x34[0x4];
        Array<GameShared::UnlockAssetBase> VisualUnlocks; // 0x38
        Array<GameShared::UnlockAssetBase> VehicleWeaponUnlocks; // 0x40
        GameShared::UnlockAssetBase FeaturedPartUnlock; // 0x48
    }; // 0x50
    static_assert(sizeof(BFUIBattlepackDebugUnlockEntityData) == 0x50);
}
#pragma pack(pop)