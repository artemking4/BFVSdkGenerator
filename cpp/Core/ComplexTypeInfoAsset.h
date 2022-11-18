// Object: ComplexTypeInfoAsset
// ClassId: 854
// RuntimeId: 35559
// TypeInfo: 0x0000000144BE99F0
#include "../Core/TypeInfoAsset.h"
#include "../Core/TypeInfoFieldCollectionRef.h"
#include "../Global/Uint32.h"

namespace Core {
    class ComplexTypeInfoAsset : public Core::TypeInfoAsset {
        Array<Core::TypeInfoFieldCollectionRef> FieldCollections; // 0x40
        Uint32 Alignment; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(ComplexTypeInfoAsset) == 0x50);
}