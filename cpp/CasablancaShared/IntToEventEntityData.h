// Object: IntToEventEntityData
// ClassId: 2810
// RuntimeId: 17110
// TypeInfo: 0x0000000144D11D80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/IntSelection.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class IntToEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::IntSelection> PossibleMatches; // 0x28
        Int32 InputValue; // 0x30
        Boolean TriggerOnPropertyChanged; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(IntToEventEntityData) == 0x38);
}
#pragma pack(pop)