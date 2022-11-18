// Object: BFUIGetVehicleSpawnPointEntityData
// ClassId: 2269
// RuntimeId: 17379
// TypeInfo: 0x0000000144D1EF70
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetVehicleSpawnPointEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleObject Vehicle; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIGetVehicleSpawnPointEntityData) == 0x30);
}
#pragma pack(pop)