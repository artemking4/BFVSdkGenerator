// Object: UserMusicControllerNodeData
// ClassId: 1109
// RuntimeId: 52853
// TypeInfo: 0x0000000144E02470
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class UserMusicControllerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Override; // 0x18
        Audio::AudioGraphNodePort Restore; // 0x20
        Boolean RestoreOnDeactivated; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(UserMusicControllerNodeData) == 0x30);
}
#pragma pack(pop)