// Object: HumanPlayerProxyEntityData
// ClassId: 2796
// RuntimeId: 58960
// TypeInfo: 0x0000000144E77B40
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class HumanPlayerProxyEntityData : public Entity::EntityData {
        Boolean EnableOnDiedOnMeleeEvent; // 0x20
        Boolean EnableOnDiedInWaterEvent; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(HumanPlayerProxyEntityData) == 0x28);
}
#pragma pack(pop)