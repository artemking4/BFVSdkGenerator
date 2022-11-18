// Object: CharacterStateIKControllerData
// ClassId: 1342
// RuntimeId: 1742
// TypeInfo: 0x0000000144EF47A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../Global/Uint8.h"
#include "../Physics/RigidBodyCollisionLayer.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateIKControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::BoolChannelData EnableIkChannel; // 0x50
        Float32 BlendOutTicks; // 0x58
        char pad_0x5C[0x4];
        MotionMachineShared::TransformChannelData Position; // 0x60
        MotionMachineShared::TransformChannelData BeginChain; // 0x68
        MotionMachineShared::TransformChannelData MiddleChain; // 0x70
        MotionMachineShared::TransformChannelData EndChain; // 0x78
        MotionMachineShared::TransformChannelData BeginResult; // 0x80
        MotionMachineShared::TransformChannelData MiddleResult; // 0x88
        MotionMachineShared::TransformChannelData EndResult; // 0x90
        MotionMachineShared::TransformChannelData TargetWorldSpace; // 0x98
        MotionMachineShared::TransformChannelData FutureFoot; // 0xA0
        MotionMachineShared::BoolChannelData FootPlanted; // 0xA8
        Float32 FootHeight; // 0xB0
        Physics::RigidBodyCollisionLayer RayCollisionLayer; // 0xB4
        Float32 RayStartHeight; // 0xB8
        Float32 RayEndHeight; // 0xBC
        Float32 UpdateRaycastTargetThreshold; // 0xC0
        Uint8 BlendTicks; // 0xC4
        char pad_0xC5[0x3];
    }; // 0xC8
    static_assert(sizeof(CharacterStateIKControllerData) == 0xC8);
}
#pragma pack(pop)