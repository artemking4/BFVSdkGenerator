// Object: SchematicChannelEntityData
// ClassId: 3143
// RuntimeId: 7062
// TypeInfo: 0x0000000144ED7770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Entity/SchematicChannelAsset.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Entity {
    class SchematicChannelEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Entity::SchematicChannelAsset Channel; // 0x28
        Array<Int32> InputProperties; // 0x30
        Array<Int32> InputRefProperties; // 0x38
        Array<Int32> OutputProperties; // 0x40
        Array<Int32> OutputRefProperties; // 0x48
    }; // 0x50
    static_assert(sizeof(SchematicChannelEntityData) == 0x50);
}
#pragma pack(pop)