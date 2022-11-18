// Object: AntAnimatableEntityData
// ClassId: 2058
// RuntimeId: 8767
// TypeInfo: 0x0000000144E97790
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/SubRealm.h"
#include "../GameShared/AntAnimationHandlerData.h"
#include "../Global/Boolean.h"
#include "../GameShared/AnimationControlModeEnum.h"
#include "../GameShared/JointOutputModeEnum.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AntAnimatableEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Entity::SubRealm SubRealm; // 0x24
        GameShared::AntAnimationHandlerData AnimationData; // 0x28
        GameShared::AnimationControlModeEnum InitialAnimationControlMode; // 0x130
        GameShared::JointOutputModeEnum JointOutputMode; // 0x134
        Array<Int32> JointOutputPropertyIds; // 0x138
        Boolean AutoActivate; // 0x140
        Boolean InitialForceDisableCulling; // 0x141
        Boolean DisableAutoDistanceCulling; // 0x142
        Boolean Interpolation; // 0x143
        char pad_0x144[0x4];
    }; // 0x148
    static_assert(sizeof(AntAnimatableEntityData) == 0x148);
}
#pragma pack(pop)