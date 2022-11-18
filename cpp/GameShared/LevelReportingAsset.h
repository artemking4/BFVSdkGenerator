// Object: LevelReportingAsset
// ClassId: 542
// RuntimeId: 2487
// TypeInfo: 0x0000000144E78240
#include "../Core/Asset.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace GameShared {
    class LevelReportingAsset : public Core::Asset {
        Array<Guid> BuiltLevels; // 0x20
    }; // 0x28
    static_assert(sizeof(LevelReportingAsset) == 0x28);
}
#pragma pack(pop)