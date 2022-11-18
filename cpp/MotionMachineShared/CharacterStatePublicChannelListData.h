// Object: CharacterStatePublicChannelListData
// ClassId: 321
// RuntimeId: 46722
// TypeInfo: 0x0000000144EFB130
#include "../Core/DataContainerPolicyAsset.h"
#include "../MotionMachineShared/CharacterStatePublicChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePublicChannelListData : public Core::DataContainerPolicyAsset {
        Array<MotionMachineShared::CharacterStatePublicChannelData> PublicChannels; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStatePublicChannelListData) == 0x28);
}
#pragma pack(pop)