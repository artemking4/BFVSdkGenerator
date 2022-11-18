// Object: OwnerToQueryResultEntityData
// ClassId: 2927
// RuntimeId: 13845
// TypeInfo: 0x0000000144DE4B70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityFilter.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class OwnerToQueryResultEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::QueryEntityFilter OutputFilter; // 0x24
    }; // 0x28
    static_assert(sizeof(OwnerToQueryResultEntityData) == 0x28);
}
#pragma pack(pop)