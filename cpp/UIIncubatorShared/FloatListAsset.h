// Object: FloatListAsset
// ClassId: 221
// RuntimeId: 60527
// TypeInfo: 0x0000000144F6E740
#include "../UIIncubatorShared/ConfigListAsset.h"
#include "../UIIncubatorShared/FloatData.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class FloatListAsset : public UIIncubatorShared::ConfigListAsset {
        Array<UIIncubatorShared::FloatData> FloatTypes; // 0x20
    }; // 0x28
    static_assert(sizeof(FloatListAsset) == 0x28);
}
#pragma pack(pop)