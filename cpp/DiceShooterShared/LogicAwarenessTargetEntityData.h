// Object: LogicAwarenessTargetEntityData
// ClassId: 2852
// RuntimeId: 40238
// TypeInfo: 0x0000000144DE7F10
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/AwarenessTargetInfo.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class LogicAwarenessTargetEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 LocalOffset; // 0x30
        DiceShooterShared::AwarenessTargetInfo TargetInfo; // 0x40
        Boolean ActivateTarget; // 0x50
        char pad_0x51[0xF];
    }; // 0x60
    static_assert(sizeof(LogicAwarenessTargetEntityData) == 0x60);
}
#pragma pack(pop)