// Object: DiceUIDeepLinkTargetAssetBasePipelineResult
// ClassId: 1520
// RuntimeId: 49409
// TypeInfo: 0x0000000144DBB100
#include "../Core/DataContainer.h"
#include "../Entity/PropertyChannel.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceUIDeepLinkTargetAssetBasePipelineResult : public Core::DataContainer {
        Array<Entity::PropertyChannel> MergedProperties; // 0x18
    }; // 0x20
    static_assert(sizeof(DiceUIDeepLinkTargetAssetBasePipelineResult) == 0x20);
}
#pragma pack(pop)