// Object: AchievementExportPipelineSettings
// ClassId: 89
// RuntimeId: 43304
// TypeInfo: 0x0000000144D6D1B0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AchievementExportPipelineSettings : public Core::DataContainer {
        Boolean DisableValidation; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(AchievementExportPipelineSettings) == 0x20);
}
#pragma pack(pop)