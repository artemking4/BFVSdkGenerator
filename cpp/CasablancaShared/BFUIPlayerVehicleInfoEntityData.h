// Object: BFUIPlayerVehicleInfoEntityData
// ClassId: 2342
// RuntimeId: 53143
// TypeInfo: 0x0000000144D414D0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPlayerVehicleInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIPlayerVehicleInfoEntityData) == 0x30);
}
#pragma pack(pop)