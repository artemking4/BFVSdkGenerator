// Object: BFTimeNudgeBiasEntityData
// ClassId: 2151
// RuntimeId: 23567
// TypeInfo: 0x0000000144D29EA0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTimeNudgeBiasEntityData : public Entity::EntityData {
        Float32 TimeNudgeBias; // 0x20
        Boolean ForceHighFrequencyUpdateRate; // 0x24
        Boolean AutomaticTimeNudge; // 0x25
        Boolean FastReplStatesAllowedByTimeNudgeBias; // 0x26
        Boolean FastReplStatesAllowedByServer; // 0x27
    }; // 0x28
    static_assert(sizeof(BFTimeNudgeBiasEntityData) == 0x28);
}
#pragma pack(pop)