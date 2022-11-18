// Object: EnumTypeInfoAsset
// ClassId: 857
// RuntimeId: 13805
// TypeInfo: 0x0000000144BE9770
#include "../Core/TypeInfoAsset.h"
#include "../Core/EnumTypeEnumeratorData.h"

#pragma pack(push, 8)
namespace Core {
    class EnumTypeInfoAsset : public Core::TypeInfoAsset {
        Array<Core::EnumTypeEnumeratorData> Enumerators; // 0x40
    }; // 0x48
    static_assert(sizeof(EnumTypeInfoAsset) == 0x48);
}
#pragma pack(pop)