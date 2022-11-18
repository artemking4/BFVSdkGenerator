// Object: ProjectileSettings
// ClassId: 4538
// RuntimeId: 55030
// TypeInfo: 0x0000000144C12880
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/AIMeleeSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class ProjectileSettings : public Core::DataContainer {
        Float32 Lower; // 0x18
        Float32 Upper; // 0x1C
        BattleAIShared::AIMeleeSettings AIMeleeSettings; // 0x20
    }; // 0x28
    static_assert(sizeof(ProjectileSettings) == 0x28);
}
#pragma pack(pop)