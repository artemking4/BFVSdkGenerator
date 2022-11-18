// Object: CableGroupData
// ClassId: 2445
// RuntimeId: 4811
// TypeInfo: 0x0000000144C1AA40
#include "../Entity/EntityData.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Cables {
    class CableGroupData : public Entity::EntityData {
        Entity::ObjectBlueprint Blueprint; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform MeshTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(CableGroupData) == 0x70);
}
#pragma pack(pop)