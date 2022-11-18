// Object: NativeFunctionTypeInfoAsset
// ClassId: 864
// RuntimeId: 57347
// TypeInfo: 0x0000000144BE8D70
#include "../Core/FunctionTypeInfoAsset.h"
#include "../Global/TypeRef.h"

#pragma pack(push, 8)
namespace Core {
    class NativeFunctionTypeInfoAsset : public Core::FunctionTypeInfoAsset {
        TypeRef Function; // 0x50
    }; // 0x58
    static_assert(sizeof(NativeFunctionTypeInfoAsset) == 0x58);
}
#pragma pack(pop)