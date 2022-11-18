// Object: ComponentTransformEntityBaseData
// ClassId: 2529
// RuntimeId: 28037
// TypeInfo: 0x0000000144F70D80
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

namespace VehicleShared {
    class ComponentTransformEntityBaseData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        Boolean UpdateOnVisualFrames; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(ComponentTransformEntityBaseData) == 0x28);
}