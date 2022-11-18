// Object: TypeInfoFieldEnumValue
// ClassId: 5360
// RuntimeId: 4770
// TypeInfo: 0x0000000144BE9070
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/TypeRef.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldEnumValue : public Core::TypeInfoFieldValue {
        Uint32 Value; // 0x20
        char pad_0x24[0x4];
        TypeRef EnumInfo; // 0x28
    }; // 0x30
    static_assert(sizeof(TypeInfoFieldEnumValue) == 0x30);
}
#pragma pack(pop)