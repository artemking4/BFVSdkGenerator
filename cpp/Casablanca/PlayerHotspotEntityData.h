// Object: PlayerHotspotEntityData
// ClassId: 3025
// RuntimeId: 52803
// TypeInfo: 0x0000000144C32770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class PlayerHotspotEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId TargetTeam; // 0x24
        Float32 HotspotIgnoreRadius; // 0x28
        Float32 HotspotIgnoreTime; // 0x2C
        Boolean SpottedOnly; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(PlayerHotspotEntityData) == 0x38);
}
#pragma pack(pop)