// Object: SupplySphereComponentData
// ClassId: 1857
// RuntimeId: 40978
// TypeInfo: 0x0000000144C7D500
#include "../Entity/GameComponentData.h"
#include "../SoldierShared/SupplyData.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/QueryEntityResult.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SupplySphereComponentData : public Entity::GameComponentData {
        DiceShooterShared::QueryEntityResult SupplyingPlayer; // 0x80
        SoldierShared::SupplyData SupplyData; // 0x90
        GameShared::UnlockAssetBase UnlockAsset; // 0xC0
        Float32 DelayBetweenSuppliesOverride; // 0xC8
        Boolean Enabled; // 0xCC
        char pad_0xCD[0x3];
    }; // 0xD0
    static_assert(sizeof(SupplySphereComponentData) == 0xD0);
}
#pragma pack(pop)