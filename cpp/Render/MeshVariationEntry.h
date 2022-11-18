// Object: MeshVariationEntry
// ClassId: 4286
// RuntimeId: 52421
// TypeInfo: 0x0000000144F1CD00
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class MeshVariationEntry : public Core::DataContainer {
        CString VariationName; // 0x18
    }; // 0x20
    static_assert(sizeof(MeshVariationEntry) == 0x20);
}
#pragma pack(pop)