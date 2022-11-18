// Object: InterfaceDescriptorData
// ClassId: 1526
// RuntimeId: 57299
// TypeInfo: 0x0000000144ED7FF0
#include "../Core/DynamicDataContainer.h"
#include "../Entity/DynamicEvent.h"
#include "../Entity/DynamicLink.h"

#pragma pack(push, 8)
namespace Entity {
    class InterfaceDescriptorData : public Core::DynamicDataContainer {
        Array<Entity::DynamicEvent> InputEvents; // 0x20
        Array<Entity::DynamicEvent> OutputEvents; // 0x28
        Array<Entity::DynamicLink> InputLinks; // 0x30
        Array<Entity::DynamicLink> OutputLinks; // 0x38
    }; // 0x40
    static_assert(sizeof(InterfaceDescriptorData) == 0x40);
}
#pragma pack(pop)