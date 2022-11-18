// Object: TrackPlayerQueryEntityData
// ClassId: 3581
// RuntimeId: 13471
// TypeInfo: 0x0000000144C33670
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class TrackPlayerQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 TrackOnlyIdHash; // 0x24
    }; // 0x28
    static_assert(sizeof(TrackPlayerQueryEntityData) == 0x28);
}
#pragma pack(pop)