// Object: LocationEffectEntityData
// ClassId: 3282
// RuntimeId: 57057
// TypeInfo: 0x0000000144E227C0
#include "../Entity/ChildEffectEntityData.h"
#include "../Effect/LocationType.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Effect {
    class LocationEffectEntityData : public Entity::ChildEffectEntityData {
        Effect::LocationType Location; // 0xA0
        Uint32 CtrlPointIndex; // 0xA4
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(LocationEffectEntityData) == 0xB0);
}
#pragma pack(pop)