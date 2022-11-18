// Object: ObjectVariation
// ClassId: 604
// RuntimeId: 24355
// TypeInfo: 0x0000000144ED70F0
#include "../Core/Asset.h"
#include "../Global/Uint32.h"
#include "../Entity/ObjectBlueprintMetaData.h"

#pragma pack(push, 8)
namespace Entity {
    class ObjectVariation : public Core::Asset {
        Uint32 NameHash; // 0x20
        char pad_0x24[0x4];
        Entity::ObjectBlueprintMetaData MetaData; // 0x28
    }; // 0x30
    static_assert(sizeof(ObjectVariation) == 0x30);
}
#pragma pack(pop)