// Object: FlagMeshHolderEntityData
// ClassId: 2746
// RuntimeId: 63385
// TypeInfo: 0x0000000144C31970
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Entity/ObjectBlueprint.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FlagMeshHolderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId Team; // 0x24
        Entity::ObjectBlueprint CTFSoldierCarriedFlag; // 0x28
        Entity::ObjectBlueprint CTFVehicleCarriedFlag; // 0x30
    }; // 0x38
    static_assert(sizeof(FlagMeshHolderEntityData) == 0x38);
}
#pragma pack(pop)