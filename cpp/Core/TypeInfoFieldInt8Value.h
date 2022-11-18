// Object: TypeInfoFieldInt8Value
// ClassId: 5367
// RuntimeId: 6925
// TypeInfo: 0x0000000144BE95F0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Int8.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldInt8Value : public Core::TypeInfoFieldValue {
        Int8 Value; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldInt8Value) == 0x28);
}
#pragma pack(pop)