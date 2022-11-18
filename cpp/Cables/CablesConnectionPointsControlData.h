// Object: CablesConnectionPointsControlData
// ClassId: 2446
// RuntimeId: 21358
// TypeInfo: 0x0000000144C1ABC0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Cables {
    class CablesConnectionPointsControlData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(CablesConnectionPointsControlData) == 0x28);
}
#pragma pack(pop)