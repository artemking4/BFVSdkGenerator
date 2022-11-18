// Object: OverrideJointEntityData
// ClassId: 2926
// RuntimeId: 6956
// TypeInfo: 0x0000000144DEDF20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/SubRealm.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Entity/GameplayBones.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class OverrideJointEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Entity::SubRealm SubRealm; // 0x24
        Uint32 JointNameHash; // 0x28
        Int32 ClientJointIndex; // 0x2C
        Int32 ServerJointIndex; // 0x30
        Entity::GameplayBones GameplayBone; // 0x34
        Float32 CullingDistance; // 0x38
        Boolean QueryByJointName; // 0x3C
        Boolean AlwaysEnabled; // 0x3D
        Boolean WriteBackToPose; // 0x3E
        Boolean TranslationOnly; // 0x3F
    }; // 0x40
    static_assert(sizeof(OverrideJointEntityData) == 0x40);
}
#pragma pack(pop)