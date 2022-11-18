// Object: ExplosionWindForceData
// ClassId: 1609
// RuntimeId: 8766
// TypeInfo: 0x0000000144E6D550
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class ExplosionWindForceData : public Core::DataContainer {
        Float32 Strength; // 0x18
        Float32 Variation; // 0x1C
        Float32 VariationRate; // 0x20
        Float32 MicroVariation; // 0x24
        Float32 Hardness; // 0x28
        Float32 ForceAsInstantVelocity; // 0x2C
        Boolean ShouldAffectVegetation; // 0x30
        Boolean ShouldAffectMeshScattering; // 0x31
        Boolean ShouldAffectEffects; // 0x32
        Boolean ShouldAffectCloth; // 0x33
        Boolean ShouldAffectPhysics; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(ExplosionWindForceData) == 0x38);
}
#pragma pack(pop)