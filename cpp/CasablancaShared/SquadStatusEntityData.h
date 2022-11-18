// Object: SquadStatusEntityData
// ClassId: 3511
// RuntimeId: 28865
// TypeInfo: 0x0000000144D4B0F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadStatusEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 ProximityDistance; // 0x24
        Boolean CheckProximityWhenOwnerIsDead; // 0x28
        Boolean AllowDeadSquadMembersInProximity; // 0x29
        Boolean Enabled; // 0x2A
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(SquadStatusEntityData) == 0x30);
}
#pragma pack(pop)