// Object: TypeInfoFieldSHA1Value
// ClassId: 5369
// RuntimeId: 10349
// TypeInfo: 0x0000000144BE8F70
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/SHA1.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldSHA1Value : public Core::TypeInfoFieldValue {
        SHA1 Value; // 0x20
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(TypeInfoFieldSHA1Value) == 0x38);
}
#pragma pack(pop)