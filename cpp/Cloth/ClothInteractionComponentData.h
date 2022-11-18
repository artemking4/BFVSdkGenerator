// Object: ClothInteractionComponentData
// ClassId: 1691
// RuntimeId: 47347
// TypeInfo: 0x0000000144E21850
#include "../Entity/ComponentData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Cloth {
    class ClothInteractionComponentData : public Entity::ComponentData {
        Boolean ClothCollision; // 0x80
        char pad_0x81[0xF];
    }; // 0x90
    static_assert(sizeof(ClothInteractionComponentData) == 0x90);
}
#pragma pack(pop)