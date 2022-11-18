// Object: NonStaticPlayerSphereTriggerEntityData
// ClassId: 3421
// RuntimeId: 36159
// TypeInfo: 0x0000000144C83040
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class NonStaticPlayerSphereTriggerEntityData : public Entity::SpatialEntityData {
        Float32 Radius; // 0x60
        Boolean Enabled; // 0x64
        Boolean TriggerOnCharacters; // 0x65
        Boolean TriggerOnVehicles; // 0x66
        char pad_0x67[0x9];
    }; // 0x70
    static_assert(sizeof(NonStaticPlayerSphereTriggerEntityData) == 0x70);
}
#pragma pack(pop)