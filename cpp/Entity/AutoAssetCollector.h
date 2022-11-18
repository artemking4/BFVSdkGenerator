// Object: AutoAssetCollector
// ClassId: 1183
// RuntimeId: 32613
// TypeInfo: 0x0000000144ED8070
#include "../Core/DataContainer.h"
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class AutoAssetCollector : public Core::DataContainer {
        Array<Core::Asset> Assets; // 0x18
        Float32 AutoCollectMinimumUsagePercentage; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AutoAssetCollector) == 0x28);
}
#pragma pack(pop)