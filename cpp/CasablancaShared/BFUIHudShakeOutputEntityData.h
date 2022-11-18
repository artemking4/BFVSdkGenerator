// Object: BFUIHudShakeOutputEntityData
// ClassId: 2282
// RuntimeId: 51836
// TypeInfo: 0x0000000144D9C410
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIHudShakeFilter.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIHudShakeOutputEntityData : public Entity::EntityData {
        CasablancaShared::BFUIHudShakeFilter Filter; // 0x20
        Boolean Enabled; // 0x30
        char pad_0x31[0xF];
        Core::Vec3 OffsetMultiplier; // 0x40
    }; // 0x50
    static_assert(sizeof(BFUIHudShakeOutputEntityData) == 0x50);
}
#pragma pack(pop)