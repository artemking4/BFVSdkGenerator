// Object: UIPathData
// ClassId: 5515
// RuntimeId: 37296
// TypeInfo: 0x0000000144D1FD70
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/UIPathVertexData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIPathData : public Core::DataContainer {
        Float32 LineWidth; // 0x18
        char pad_0x1C[0x4];
        Array<CasablancaShared::UIPathVertexData> Vertices; // 0x20
    }; // 0x28
    static_assert(sizeof(UIPathData) == 0x28);
}
#pragma pack(pop)