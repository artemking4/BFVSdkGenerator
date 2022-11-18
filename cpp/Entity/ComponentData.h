// Object: ComponentData
// ClassId: 1688
// RuntimeId: 41929
// TypeInfo: 0x0000000144ED73F0
#include "../Entity/GameObjectData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Uint8.h"
#include "../Global/Boolean.h"

namespace Entity {
    class ComponentData : public Entity::GameObjectData {
        Array<Entity::GameObjectData> Components; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform Transform; // 0x30
        Uint8 ClientIndex; // 0x70
        Uint8 ServerIndex; // 0x71
        Boolean Excluded; // 0x72
        char pad_0x73[0xD];
    }; // 0x80
    static_assert(sizeof(ComponentData) == 0x80);
}