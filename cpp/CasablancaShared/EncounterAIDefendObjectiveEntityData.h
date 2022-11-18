// Object: EncounterAIDefendObjectiveEntityData
// ClassId: 3367
// RuntimeId: 47103
// TypeInfo: 0x0000000144D0BE30
#include "../CasablancaShared/EncounterAIObjectiveEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class EncounterAIDefendObjectiveEntityData : public CasablancaShared::EncounterAIObjectiveEntityData {
        Float32 Radius; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(EncounterAIDefendObjectiveEntityData) == 0x80);
}
#pragma pack(pop)