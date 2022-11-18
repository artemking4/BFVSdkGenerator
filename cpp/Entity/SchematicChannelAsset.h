// Object: SchematicChannelAsset
// ClassId: 716
// RuntimeId: 42559
// TypeInfo: 0x0000000144ED77F0
#include "../Core/Asset.h"
#include "../Entity/EventChannel.h"
#include "../Entity/LinkChannel.h"
#include "../Entity/PropertyChannel.h"

#pragma pack(push, 8)
namespace Entity {
    class SchematicChannelAsset : public Core::Asset {
        Array<Entity::EventChannel> Events; // 0x20
        Array<Entity::LinkChannel> Links; // 0x28
        Array<Entity::PropertyChannel> Properties; // 0x30
    }; // 0x38
    static_assert(sizeof(SchematicChannelAsset) == 0x38);
}
#pragma pack(pop)