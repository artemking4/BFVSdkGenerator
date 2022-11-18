// Object: TeamIdToIntEntityData
// ClassId: 3555
// RuntimeId: 37260
// TypeInfo: 0x0000000144D29FA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TeamIdToIntEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId TeamId; // 0x24
        Int32 Int; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(TeamIdToIntEntityData) == 0x30);
}
#pragma pack(pop)