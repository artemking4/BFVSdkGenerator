// Object: JointTransformQueryEntityData
// ClassId: 2817
// RuntimeId: 17223
// TypeInfo: 0x0000000144DE4BF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/SubRealm.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Entity/GameplayBones.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class JointTransformQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform CulledOffset; // 0x30
        Entity::SubRealm SubRealm; // 0x70
        Uint32 JointNameHash; // 0x74
        Int32 ClientJointIndex; // 0x78
        Int32 ServerJointIndex; // 0x7C
        Entity::GameplayBones GameplayBone; // 0x80
        Boolean QueryByJointName; // 0x84
        Boolean AlwaysEnabled; // 0x85
        Boolean UseRootForCulledAnimatable; // 0x86
        char pad_0x87[0x9];
    }; // 0x90
    static_assert(sizeof(JointTransformQueryEntityData) == 0x90);
}
#pragma pack(pop)