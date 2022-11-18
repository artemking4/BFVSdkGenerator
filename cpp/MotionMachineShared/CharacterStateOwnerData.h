// Object: CharacterStateOwnerData
// ClassId: 320
// RuntimeId: 15859
// TypeInfo: 0x0000000144EFA9B0
#include "../Core/DataContainerPolicyAsset.h"
#include "../MotionMachineShared/CharacterStateRootControllerData.h"
#include "../MotionMachineShared/ChannelSetData.h"
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/CharacterStateControllerGroup.h"
#include "../MotionMachineShared/CharacterStatePublicChannelMappingTable.h"
#include "../MotionMachineShared/CharacterStateDynamicAvoidanceData.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"
#include "../MotionMachineShared/CommonPhysicsChannels.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateOwnerData : public Core::DataContainerPolicyAsset {
        MotionMachineShared::CharacterStateRootControllerData RootController; // 0x20
        MotionMachineShared::ChannelSetData IncludedChannels; // 0x28
        Array<MotionMachineShared::CharacterStateBaseControllerData> AllControllerDatas; // 0x30
        Array<MotionMachineShared::CharacterStateControllerGroup> ControllerGroups; // 0x38
        MotionMachineShared::CharacterStatePublicChannelMappingTable PublicChannelMapping; // 0x40
        MotionMachineShared::CharacterStateDynamicAvoidanceData DynamicAvoidance; // 0x68
        Ant::AntRef ProxyDataPointer; // 0x70
        Ant::AntRef AttachedProxyDataPointer; // 0x84
        Ant::AntRef Animatable; // 0x98
        Ant::AntRef SceneOpMatrix; // 0xAC
        Int32 ControllerSoftLimitSize; // 0xC0
        char pad_0xC4[0x4];
        MotionMachineShared::CommonPhysicsChannels CommonPhysicsChannels; // 0xC8
    }; // 0xD0
    static_assert(sizeof(CharacterStateOwnerData) == 0xD0);
}
#pragma pack(pop)