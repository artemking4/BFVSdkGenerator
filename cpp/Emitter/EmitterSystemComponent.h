// Object: EmitterSystemComponent
// ClassId: 4938
// RuntimeId: 28431
// TypeInfo: 0x0000000144E2A9C0
#include "../Entity/SubWorldDataComponent.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Emitter {
    class EmitterSystemComponent : public Entity::SubWorldDataComponent {
        Uint32 dummy; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(EmitterSystemComponent) == 0x20);
}
#pragma pack(pop)