// Object: ActorCustomizationData
// ClassId: 287
// RuntimeId: 44210
// TypeInfo: 0x0000000144DBE530
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/CustomizeVisual.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ActorCustomizationData : public Core::DataContainerPolicyAsset {
        Array<GameShared::CustomizeVisual> VisualGroups; // 0x20
    }; // 0x28
    static_assert(sizeof(ActorCustomizationData) == 0x28);
}
#pragma pack(pop)