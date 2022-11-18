// Object: BFUILayoutRadialListEntityData
// ClassId: 2295
// RuntimeId: 44538
// TypeInfo: 0x0000000144D97990
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUILayoutHorizontalAlignment.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutRadialListEntityData : public CasablancaShared::BFUILayoutEntityData {
        Core::Vec2 CenterPoint; // 0x28
        Float32 Radius; // 0x30
        Float32 ElementStep; // 0x34
        Float32 WeightingAngle; // 0x38
        Uint32 CenterElementIndex; // 0x3C
        CasablancaShared::BFUILayoutHorizontalAlignment HorizontalAlignment; // 0x40
        Boolean CenterElementEnabled; // 0x44
        Boolean CounterClockwiseLayout; // 0x45
        char pad_0x46[0x2];
    }; // 0x48
    static_assert(sizeof(BFUILayoutRadialListEntityData) == 0x48);
}
#pragma pack(pop)