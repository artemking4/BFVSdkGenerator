// Object: FunctionTypeInfoAsset
// ClassId: 858
// RuntimeId: 39110
// TypeInfo: 0x0000000144BE97F0
#include "../Core/TypeInfoAsset.h"
#include "../Core/TypeInfoParameterDataContainer.h"
#include "../Core/ClassInfoAsset.h"

namespace Core {
    class FunctionTypeInfoAsset : public Core::TypeInfoAsset {
        Array<Core::TypeInfoParameterDataContainer> Parameters; // 0x40
        Core::ClassInfoAsset Owner; // 0x48
    }; // 0x50
    static_assert(sizeof(FunctionTypeInfoAsset) == 0x50);
}