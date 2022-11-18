// Object: AudioRaycastCalculationEntityData
// ClassId: 2069
// RuntimeId: 15195
// TypeInfo: 0x0000000144DF33F0
#include "../Entity/EntityData.h"
#include "../DiceShooterShared/RayCalculationProperties.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../DiceShooterShared/RayHitMaterials.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AudioRaycastCalculationEntityData : public Entity::EntityData {
        Array<DiceShooterShared::RayCalculationProperties> InputRaysProperties; // 0x20
        Uint32 NumberOfAccumulationFrames; // 0x28
        Uint32 MaxIndoorinessModifierRayIndex; // 0x2C
        Int32 MaterialSoundIdWhenNoDominant; // 0x30
        char pad_0x34[0x4];
        Array<DiceShooterShared::RayHitMaterials> OutputHitSoundMaterials; // 0x38
        Float32 IndoorinessExponentiality; // 0x40
        Float32 MaxIndoorinessModifierRayValue; // 0x44
        Boolean EnableMaxIndoorinessModifierRay; // 0x48
        Boolean ClampRaycastsAtMaxDistance; // 0x49
        Boolean ReturnMaxDistanceIfNoRaysHitting; // 0x4A
        Boolean UseFirstDominantMaterial; // 0x4B
        Boolean TakeDefaultMaterialWhenNoMaterial; // 0x4C
        Boolean ContinuousUpdate; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(AudioRaycastCalculationEntityData) == 0x50);
}
#pragma pack(pop)