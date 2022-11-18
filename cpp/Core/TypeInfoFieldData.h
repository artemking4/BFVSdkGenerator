// Object: TypeInfoFieldData
// ClassId: 5357
// RuntimeId: 32820
// TypeInfo: 0x0000000144BE9B70
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Core/TypeInfoRef.h"
#include "../Global/Boolean.h"
#include "../Core/ProtectionLevel.h"
#include "../Global/Uint32.h"
#include "../Core/AccessType.h"
#include "../Core/TypeInfoAttribute.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldData : public Core::DataContainer {
        Core::TypeInfoRef TypeRef; // 0x18
        CString Name; // 0x28
        Core::ProtectionLevel ProtectionLevel; // 0x30
        Uint32 MemorySortIndex; // 0x34
        Core::AccessType AccessType; // 0x38
        char pad_0x3C[0x4];
        Array<Core::TypeInfoAttribute> Attributes; // 0x40
        Boolean IsArray; // 0x48
        Boolean IsMeta; // 0x49
        Boolean IsExposed; // 0x4A
        Boolean AlwaysPersist; // 0x4B
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(TypeInfoFieldData) == 0x50);
}
#pragma pack(pop)