// Object: IntListAsset
// ClassId: 222
// RuntimeId: 58781
// TypeInfo: 0x0000000144F6E6C0
#include "../UIIncubatorShared/ConfigListAsset.h"
#include "../UIIncubatorShared/IntData.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class IntListAsset : public UIIncubatorShared::ConfigListAsset {
        Array<UIIncubatorShared::IntData> IntTypes; // 0x20
    }; // 0x28
    static_assert(sizeof(IntListAsset) == 0x28);
}
#pragma pack(pop)