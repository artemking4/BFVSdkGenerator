// Object: DFSimTeamSettingsEntityData
// ClassId: 2570
// RuntimeId: 39490
// TypeInfo: 0x0000000144C1DB80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DFSimTeamSettingsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId TeamId; // 0x24
        Int32 MaxShips; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(DFSimTeamSettingsEntityData) == 0x30);
}
#pragma pack(pop)