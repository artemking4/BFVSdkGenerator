// Object: DestructionControllerComponentData
// ClassId: 1752
// RuntimeId: 16717
// TypeInfo: 0x0000000144F0DEC0
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Physics {
    class DestructionControllerComponentData : public Entity::GameComponentData {
        Float32 BreakingLength; // 0x80
        Float32 FracturePosition; // 0x84
        Float32 DestructionRadius; // 0x88
        Float32 Delay; // 0x8C
        Float32 RefineRadius; // 0x90
        Boolean StructuralIntegrityAnalyzerEnable; // 0x94
        char pad_0x95[0xB];
    }; // 0xA0
    static_assert(sizeof(DestructionControllerComponentData) == 0xA0);
}
#pragma pack(pop)