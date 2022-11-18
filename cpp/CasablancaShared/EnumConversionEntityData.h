// Object: EnumConversionEntityData
// ClassId: 2699
// RuntimeId: 37832
// TypeInfo: 0x0000000144D0AA30
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/EnumValueDefinition.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EnumConversionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::EnumValueDefinition> EnumValues; // 0x28
        CString Enumeration; // 0x30
        Boolean OutputValueFlags; // 0x38
        Boolean OutputEvents; // 0x39
        Boolean TriggerOnInit; // 0x3A
        Boolean TriggerOnPropertyChanged; // 0x3B
        Boolean AlwaysWriteOutputValues; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(EnumConversionEntityData) == 0x40);
}
#pragma pack(pop)