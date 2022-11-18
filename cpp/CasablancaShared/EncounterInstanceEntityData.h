// Object: EncounterInstanceEntityData
// ClassId: 2689
// RuntimeId: 7156
// TypeInfo: 0x0000000144D0BAB0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterInstanceEntityData : public Entity::EntityData {
        Float32 IntensityFactorOverride; // 0x20
        Boolean EnableActivation; // 0x24
        Boolean EnableDeactivation; // 0x25
        Boolean EnableIntensityOverride; // 0x26
        Boolean AutoDestroy; // 0x27
    }; // 0x28
    static_assert(sizeof(EncounterInstanceEntityData) == 0x28);
}
#pragma pack(pop)