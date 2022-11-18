// Object: EncounterAIObjectiveEntityData
// ClassId: 3365
// RuntimeId: 56755
// TypeInfo: 0x0000000144D0BEB0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

namespace CasablancaShared {
    class EncounterAIObjectiveEntityData : public Entity::SpatialEntityData {
        Int32 MinimumAI; // 0x60
        Int32 MaximumAI; // 0x64
        Int32 LifetimeMaximumAI; // 0x68
        Boolean StartEnabled; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(EncounterAIObjectiveEntityData) == 0x70);
}