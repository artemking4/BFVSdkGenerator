// Object: SpawnControllerEntityData
// ClassId: 3487
// RuntimeId: 44521
// TypeInfo: 0x0000000144DECD20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/SpawnDirection.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SpawnControllerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform SpawnCenterTransform; // 0x30
        Float32 NearLimitDistance; // 0x70
        Float32 FarLimitDistance; // 0x74
        DiceShooterShared::SpawnDirection SpawnDirection; // 0x78
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(SpawnControllerEntityData) == 0x80);
}
#pragma pack(pop)