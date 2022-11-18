// Object: ZoneStreamerLogicEntityData
// ClassId: 3932
// RuntimeId: 41106
// TypeInfo: 0x0000000144F7E5F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

namespace ZoneStreamer {
    class ZoneStreamerLogicEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ZoneStreamerLogicEntityData) == 0x28);
}