// Object: ProfileOptionsReaderNodeData
// ClassId: 1079
// RuntimeId: 28197
// TypeInfo: 0x0000000144DC3980
#include "../Audio/AudioGraphNodeData.h"
#include "../DiceCommonsShared/ProfileOptionsGroup.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ProfileOptionsReaderNodeData : public Audio::AudioGraphNodeData {
        Array<DiceCommonsShared::ProfileOptionsGroup> ProfileOptions; // 0x18
    }; // 0x20
    static_assert(sizeof(ProfileOptionsReaderNodeData) == 0x20);
}
#pragma pack(pop)