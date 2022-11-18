// Object: TeleportAreaEntityData
// ClassId: 3561
// RuntimeId: 5079
// TypeInfo: 0x0000000144C32870
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class TeleportAreaEntityData : public Entity::EntityData {
        Boolean TeleportSoldiers; // 0x20
        Boolean TeleportVehicles; // 0x21
        Boolean TeleportBangers; // 0x22
        Boolean TeleportProjectiles; // 0x23
        Boolean TeleportPickups; // 0x24
        Boolean ForceFitIntoTargetBox; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(TeleportAreaEntityData) == 0x28);
}
#pragma pack(pop)