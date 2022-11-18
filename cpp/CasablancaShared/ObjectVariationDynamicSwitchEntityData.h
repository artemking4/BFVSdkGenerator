// Object: ObjectVariationDynamicSwitchEntityData
// ClassId: 2913
// RuntimeId: 8094
// TypeInfo: 0x0000000144D5AE60
#include "../Entity/EntityData.h"
#include "../CasablancaShared/ObjectVariationSource.h"
#include "../Entity/ObjectVariation.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ObjectVariationDynamicSwitchEntityData : public Entity::EntityData {
        CasablancaShared::ObjectVariationSource VariationSource; // 0x20
        char pad_0x24[0x4];
        Entity::ObjectVariation Variation1; // 0x28
        Entity::ObjectVariation Variation2; // 0x30
    }; // 0x38
    static_assert(sizeof(ObjectVariationDynamicSwitchEntityData) == 0x38);
}
#pragma pack(pop)