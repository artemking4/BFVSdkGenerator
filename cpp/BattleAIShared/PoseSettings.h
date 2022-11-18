// Object: PoseSettings
// ClassId: 4448
// RuntimeId: 16564
// TypeInfo: 0x0000000144C11B80
#include "../Core/DataContainer.h"
#include "../BattleAIShared/Pose.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class PoseSettings : public Core::DataContainer {
        BattleAIShared::Pose Pose; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PoseSettings) == 0x20);
}
#pragma pack(pop)