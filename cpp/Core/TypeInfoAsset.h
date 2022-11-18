// Object: TypeInfoAsset
// ClassId: 853
// RuntimeId: 7320
// TypeInfo: 0x0000000144BE9BF0
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Core/TypeInfoAttribute.h"

namespace Core {
    class TypeInfoAsset : public Core::Asset {
        CString ModuleName; // 0x20
        CString TypeName; // 0x28
        Array<Core::TypeInfoAttribute> Attributes; // 0x30
        Boolean IsMeta; // 0x38
        Boolean IsNative; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(TypeInfoAsset) == 0x40);
}