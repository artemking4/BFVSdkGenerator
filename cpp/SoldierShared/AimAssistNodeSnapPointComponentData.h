// Object: AimAssistNodeSnapPointComponentData
// ClassId: 1708
// RuntimeId: 64186
// TypeInfo: 0x0000000144F39810
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class AimAssistNodeSnapPointComponentData : public Entity::GameComponentData {
        Uint32 Priority; // 0x80
        Float32 UnderReticleSphereRadius; // 0x84
        Float32 UnderReticleCapsuleLength; // 0x88
        Uint32 Priority_UnderReticle; // 0x8C
        Boolean Enabled; // 0x90
        char pad_0x91[0xF];
    }; // 0xA0
    static_assert(sizeof(AimAssistNodeSnapPointComponentData) == 0xA0);
}
#pragma pack(pop)