// Object: EffectSystemComponent
// ClassId: 4937
// RuntimeId: 29371
// TypeInfo: 0x0000000144E23420
#include "../Entity/SubWorldDataComponent.h"
#include "../EffectBase/EffectParameterList.h"

#pragma pack(push, 8)
namespace EffectBase {
    class EffectSystemComponent : public Entity::SubWorldDataComponent {
        EffectBase::EffectParameterList EffectParameterList; // 0x18
    }; // 0x20
    static_assert(sizeof(EffectSystemComponent) == 0x20);
}
#pragma pack(pop)