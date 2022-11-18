// Object: BlueprintProxyData
// ClassId: 3948
// RuntimeId: 555
// TypeInfo: 0x0000000144DB5E90
#include "../DiceCommonsShared/BlueprintProxyPropertyFilterData.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../DiceCommonsShared/ProxyPropertyContainer.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class BlueprintProxyData : public DiceCommonsShared::BlueprintProxyPropertyFilterData {
        Core::LinearTransform PreviewSpawnPosition; // 0xC0
        Array<DiceCommonsShared::ProxyPropertyContainer> ConnectedProperties; // 0x100
        Boolean PreviewInGameView; // 0x108
        char pad_0x109[0x7];
    }; // 0x110
    static_assert(sizeof(BlueprintProxyData) == 0x110);
}
#pragma pack(pop)