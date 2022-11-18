// Object: EncounterTypeCompareEntityData
// ClassId: 2692
// RuntimeId: 62611
// TypeInfo: 0x0000000144D0BD30
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/EncounterType.h"
#include "../CasablancaShared/EncounterFlowType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterTypeCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 InputType; // 0x24
        CasablancaShared::EncounterType EncounterType; // 0x28
        CasablancaShared::EncounterFlowType EncounterFlowType; // 0x30
        Boolean TriggerOnPropertyChange; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(EncounterTypeCompareEntityData) == 0x40);
}
#pragma pack(pop)