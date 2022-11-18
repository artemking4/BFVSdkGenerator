// Object: UISplineVertex
// ClassId: 5525
// RuntimeId: 58136
// TypeInfo: 0x0000000144D1FCF0
#include "../Core/DataContainer.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISplineVertex : public Core::DataContainer {
        Core::Vec2 Position; // 0x18
        Float32 Tension; // 0x20
        Float32 Continuity; // 0x24
        Float32 Bias; // 0x28
        Boolean Enabled; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(UISplineVertex) == 0x30);
}
#pragma pack(pop)