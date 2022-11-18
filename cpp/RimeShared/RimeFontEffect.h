// Object: RimeFontEffect
// ClassId: 708
// RuntimeId: 18713
// TypeInfo: 0x0000000144F27210
#include "../RimeShared/RimeFontEffectBase.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeFontEffect : public RimeShared::RimeFontEffectBase {
        CString EffectScript; // 0x20
    }; // 0x28
    static_assert(sizeof(RimeFontEffect) == 0x28);
}
#pragma pack(pop)