// Object: KickPlayerEntityData
// ClassId: 2819
// RuntimeId: 22198
// TypeInfo: 0x0000000144D2AA20
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class KickPlayerEntityData : public Entity::EntityData {
        Int32 KickReason; // 0x20
        Boolean CanKickAdmin; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(KickPlayerEntityData) == 0x28);
}
#pragma pack(pop)