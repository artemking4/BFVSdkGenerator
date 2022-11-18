// Object: TypeInfoFieldFloat32Value
// ClassId: 5361
// RuntimeId: 37084
// TypeInfo: 0x0000000144BE91F0
#include "../Core/TypeInfoFieldValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Core {
    class TypeInfoFieldFloat32Value : public Core::TypeInfoFieldValue {
        Float32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TypeInfoFieldFloat32Value) == 0x28);
}
#pragma pack(pop)