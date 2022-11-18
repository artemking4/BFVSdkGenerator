// Object: AwarenessTargetEntityData
// ClassId: 3259
// RuntimeId: 49080
// TypeInfo: 0x0000000144DE7F90
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/AwarenessTargetInfo.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class AwarenessTargetEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        DiceShooterShared::AwarenessTargetInfo TargetInfo; // 0x64
        Boolean ActivateTarget; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(AwarenessTargetEntityData) == 0x80);
}
#pragma pack(pop)