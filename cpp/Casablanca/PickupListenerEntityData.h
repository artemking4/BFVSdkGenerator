// Object: PickupListenerEntityData
// ClassId: 2998
// RuntimeId: 17580
// TypeInfo: 0x0000000144C327F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PickupListenerEntityData : public Entity::EntityData {
        Boolean TriggerOnlyForOwner; // 0x20
        Boolean Enabled; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(PickupListenerEntityData) == 0x28);
}
#pragma pack(pop)