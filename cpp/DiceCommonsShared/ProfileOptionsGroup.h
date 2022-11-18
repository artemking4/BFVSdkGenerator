// Object: ProfileOptionsGroup
// ClassId: 1160
// RuntimeId: 16743
// TypeInfo: 0x0000000144DC3A00
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../GameShared/ProfileOptionData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ProfileOptionsGroup : public Audio::AudioGraphNodePortGroup {
        GameShared::ProfileOptionData ProfileOptionAsset; // 0x18
        Audio::AudioGraphNodePort ProfileOptionValue; // 0x20
    }; // 0x28
    static_assert(sizeof(ProfileOptionsGroup) == 0x28);
}
#pragma pack(pop)