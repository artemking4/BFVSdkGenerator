// Object: ClothSystemComponent
// ClassId: 4936
// RuntimeId: 27174
// TypeInfo: 0x0000000144E21B50
#include "../Entity/SubWorldDataComponent.h"
#include "../Core/QualityScalableFloat.h"

#pragma pack(push, 8)
namespace Cloth {
    class ClothSystemComponent : public Entity::SubWorldDataComponent {
        Core::QualityScalableFloat ActivationRadius; // 0x18
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ClothSystemComponent) == 0x30);
}
#pragma pack(pop)