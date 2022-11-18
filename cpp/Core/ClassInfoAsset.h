// Object: ClassInfoAsset
// ClassId: 855
// RuntimeId: 6123
// TypeInfo: 0x0000000144BE9970
#include "../Core/ComplexTypeInfoAsset.h"
#include "../Core/ClassInfoRef.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Core {
    class ClassInfoAsset : public Core::ComplexTypeInfoAsset {
        Boolean IsAbstract; // 0x50
        Boolean IsSealed; // 0x51
        char pad_0x52[0x6];
        Core::ClassInfoRef SuperClassRef; // 0x58
    }; // 0x68
    static_assert(sizeof(ClassInfoAsset) == 0x68);
}
#pragma pack(pop)